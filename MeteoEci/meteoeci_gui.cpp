#include "meteoeci_gui.h"
#include "ui_meteoeci_gui.h"
#include "sensor.h"
#include "registro.h"
#include <vector>
#include <string>
#include <sstream>
#include <iostream>

using namespace std;

std::string usuario_global; ///&lt; Variable global donde se guardan los datos del usuario validado.

MeteoECI_GUI::MeteoECI_GUI(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MeteoECI_GUI)

{
    ui->setupUi(this);
    _db_local = new Db_Local("sensores.db");
}

MeteoECI_GUI::~MeteoECI_GUI(){
    delete ui;
    delete _tmr;
}
/**
 * @brief Toma los ultimos promedios de los sensores y los muestra en la UI.
 * @return No retorna nada.
 */
void MeteoECI_GUI::actualizarGUI(){
    ui->txt_Lat->setText( QString::number( _prom_gps[0] ) + " °");
    ui->txt_Lon->setText( QString::number( _prom_gps[1] ) +" °");
    ui->txt_Alt->setText( QString::number( _prom_gps[2] ) +" m");
    ui->txt_Vel->setText( QString::number( _prom_Viento[0] ) + " m/s");
    ui->txt_Dir->setText( QString::number( _prom_Viento[1] ) +" °");
    ui->txt_Temp->setText(QString::number( _prom_Tem[0] ) +" °C");
    ui->txt_Hum->setText(QString::number( _prom_Tem[1] ) + " %");
    ui->txt_Preci->setText(QString::number( _prom_Preci ) + " mm");

}

/**
 * @brief Una vez se valida la existencia del usuario ingresado, utiliza el timer para generar datos
 * y empezar a sacar promedio.
 * @param _tmr timer.
 * @return No retorna nada.
 */
void MeteoECI_GUI::empezar()
{
    _tmr = new QTimer();
    _tmr->setInterval((ui->spinBox->text().toDouble())*10);
    connect( _tmr, SIGNAL(timeout()), this, SLOT(leerSensores()) );
    _tmr->start();
    _itera = 0;
    _prom_gps[0] = _prom_gps[1] = _prom_gps[2] = 0.;
    _prom_Tem[0] = _prom_Tem[1] = 0.;
    _prom_Viento[0] = _prom_Viento[1] = 0.;
    _prom_Preci = 0.;

    actualizarGUI();
}
/**
 * @brief Toma los datos generados por el timer y llama el metodo actualizar_GUI
 * para mostrarlos en pantalla.
 * @return No retorna nada.
 */
void MeteoECI_GUI::leerSensores(){
    // Leer los sensores

    _gps.actualizar_gps();
    _prom_gps[0] += _gps.latitud();
    _prom_gps[1] += _gps.longitud();
    _prom_gps[2] += _gps.altura();

    _tem.actualizar_temperatura();
    _prom_Tem[0] += _tem.temperatura();
    _prom_Tem[1] += _tem.humedad();

    _viento.actualizar_velocidad();
    _prom_Viento[0] += _viento.velocidad();
    _prom_Viento[1] += _viento.direccion();

    _preci.actualizar_precipitacion();
    _prom_Preci += _preci.leerDato();

    // Contador de cada 5 seg. Un minuto son 12.
    _itera++;
    if( _itera == 60/(ui->spinBox->text().toDouble()) ){
        _itera = 0;
        _min++;
        if( _min >= 60 ){
            _min = 0;
            _hr++;
           if( _hr == 24) _hr = 0;
        }
        // Calcular promedios de minuto

        _prom_gps[0] /= 60/(ui->spinBox->text().toDouble());
        _prom_gps[1] /= 60/(ui->spinBox->text().toDouble());
        _prom_gps[2] /= 60/(ui->spinBox->text().toDouble());

        _prom_Tem[0] /= 60/(ui->spinBox->text().toDouble());
        _prom_Tem[1] /= 60/(ui->spinBox->text().toDouble());

        _prom_Viento[0] /= 60/(ui->spinBox->text().toDouble());
        _prom_Viento[1] /= 60/(ui->spinBox->text().toDouble());

        // Actualizar GUI
        actualizarGUI();
        if( _db_local->abrir_DB()){
            _db_local->guardarDatos(usuario_global,_prom_gps , _prom_Tem, _prom_Viento, _prom_Preci);
            _db_local->cerrar_DB();
        }

        // Acumuladores a 0
        _prom_gps[0] = _prom_gps[1] = _prom_gps[2] = 0.;
        _prom_Tem[0] = _prom_Tem[1] = 0.;
        _prom_Viento[0] = _prom_Viento[1] = 0.;
        _prom_Preci = 0.;
    }
}

/**
 * @brief Valida la existencia de un usuario.
 * @param datos, si existe el usuario aca se guardar los datos de dicho usuario.
 * @return No retorna nada.
 */
void MeteoECI_GUI::on_pushButton_clicked()
{
    std::vector<std::string> datos;
    _db_local->abrir_DB();
    bool r = _db_local->buscarUsuario(ui->lineEdit_25->text().toStdString(), ui->lineEdit_22->text().toStdString());    
    if(r == true){
        this->resize(1020, 398);
        this->setFixedSize(this->width(), this->height());
        datos = _db_local->recuperarDatosUsuarios(ui->lineEdit_25->text().toStdString(), ui->lineEdit_22->text().toStdString(), datos);
        ui->txt_Preci_2->setText(QString::fromStdString(datos[1]));
        ui->txt_Preci_3->setText(QString::fromStdString(datos[2]));
        ui->txt_Preci_4->setText(QString::fromStdString(datos[3]));
        ui->txt_Preci_6->setText(QString::fromStdString(datos[4]) + "/"+QString::fromStdString(datos[5])+"/"+QString::fromStdString(datos[6]));
        ui->txt_Preci_5->setText(QString::fromStdString(datos[7]));
        usuario_global=datos[0];
        empezar();
     }
    _db_local->cerrar_DB();
}

/**
 * @brief Muestra la ventana de registro para ingresar los datos del nuevo usuario.
 * @param reg, objeto de la clase Registro, esta es la ventana que se mostratara.
 * @return No retorna nada.
 */
void MeteoECI_GUI::on_pushButton_2_clicked()
{
    Registro reg(this);
    reg.setModal( true );
    reg.show();
    connect(&reg, &Registro::registro_signal, this, &MeteoECI_GUI::registro_slot);
    reg.exec();
    this->show();
}

/**
 * @brief Toma los datos ingresados en la ventana de registro que son emitidos
 * por una señas y los almacena en la DB
 * @param age, toma el dato del año de nacimiento del usuario se lo resta a 2020
 * y con esto se tiene la edad del usuario.
 * @return No retorna nada.
 */
void MeteoECI_GUI::registro_slot(std::vector<std::string> datos_registro)
{
    int age = 2020 - stoi(datos_registro[5]);
    _db_local->abrir_DB();
    _db_local->guardarDatosUsuarios(datos_registro, age);
    _db_local->cerrar_DB();
}

