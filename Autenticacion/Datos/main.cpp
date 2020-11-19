#include "datos.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Datos w;
    w.show();

    return a.exec();
}
