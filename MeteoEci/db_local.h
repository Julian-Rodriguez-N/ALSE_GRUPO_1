#ifndef DB_LOCAL_H
#define DB_LOCAL_H

#include <string>
#include <vector>
#include <sqlite3.h>
#include <sstream>
/**
 * @class Db_Local
 * @brief En esta clase se declaran todos los metodos con los que se usara la DB, ya sea
 * crear una nueva tabla por usuario, consultar datos o insertarlos.
 */
class Db_Local{

public:
    Db_Local(std::string path);
    bool abrir_DB();
    bool cerrar_DB();
    bool buscarUsuario( std::string nombre, std::string pssw );
    std::string recuperarPasswd( std::string nombre_usuario );
    std::vector<double>& recuperarDatos(std::vector<double>& datos);
    std::vector<std::string>& recuperarDatosUsuarios(std::string nombre, std::string pssw, std::vector<std::string>& datos);
    bool guardarDatos(std::string usuario_global, double gps[], double tem[], double viento[], double preci);
    bool guardarDatosUsuarios(std::vector<std::string> datos_registro, int age);

private:
    Db_Local();
    sqlite3     *_db;
    std::string _url;
    static int rellenar(void* data, int argc, char* argv[], char* campos[] );
    static int validarUsuario(void* data, int argc, char* argv[], char* campos[] );
};

#endif // DB_LOCAL_H
