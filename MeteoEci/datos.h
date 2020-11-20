#ifndef DATOS_H
#define DATOS_H

#include <QDialog>

namespace Ui {
class Datos;
}

class Datos : public QDialog
{
    Q_OBJECT

public:
    explicit Datos(QWidget *parent = 0);
    ~Datos();

private:
    Ui::Datos *ui;
};

#endif // DATOS_H
