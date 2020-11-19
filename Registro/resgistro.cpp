#include "resgistro.h"
#include "ui_resgistro.h"

Resgistro::Resgistro(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Resgistro)
{
    ui->setupUi(this);
}

Resgistro::~Resgistro()
{
    delete ui;
}
