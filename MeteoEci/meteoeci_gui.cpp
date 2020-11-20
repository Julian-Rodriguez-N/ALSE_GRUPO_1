#include "meteoeci_gui.h"
#include "ui_meteoeci_gui.h"
#include "sensor.h"
#include "datos.h"


MeteoECI_GUI::MeteoECI_GUI(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MeteoECI_GUI)
{
    ui->setupUi(this);

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

    _db_local = new Db_Local("sensores.db");

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
        // Acumuladores a 0
        _prom_gps[0] = _prom_gps[1] = _prom_gps[2] = 0.;
        _prom_Tem[0] = _prom_Tem[1] = 0.;
        _prom_Viento[0] = _prom_Viento[1] = 0.;
        _prom_Preci = 0.;
    }
}

void MeteoECI_GUI::on_pushButton_clicked()
{

    _db_local->abrir_DB();
    std::cout << ui->lineEdit_25->text().toStdString() << std::endl;
    bool r = _db_local->buscarUsuario(ui->lineEdit_25->text().toStdString());

    if(r==true){
        Datos dat( this );
        dat.setModal( true );
        dat.show();
        dat.exec();
        this->show();
        empezar();
    }
    _db_local->cerrar_DB();
}

