#ifndef METEOECI_GUI_H
#define METEOECI_GUI_H


#include <QMainWindow>
#include <QTimer>
#include "sensor.h"
#include "db_local.h"
#include <string>


namespace Ui {
class MeteoECI_GUI;
}
/**
 * @class MeteoECI_GUI
 * @brief Ventana principal de la UI donde se podra ingresar o registrarse como usuario,
 * ver los dato de quien inicie sesion y visualizar los ultimos promedios almacenados en la DB.
 */
class MeteoECI_GUI : public QMainWindow
{
    Q_OBJECT
public:
    explicit MeteoECI_GUI(QWidget *parent = 0);
    ~MeteoECI_GUI();
    void actualizarGUI();
    void empezar();

public slots:
    void leerSensores();

private slots:
    void on_pushButton_2_clicked();
    void registro_slot(std::vector<std::string> datos_registro);

private slots:
    void on_pushButton_clicked();

private:
    Ui::MeteoECI_GUI *ui;
    QTimer*     _tmr;
    GPS         _gps;
    Temp_Hum    _tem;
    Viento      _viento;
    Sensor      _preci;
    int         _hr, _min, _itera;
    double      _prom_gps[3], _prom_Tem[2], _prom_Viento[2], _prom_Preci;
    Db_Local    *_db_local;
};

#endif // METEOECI_GUI_H
