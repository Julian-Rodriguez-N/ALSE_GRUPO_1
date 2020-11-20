#ifndef DB_LOCAL_H
#define DB_LOCAL_H

#include <string>
#include <vector>
#include <sqlite3.h>


class Db_Local{

public:
    Db_Local(std::string path);
    bool abrir_DB();
    bool cerrar_DB();
    bool buscarUsuario( std::string nombre);
    std::string recuperarPasswd( std::string nombre_usuario );
    std::vector<double>& recuperarDatos(std::vector<double>& datos);
    bool guardarDatos(std::string fecha, std::string hora, double gps[], double tem[], double viento[], double preci);
    bool guardarDatosUsuarios(std::string nombre, std::string apellido, double documento, double dia, double mes,\
                              double año, double edad, double contraseña);


private:
    Db_Local();
    sqlite3     *_db;
    std::string _url;
    static int rellenar(void* data, int argc, char* argv[], char* campos[] );
    static int validarUsuario(void* data, int argc, char* argv[], char* campos[] );
};

#endif // DB_LOCAL_H
