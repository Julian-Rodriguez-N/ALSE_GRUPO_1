#include "registro.h"
#include "ui_registro.h"
#include <vector>
#include <string>
#include <sstream>
#include <iostream>

Registro::Registro(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Registro)
{
    ui->setupUi(this);
}

Registro::~Registro()
{
    delete ui;
}

void Registro::on_pushButton_clicked()
{
    std::vector<std::string> datos_registro(9);
    std::cout << ui->lineEdit->text().toStdString() << std::endl;
    datos_registro[0]=ui->lineEdit->text().toStdString();
    datos_registro[1]=ui->lineEdit_2->text().toStdString();
    datos_registro[2]=ui->lineEdit_3->text().toStdString();
    datos_registro[3]=ui->lineEdit_5->text().toStdString();
    datos_registro[4]=ui->lineEdit_6->text().toStdString();
    datos_registro[5]=ui->lineEdit_7->text().toStdString();
    datos_registro[6]=ui->lineEdit_8->text().toStdString();
    datos_registro[7]=ui->lineEdit_4->text().toStdString();
    datos_registro[8]="0";
    std::cout << datos_registro[1] << std::endl;
    emit( this->registro_signal(datos_registro));
    this->hide();
}
