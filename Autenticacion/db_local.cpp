#include "db_local.h"
#include <sqlite3.h>
#include <string>
#include <sstream>
#include <iostream>

Db_Local::Db_Local(std::string path){
    _url = path;
}

bool Db_Local::abrir_DB(){
    char *zErrMsg = 0;
    int rc;

    rc = sqlite3_open( _url.c_str(), &_db);

    if( rc != SQLITE_OK)
       return(false);
    std::cout << "DB Opened" << std::endl;
    return true;
}

bool Db_Local::cerrar_DB(){
    int rc = sqlite3_close(_db);

    if( rc != SQLITE_OK )
        return false;

    return true;
}

std::string Db_Local::recuperarPasswd(std::string nombre_usuario){

}

int Db_Local::rellenar(void *data, int argc, char *argv[], char *campos[]){


}

std::vector<double>& Db_Local::recuperarDatos(std::vector<double>& datos){
    // Aquí se deben leer los datos de la DB y con ellos llenar el vector

}

bool Db_Local::guardarDatos(std::string fecha, std::string hora, double gps[], double tem[], double viento[], double preci){
    std::stringstream sql;
    char *mesg = 0;
    int rc;
    sql << "INSERT INTO `TBL_DATOS` ( `fecha`, `hora`, `latitud`, `longitud`," \
         "`altura`, `temperatura`, `humedad`, `velocidad_viento`, `direccion_viento`," \
         "`precipitacion`) VALUES (";
    sql << "'" << fecha << "', '" << hora << "', " << gps[0] << ", " << gps[1] << ", " << gps[2] << ", ";
    sql << tem[0] << ", " << tem[1] << ", " << viento[0] << ", " << viento[1] << ", " ;
    sql << preci << ");" ;

    //std::cout << sql.str() << std::endl;

    rc = sqlite3_exec(_db, sql.str().c_str(), 0, 0, &mesg );

    if (rc != SQLITE_OK )
        return false;

    return true;

}
bool Db_Local::guardarDatosUsuarios(std::string nombre, std::string apellido, double documento,\
                            double dia, double mes, double año, double edad, double contraseña){

    std::stringstream sql;
    char *mesg = 0;
    int rc;
    sql << "INSERT INTO `usuarios` ( `nombre`, `apellido`, `documento`, `dia`," \
         "`mes`, `año`, `edad`, `contraseña`) VALUES (";
    sql << "'" << nombre << "', '" << apellido << "', " << documento << ", " << dia << ", " << mes << ", ";
    sql << año << ", " << edad << ", " << contraseña << ");" ;

    //std::cout << sql.str() << std::endl;

    rc = sqlite3_exec(_db, sql.str().c_str(), 0, 0, &mesg );

    if (rc != SQLITE_OK )
        return false;

    return true;

}


Db_Local::Db_Local(){

}

int Db_Local::validarUsuario(void *data, int argc, char *argv[], char *campos[]){




}

bool Db_Local::buscarUsuario(std::string nombre){
    char* zErrMsg = 0;
    bool existe = false;

    std::string sql = "SELECT * FROM usuarios WHERE nombre = '" + nombre + "';" ;
    int rc = sqlite3_exec(_db, sql.c_str(), validarUsuario, (void*)&existe, &zErrMsg);

    return existe;
}

