/********************************************************************************
** Form generated from reading UI file 'resgistro.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RESGISTRO_H
#define UI_RESGISTRO_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>

QT_BEGIN_NAMESPACE

class Ui_Resgistro
{
public:

    void setupUi(QDialog *Resgistro)
    {
        if (Resgistro->objectName().isEmpty())
            Resgistro->setObjectName(QStringLiteral("Resgistro"));
        Resgistro->resize(400, 300);

        retranslateUi(Resgistro);

        QMetaObject::connectSlotsByName(Resgistro);
    } // setupUi

    void retranslateUi(QDialog *Resgistro)
    {
        Resgistro->setWindowTitle(QApplication::translate("Resgistro", "Resgistro", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Resgistro: public Ui_Resgistro {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RESGISTRO_H
