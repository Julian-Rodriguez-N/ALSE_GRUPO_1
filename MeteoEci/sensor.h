#ifndef SENSOR_H
#define SENSOR_H

#include <iostream>
#include <string>
#include <sstream>
#include <cmath>
/**
 * @class Sensor
 * @brief Clase donde se generan los datos con los que se calculan los promedios de
 * de los distintos sensores.
 */
class Sensor{

private:
    double *_dato;
    int _tamano;

public:
    Sensor(int tamano = 1){
        _dato = new double[tamano];
        _tamano = tamano;
    }
    ~Sensor(){ delete []_dato; }

    double leerDato(int i = 0){
        if(i<_tamano)
            return _dato[i];
        else
            return 0 ; }

   void actualizar_gps(){
        for(int i=0; i < _tamano; i++)
            if(i == 0)
                _dato[i] = ( rand() % -180 - 180);
            else if(i == 1)
                _dato[i] = ( rand() % -180 - 180);
            else if(i == 2)
                _dato[i] = ( rand() % 4500);
     }

    void actualizar_temperatura(){
        for(int i=0; i < _tamano; i++)
            if(i==0)
                _dato[i] = ( rand() % -10 - 45);
            else if(i==1)
                _dato[i] = ( rand() % 100);
        }

    void actualizar_velocidad(){
        for(int i=0; i < _tamano; i++)
            if(i==0)
                _dato[i] = ( rand() % 40);
            else if(i==1)
                _dato[i] = ( rand() % -180 - 180);
    }

    void actualizar_precipitacion(){
        for(int i=0; i < _tamano; i++)
            _dato[i] = ( rand() % 50)/2;
    }
    /*void actualizar(){
        for(int i=0; i < _tamano; i++)
            _dato[i] = ( rand() % 1000) / 10.;
    }
    */
    std::string mostrarDatos(){
        std::stringstream a;
        for(int i =0; i< _tamano; i++)
            a << _dato[i] << "; ";

        a << std::endl;
        return a.str();
    }
};

class GPS:public Sensor{
public:
    GPS():Sensor(3){}
    double latitud() {return leerDato(0);}
    double longitud() {return leerDato(1);}
    double altura() {return leerDato(2);}
};

class Temp_Hum: public Sensor{
public:
    Temp_Hum():Sensor(2){}
    double temperatura() {return leerDato(0);}
    double humedad() { return leerDato(1);}
};

class Viento: public Sensor{
public:
    Viento():Sensor(2){}
    double velocidad() {return leerDato(0);}
    double direccion() {return leerDato(1);}
};

#endif // SENSOR_H
