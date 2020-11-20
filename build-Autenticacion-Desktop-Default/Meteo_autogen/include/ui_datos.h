/********************************************************************************
** Form generated from reading UI file 'datos.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DATOS_H
#define UI_DATOS_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Datos
{
public:
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_2;
    QLineEdit *lineEdit_7;
    QLineEdit *lineEdit;
    QLineEdit *lineEdit_2;
    QHBoxLayout *horizontalLayout_8;
    QLabel *label_2;
    QLabel *label_4;
    QLabel *label_5;
    QWidget *layoutWidget_2;
    QVBoxLayout *verticalLayout_2;
    QLineEdit *lineEdit_23;
    QLabel *label_6;
    QLabel *label;
    QWidget *layoutWidget_3;
    QVBoxLayout *verticalLayout_3;
    QLineEdit *lineEdit_24;
    QLabel *label_7;

    void setupUi(QDialog *Datos)
    {
        if (Datos->objectName().isEmpty())
            Datos->setObjectName(QStringLiteral("Datos"));
        Datos->resize(690, 212);
        layoutWidget = new QWidget(Datos);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(20, 50, 651, 54));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        lineEdit_7 = new QLineEdit(layoutWidget);
        lineEdit_7->setObjectName(QStringLiteral("lineEdit_7"));
        lineEdit_7->setEnabled(true);
        lineEdit_7->setReadOnly(true);

        horizontalLayout_2->addWidget(lineEdit_7);

        lineEdit = new QLineEdit(layoutWidget);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setEnabled(true);
        lineEdit->setReadOnly(true);

        horizontalLayout_2->addWidget(lineEdit);

        lineEdit_2 = new QLineEdit(layoutWidget);
        lineEdit_2->setObjectName(QStringLiteral("lineEdit_2"));
        lineEdit_2->setEnabled(true);
        lineEdit_2->setReadOnly(true);

        horizontalLayout_2->addWidget(lineEdit_2);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setSpacing(6);
        horizontalLayout_8->setObjectName(QStringLiteral("horizontalLayout_8"));
        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName(QStringLiteral("label_2"));

        horizontalLayout_8->addWidget(label_2);

        label_4 = new QLabel(layoutWidget);
        label_4->setObjectName(QStringLiteral("label_4"));

        horizontalLayout_8->addWidget(label_4);

        label_5 = new QLabel(layoutWidget);
        label_5->setObjectName(QStringLiteral("label_5"));

        horizontalLayout_8->addWidget(label_5);


        verticalLayout->addLayout(horizontalLayout_8);

        layoutWidget_2 = new QWidget(Datos);
        layoutWidget_2->setObjectName(QStringLiteral("layoutWidget_2"));
        layoutWidget_2->setGeometry(QRect(20, 120, 211, 50));
        verticalLayout_2 = new QVBoxLayout(layoutWidget_2);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        lineEdit_23 = new QLineEdit(layoutWidget_2);
        lineEdit_23->setObjectName(QStringLiteral("lineEdit_23"));
        lineEdit_23->setEnabled(true);
        lineEdit_23->setReadOnly(true);

        verticalLayout_2->addWidget(lineEdit_23);

        label_6 = new QLabel(layoutWidget_2);
        label_6->setObjectName(QStringLiteral("label_6"));

        verticalLayout_2->addWidget(label_6);

        label = new QLabel(Datos);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(290, 10, 101, 17));
        layoutWidget_3 = new QWidget(Datos);
        layoutWidget_3->setObjectName(QStringLiteral("layoutWidget_3"));
        layoutWidget_3->setGeometry(QRect(240, 120, 211, 50));
        verticalLayout_3 = new QVBoxLayout(layoutWidget_3);
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setContentsMargins(11, 11, 11, 11);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        lineEdit_24 = new QLineEdit(layoutWidget_3);
        lineEdit_24->setObjectName(QStringLiteral("lineEdit_24"));
        lineEdit_24->setEnabled(true);
        lineEdit_24->setReadOnly(true);

        verticalLayout_3->addWidget(lineEdit_24);

        label_7 = new QLabel(layoutWidget_3);
        label_7->setObjectName(QStringLiteral("label_7"));

        verticalLayout_3->addWidget(label_7);


        retranslateUi(Datos);

        QMetaObject::connectSlotsByName(Datos);
    } // setupUi

    void retranslateUi(QDialog *Datos)
    {
        Datos->setWindowTitle(QApplication::translate("Datos", "Datos", Q_NULLPTR));
        label_2->setText(QApplication::translate("Datos", "Nombre", Q_NULLPTR));
        label_4->setText(QApplication::translate("Datos", "Apellido", Q_NULLPTR));
        label_5->setText(QApplication::translate("Datos", "Documento", Q_NULLPTR));
        label_6->setText(QApplication::translate("Datos", "Fecha de nacimiento", Q_NULLPTR));
        label->setText(QApplication::translate("Datos", "Sus datos son", Q_NULLPTR));
        label_7->setText(QApplication::translate("Datos", "Edad", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Datos: public Ui_Datos {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DATOS_H
