#include "db_local.h"
#include <sqlite3.h>
#include <string.h>
#include <sstream>
#include <iostream>

std::vector<std::string> datos_global(10); ///&lt; Vectro global donde iran los datos del usuario ingresado.

Db_Local::Db_Local(std::string path){
    _url = path;
}

/**
 * @brief Abre la base de datos.
 * @param rc, entero con el que se ejecuta la operacion de abrir la DB.
 * @return retorna un booleano que confirma si se abrio o no la DB.
 */
bool Db_Local::abrir_DB(){
    int rc;
    rc = sqlite3_open(_url.c_str(), &_db);
    if( rc != SQLITE_OK)
       return(false);
    std::cout << "DB OPENED" << std::endl;
    return true;
}

/**
 * @brief Cierra la base de datos.
 * @param rc, entero con el que se ejecuta la operacion de cerrar la nueva tabla en la DB.
 * @return retorna un booleano que confirma o no si se cierra la DB.
 */
bool Db_Local::cerrar_DB(){
    int rc = sqlite3_close(_db);

    if( rc != SQLITE_OK )
        return false;
    std::cout << "DB CLOSED" << std::endl;

    return true;
}

/**
 * @brief Callback que se encarga de llenar el vector global con los datos del usuario que ingresa.
 * @param i, entero con el que se iterara en el vector.
 * @return retorna un 0 que confirma que todo se ejecuto correctamente.
 */
int Db_Local::rellenar(void *data, int argc, char *argv[], char *campos[]){
    int i;
    std::cout << (const char*)data << std::endl;

    for(i = 0; i<argc; i++){
        datos_global[i]=(argv[i] ? argv[i] : "NULL");
    }
    return 0;
}

/**
 * @brief Toma los datos de usuario y contraseña ingresados en la ventana principal
 * y recupera la informacion del dicho usuario de la tabla usuarios.
 * @param zErrMsg, variable necesario para ejecutar la consulta, se usa como mensaje de error
 * pero aca no es asi.
 * @param rc, string en la que se guarda la instruccion de recuperar los datos.
 * @param datos, vector con los datos del usuario ingresado que retornara a la ventana principal
 * @return retorna un 0 que confirma que todo se ejecuto correctamente.
 */
std::vector<std::string>& Db_Local::recuperarDatosUsuarios(std::string nombre, std::string pssw, std::vector<std::string>& datos){
    char* zErrMsg = 0;
    std::string sql = "SELECT * FROM usuarios WHERE usuario ='" + nombre + "' AND contrasena ='"+ pssw +"';" ;
    int rc = sqlite3_exec(_db, sql.c_str(), rellenar, (void*)&datos, &zErrMsg);
    datos = datos_global;
    return datos;
}

/**
 * @brief Guarda cada minuto el promedio de los datos leidos por los sensores.
 * @param mesg, variable necesaria para ejecutar la consulta, se usa como mensaje de error
 * pero aca no es asi.
 * @param rc, string en la que se guarda la instruccion de guardar los datos.
 * @return retorna un booleano que confirma que todo se ejecuto correctamente.
 */
bool Db_Local::guardarDatos(std::string usuario_global, double gps[], double tem[], double viento[], double preci){
    std::string sql;
    char *mesg = 0;
    int rc;
    sql = "INSERT INTO tabla_datos (id_usuario, latitud, longitud, altura,"
          "temperatura, humedad, velocidad_viento, direccion_viento,"
          "precipitacion) "
          "VALUES ('" + usuario_global + "', '" + std::to_string(gps[0]) + "', '" + std::to_string(gps[1]) + "', '" + std::to_string(gps[2]) +
          "', '" + std::to_string(tem[0]) + "', '" + std::to_string(tem[1]) +"', '" + std::to_string(viento[0]) +
          "', '" + std::to_string(viento[1]) +"','" + std::to_string(preci) + "');";
    rc = sqlite3_exec(_db, sql.c_str(), 0, 0, &mesg );
    if (rc != SQLITE_OK )
        std::cout << "no inserta" << std::endl;
        return false;
    return true;
}

/**
 * @brief Guarda los datos del usuario nuevo a registrar.
 * @param mesg, variable necesaria para ejecutar la consulta, se usa como mensaje de error
 * pero aca no es asi.
 * @param rc, string en la que se guarda la instruccion de guardar los datos.
 * @return retorna un booleano que confirma que todo se ejecuto correctamente.
 */
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

/**
 * @brief Callback que revisa si el usuario y contraseña ingresados en la venta principal
 * existen en la base de datos.
 * @param prueba, valor que retorna el metodo cuando este finaliza.
 * @param exi, booleano que confirma le existencia de dicho usuario y contraseña en la DB.
 * @return retorna un booleano que confirma que existe.
 */
int Db_Local::validarUsuario(void *data, int argc, char *argv[], char *campos[]){
    int prueba = 0;
    std::cout << "Si entra al callback" << std::endl;
    bool *exi = (bool*)data;
    *exi = true;
    return prueba;
}

/**
 * @brief Toma los datos ingresados en la ventana principal y llama al callback
 * para verificar que existan en la DB.
 * @param zErrMsg, variable necesaria para ejecutar la consulta, se usa como mensaje de error
 * pero aca no es asi.
 * @param rc, string en la que se guarda la instruccion de guardar los datos.
 * @return retorna un booleano que confirma la existencia del usuario en la DB.
 */
bool Db_Local::buscarUsuario(std::string nombre, std::string pssw){
    char* zErrMsg = 0;
    bool existe = false;
    std::string sql = "SELECT * FROM usuarios WHERE usuario ='" + nombre + "' AND contrasena ='"+ pssw +"';" ; 
    int rc = sqlite3_exec(_db, sql.c_str(), validarUsuario, (void*)&existe, &zErrMsg);
    return existe;
}
