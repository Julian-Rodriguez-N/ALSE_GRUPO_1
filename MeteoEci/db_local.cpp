#include "db_local.h"
#include <sqlite3.h>
#include <string.h>
#include <sstream>
#include <iostream>
std::vector<std::string> datos_global(10);

Db_Local::Db_Local(std::string path){
    _url = path;

   }

bool Db_Local::abrir_DB(){
    int rc;
    rc = sqlite3_open(_url.c_str(), &_db);
    // Qué pasaría si el archivo se corrompe? Cómo podemos mitigar ese riesgo?
    /* CREATE TABLE IF NOT EXISTS `TBL_DATOS` ( `id_muestra` INTEGER NOT NULL PRIMARY KEY AUTOINCREMENT,
     * `fecha` TEXT NOT NULL, `hora` TEXT NOT NULL, `latitud` REAL NOT NULL, `longitud` REAL NOT NULL,
     * `altura` REAL NOT NULL, `temperatura` REAL NOT NULL, `humedad` REAL NOT NULL, `velocidad_viento`
     * REAL NOT NULL, `direccion_viento` REAL NOT NULL, `precipitacion` REAL NOT NULL )
     * */
    if( rc != SQLITE_OK)
       return(false);
    std::cout << "DB OPENED" << std::endl;
    return true;
}

bool Db_Local::abrir_DB_Usurios(std::string usuario)
{
    std::string sql;
    char *mesg = 0;
    int rc;
    rc = sqlite3_open(_url.c_str(), &_db);
    sql = "CREATE TABLE IF NOT EXISTS " + usuario + "_tbl" + " (id_muestra INTEGER NOT NULL PRIMARY KEY AUTOINCREMENT,"
          "latitud TEXT NOT NULL, longitud TEXT NOT NULL, "
          "altura TEXT NOT NULL, temperatura TEXT NOT NULL, humedad TEXT NOT NULL, velocidad_viento "
          "TEXT NOT NULL, direccion_viento TEXT NOT NULL, precipitacion TEXT NOT NULL);";
    rc = sqlite3_exec(_db, sql.c_str(), 0, 0, &mesg );
    if( rc != SQLITE_OK)
       std::cout << "DB NO CREADA" << std::endl;
       return(false);

    return true;
}

bool Db_Local::cerrar_DB(){
    int rc = sqlite3_close(_db);

    if( rc != SQLITE_OK )
        return false;
    std::cout << "DB CLOSED" << std::endl;

    return true;
}

std::string Db_Local::recuperarPasswd(std::string nombre_usuario){
    std::string prueba = "prueba";
    return prueba;

}

int Db_Local::rellenar(void *data, int argc, char *argv[], char *campos[]){
    std::vector<std::string> datos(10);
    int i;
    std::cout << (const char*)data << std::endl;

    for(i = 0; i<argc; i++){
        datos_global[i]=(argv[i] ? argv[i] : "NULL");
    }

    return 0;

}
std::vector<double>& Db_Local::recuperarDatos(std::vector<double>& datos){


    return datos;

    // Aquí se deben leer los datos de la DB y con ellos llenar el vector
}
std::vector<std::string>& Db_Local::recuperarDatosUsuarios(std::string nombre, std::string pssw, std::vector<std::string>& datos){
    char* zErrMsg = 0;
    std::string sql = "SELECT * FROM usuarios WHERE usuario ='" + nombre + "' AND contrasena ='"+ pssw +"';" ;
    int rc = sqlite3_exec(_db, sql.c_str(), rellenar, (void*)&datos, &zErrMsg);
    datos = datos_global;
    return datos;

}

bool Db_Local::guardarDatos(std::string usuario_global, double gps[], double tem[], double viento[], double preci){
    std::string sql;
    char *mesg = 0;
    int rc;
    sql = "INSERT INTO "+ usuario_global +"_tbl (latitud, longitud, altura,"
          "temperatura, humedad, velocidad_viento, direccion_viento,"
          "precipitacion) "
          "VALUES ('" + std::to_string(gps[0]) + "', '" + std::to_string(gps[1]) + "', '" + std::to_string(gps[2]) +
          "', '" + std::to_string(tem[0]) + "', '" + std::to_string(tem[1]) +"', '" + std::to_string(viento[0]) +
          "', '" + std::to_string(viento[1]) +"','" + std::to_string(preci) + "');";

    //std::cout << sql.str() << std::endl;

    rc = sqlite3_exec(_db, sql.c_str(), 0, 0, &mesg );

    if (rc != SQLITE_OK )
        std::cout << "no inserta" << std::endl;
        return false;

    return true;

}
bool Db_Local::guardarDatosUsuarios(std::vector<std::string> datos_registro, int age){
    std::string sql;
    char *mesg = 0;
    int rc;
    sql = "INSERT INTO usuarios (nombre, apellido, documento, dia, mes, anio, edad,contrasena , usuario)"
          "VALUES ('" + datos_registro[0] + "', '" + datos_registro[1] + "', '" + datos_registro[2] +
          "', '" + datos_registro[3] + "', '" + datos_registro[4] +"', '" + datos_registro[5] +
          "', '" + std::to_string(age) +"','" + datos_registro[6] + "', '" + datos_registro[7] +"');";

    rc = sqlite3_exec(_db, sql.c_str(), 0, 0, &mesg );

    if (rc != SQLITE_OK )
        std::cout << "no inserta usuarios" << std::endl;
        return false;

    return true;

}

Db_Local::Db_Local(){

}

int Db_Local::validarUsuario(void *data, int argc, char *argv[], char *campos[]){
    int prueba = 0;
    std::cout << "Si entra al callback" << std::endl;
    bool *exi = (bool*)data;
    *exi = true;
    return prueba;

}

bool Db_Local::buscarUsuario(std::string nombre, std::string pssw){
    char* zErrMsg = 0;
    bool existe = false;
    std::string sql = "SELECT * FROM usuarios WHERE usuario ='" + nombre + "' AND contrasena ='"+ pssw +"';" ; 
    int rc = sqlite3_exec(_db, sql.c_str(), validarUsuario, (void*)&existe, &zErrMsg);
    return existe;
}
