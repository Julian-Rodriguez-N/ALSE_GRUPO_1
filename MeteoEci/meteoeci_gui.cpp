#include "meteoeci_gui.h"
#include "ui_meteoeci_gui.h"
#include "sensor.h"
#include "registro.h"
#include <vector>
#include <string>
#include <sstream>
#include <iostream>

using namespace std;

std::string usuario_global;

MeteoECI_GUI::MeteoECI_GUI(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MeteoECI_GUI)

{

    ui->setupUi(this);
    ui->txt_Temp->hide();
    _db_local = new Db_Local("sensores.db");    

}

MeteoECI_GUI::~MeteoECI_GUI(){
    delete ui;
    delete _tmr;
}

void MeteoECI_GUI::actualizarGUI(){
    ui->txt_Lat->setText( QString::number( _prom_gps[0] ) + " °");
    ui->txt_Lon->setText( QString::number( _prom_gps[1] ) +" °");
    ui->txt_Alt->setText( QString::number( _prom_gps[2] ) +" m");
    ui->txt_Vel->setText( QString::number( _prom_Viento[0] ) + " km/hr");
    ui->txt_Dir->setText( QString::number( _prom_Viento[0] ) +" °");
    ui->txt_Temp->setText(QString::number( _prom_Tem[0] ) +" °C");
    ui->txt_Hum->setText(QString::number( _prom_Preci ) + " %");
    ui->txt_Preci->setText(QString::number( _prom_Preci ) + " mm/día");
}

void MeteoECI_GUI::empezar()
{
    _tmr = new QTimer();
    _tmr->setInterval( 50 );
    connect( _tmr, SIGNAL(timeout()), this, SLOT(leerSensores()) );
    _tmr->start();
    _itera = 0;
    _prom_gps[0] = _prom_gps[1] = _prom_gps[2] = 0.;
    _prom_Tem[0] = _prom_Tem[1] = 0.;
    _prom_Viento[0] = _prom_Viento[1] = 0.;
    _prom_Preci = 0.;

    actualizarGUI();
}

void MeteoECI_GUI::leerSensores(){
    // Leer los sensores
    _gps.actualizar();
    _prom_gps[0] += _gps.latitud();
    _prom_gps[1] += _gps.longitud();
    _prom_gps[2] += _gps.altura();

    _tem.actualizar();
    _prom_Tem[0] += _tem.temperatura();
    _prom_Tem[1] += _tem.humedad();

    _viento.actualizar();
    _prom_Viento[0] += _viento.velocidad();
    _prom_Viento[1] += _viento.direccion();

    _preci.actualizar();
    _prom_Preci += _preci.leerDato();

    // Contador de cada 5 seg. Un minuto son 12.
    _itera++;
    if( _itera == 12 ){
        _itera = 0;
        _min++;
        if( _min == 60 ){
            _min = 0;
            _hr++;
           if( _hr == 24) _hr = 0;
        }
        // Calcular promedios de minuto

        _prom_gps[0] /= 12.;
        _prom_gps[1] /= 12.;
        _prom_gps[2] /= 12.;

        _prom_Tem[0] /= 12.;
        _prom_Tem[1] /= 12.;

        _prom_Viento[0] /= 12.;
        _prom_Viento[1] /= 12.;

        // Actualizar GUI
        actualizarGUI();
        if( _db_local->abrir_DB()){
            _db_local->abrir_DB_Usurios(usuario_global);
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

void MeteoECI_GUI::on_pushButton_clicked()
{

    std::vector<std::string> datos;
    _db_local->abrir_DB();
    bool r = _db_local->buscarUsuario(ui->lineEdit_25->text().toStdString(), ui->lineEdit_22->text().toStdString());    
    if(r == true){
        this->resize(1020, 340);
        empezar();
        datos = _db_local->recuperarDatosUsuarios(ui->lineEdit_25->text().toStdString(), ui->lineEdit_22->text().toStdString(), datos);
        ui->txt_Preci_2->setText(QString::fromStdString(datos[1]));
        ui->txt_Preci_3->setText(QString::fromStdString(datos[2]));
        ui->txt_Preci_4->setText(QString::fromStdString(datos[3]));
        ui->txt_Preci_6->setText(QString::fromStdString(datos[4]) + "/"+QString::fromStdString(datos[5])+"/"+QString::fromStdString(datos[6]));
        ui->txt_Preci_5->setText(QString::fromStdString(datos[7]));
        usuario_global=datos[9];
     }
    _db_local->cerrar_DB();
}


void MeteoECI_GUI::on_pushButton_2_clicked()
{
    Registro reg(this);
    reg.setModal( true );
    reg.show();
    connect(&reg, &Registro::registro_signal, this, &MeteoECI_GUI::registro_slot);
    reg.exec();
    this->show();

}

void MeteoECI_GUI::registro_slot(std::vector<std::string> datos_registro)
{
    int age = 2020 - stoi(datos_registro[5]);

    _db_local->abrir_DB();
    _db_local->guardarDatosUsuarios(datos_registro, age);
    _db_local->cerrar_DB();
}

