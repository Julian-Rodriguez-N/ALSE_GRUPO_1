#ifndef REGISTRO_H
#define REGISTRO_H

#include <QDialog>

namespace Ui {
class Registro;
}

class Registro : public QDialog
{
    Q_OBJECT

public:
    explicit Registro(QWidget *parent = 0);
    ~Registro();

private:
    Ui::Registro *ui;
};

#endif // REGISTRO_H
