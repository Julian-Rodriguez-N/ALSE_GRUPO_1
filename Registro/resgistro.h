#ifndef RESGISTRO_H
#define RESGISTRO_H

#include <QDialog>

namespace Ui {
class Resgistro;
}

class Resgistro : public QDialog
{
    Q_OBJECT

public:
    explicit Resgistro(QWidget *parent = 0);
    ~Resgistro();

private:
    Ui::Resgistro *ui;
};

#endif // RESGISTRO_H
