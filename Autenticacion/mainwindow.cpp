#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "registro.h"
#include "datos.h"
#include <string>
#include <sstream>
#include <iostream>
MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)

{
    ui->setupUi(this);
    _db_local = new Db_Local("sensores.db");
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_2_clicked()
{

    _db_local->abrir_DB();
    Registro regis( this );
    regis.setModal( true );
    regis.show();
    //this->hide();
    //connect( &divi, &Divi_dialog::enviar_info, this, &Matrices::tipo_division );
    regis.exec();
    this->show();
    _db_local->guardarDatosUsuarios(,)
}

void MainWindow::on_pushButton_clicked()
{
    _db_local->abrir_DB();
    bool r = _db_local->buscarUsuario((ui->lineEdit_25->text().toStdString()));
    std::cout << ui->lineEdit_25->text().toStdString() << std::endl;
    if (r == true)
    {
        Datos dat( this );
        dat.setModal( true );
        dat.show();
        //this->hide();
        //connect( &divi, &Divi_dialog::enviar_info, this, &Matrices::tipo_division );
        dat.exec();
        this->show();

    }
    _db_local->cerrar_DB();
    std::cout << "DB Closed" << std::endl;
}
