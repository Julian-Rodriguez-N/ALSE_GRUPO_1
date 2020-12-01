#ifndef REGISTRO_H
#define REGISTRO_H

#include <QDialog>

namespace Ui {

class Registro;
}

/**
 * @class Registro
 * @brief Clase de la UI en la que se enseña el formulario para registrarse, envia una señal a la ventana principal
 * con los datos ingresados para que esta los guarde en la DB.
 */
class Registro : public QDialog
{
    Q_OBJECT
public:
    explicit Registro(QWidget *parent = 0);
    ~Registro();
signals:
    void registro_signal(std::vector<std::string> datos_registro);

private slots:
    void on_pushButton_clicked();

private:
    Ui::Registro *ui;
};

#endif // REGISTRO_H
