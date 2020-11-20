/********************************************************************************
** Form generated from reading UI file 'registro.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REGISTRO_H
#define UI_REGISTRO_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Registro
{
public:
    QPushButton *pushButton;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_3;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QVBoxLayout *verticalLayout_4;
    QLineEdit *lineEdit;
    QLineEdit *lineEdit_2;
    QLineEdit *lineEdit_3;
    QHBoxLayout *horizontalLayout_2;
    QHBoxLayout *horizontalLayout;
    QLabel *label_4;
    QComboBox *comboBox;
    QComboBox *comboBox_2;
    QDoubleSpinBox *doubleSpinBox;

    void setupUi(QDialog *Registro)
    {
        if (Registro->objectName().isEmpty())
            Registro->setObjectName(QStringLiteral("Registro"));
        Registro->resize(502, 278);
        Registro->setMaximumSize(QSize(502, 278));
        pushButton = new QPushButton(Registro);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(220, 210, 89, 25));
        layoutWidget = new QWidget(Registro);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(40, 27, 441, 173));
        verticalLayout_2 = new QVBoxLayout(layoutWidget);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        label = new QLabel(layoutWidget);
        label->setObjectName(QStringLiteral("label"));

        verticalLayout->addWidget(label);

        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName(QStringLiteral("label_2"));

        verticalLayout->addWidget(label_2);

        label_3 = new QLabel(layoutWidget);
        label_3->setObjectName(QStringLiteral("label_3"));

        verticalLayout->addWidget(label_3);


        horizontalLayout_3->addLayout(verticalLayout);

        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setSpacing(6);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        lineEdit = new QLineEdit(layoutWidget);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));

        verticalLayout_4->addWidget(lineEdit);

        lineEdit_2 = new QLineEdit(layoutWidget);
        lineEdit_2->setObjectName(QStringLiteral("lineEdit_2"));

        verticalLayout_4->addWidget(lineEdit_2);

        lineEdit_3 = new QLineEdit(layoutWidget);
        lineEdit_3->setObjectName(QStringLiteral("lineEdit_3"));

        verticalLayout_4->addWidget(lineEdit_3);


        horizontalLayout_3->addLayout(verticalLayout_4);


        verticalLayout_2->addLayout(horizontalLayout_3);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label_4 = new QLabel(layoutWidget);
        label_4->setObjectName(QStringLiteral("label_4"));

        horizontalLayout->addWidget(label_4);

        comboBox = new QComboBox(layoutWidget);
        comboBox->setObjectName(QStringLiteral("comboBox"));

        horizontalLayout->addWidget(comboBox);

        comboBox_2 = new QComboBox(layoutWidget);
        comboBox_2->setObjectName(QStringLiteral("comboBox_2"));

        horizontalLayout->addWidget(comboBox_2);

        doubleSpinBox = new QDoubleSpinBox(layoutWidget);
        doubleSpinBox->setObjectName(QStringLiteral("doubleSpinBox"));
        doubleSpinBox->setDecimals(0);
        doubleSpinBox->setMinimum(1920);
        doubleSpinBox->setMaximum(2020);
        doubleSpinBox->setSingleStep(10);
        doubleSpinBox->setValue(1920);

        horizontalLayout->addWidget(doubleSpinBox);


        horizontalLayout_2->addLayout(horizontalLayout);


        verticalLayout_2->addLayout(horizontalLayout_2);


        retranslateUi(Registro);

        QMetaObject::connectSlotsByName(Registro);
    } // setupUi

    void retranslateUi(QDialog *Registro)
    {
        Registro->setWindowTitle(QApplication::translate("Registro", "Registro", Q_NULLPTR));
        pushButton->setText(QApplication::translate("Registro", "Validar", Q_NULLPTR));
        label->setText(QApplication::translate("Registro", "Nombre", Q_NULLPTR));
        label_2->setText(QApplication::translate("Registro", "Apellido", Q_NULLPTR));
        label_3->setText(QApplication::translate("Registro", "Documento", Q_NULLPTR));
        label_4->setText(QApplication::translate("Registro", "Fecha de nacimiento", Q_NULLPTR));
        comboBox->clear();
        comboBox->insertItems(0, QStringList()
         << QApplication::translate("Registro", "Dia", Q_NULLPTR)
         << QApplication::translate("Registro", "01", Q_NULLPTR)
         << QApplication::translate("Registro", "02", Q_NULLPTR)
         << QApplication::translate("Registro", "03", Q_NULLPTR)
         << QApplication::translate("Registro", "04", Q_NULLPTR)
         << QApplication::translate("Registro", "05", Q_NULLPTR)
         << QApplication::translate("Registro", "06", Q_NULLPTR)
         << QApplication::translate("Registro", "07", Q_NULLPTR)
         << QApplication::translate("Registro", "08", Q_NULLPTR)
         << QApplication::translate("Registro", "09", Q_NULLPTR)
         << QApplication::translate("Registro", "10", Q_NULLPTR)
         << QApplication::translate("Registro", "11", Q_NULLPTR)
         << QApplication::translate("Registro", "12", Q_NULLPTR)
         << QApplication::translate("Registro", "13", Q_NULLPTR)
         << QApplication::translate("Registro", "15", Q_NULLPTR)
         << QApplication::translate("Registro", "16", Q_NULLPTR)
         << QApplication::translate("Registro", "17", Q_NULLPTR)
         << QApplication::translate("Registro", "18", Q_NULLPTR)
         << QApplication::translate("Registro", "19", Q_NULLPTR)
         << QApplication::translate("Registro", "20", Q_NULLPTR)
         << QApplication::translate("Registro", "21", Q_NULLPTR)
         << QApplication::translate("Registro", "22", Q_NULLPTR)
         << QApplication::translate("Registro", "23", Q_NULLPTR)
         << QApplication::translate("Registro", "24", Q_NULLPTR)
         << QApplication::translate("Registro", "25", Q_NULLPTR)
         << QApplication::translate("Registro", "26", Q_NULLPTR)
         << QApplication::translate("Registro", "27", Q_NULLPTR)
         << QApplication::translate("Registro", "28", Q_NULLPTR)
         << QApplication::translate("Registro", "29", Q_NULLPTR)
         << QApplication::translate("Registro", "30", Q_NULLPTR)
         << QApplication::translate("Registro", "31", Q_NULLPTR)
        );
        comboBox_2->clear();
        comboBox_2->insertItems(0, QStringList()
         << QApplication::translate("Registro", "Mes", Q_NULLPTR)
         << QApplication::translate("Registro", "01", Q_NULLPTR)
         << QApplication::translate("Registro", "02", Q_NULLPTR)
         << QApplication::translate("Registro", "03", Q_NULLPTR)
         << QApplication::translate("Registro", "04", Q_NULLPTR)
         << QApplication::translate("Registro", "05", Q_NULLPTR)
         << QApplication::translate("Registro", "06", Q_NULLPTR)
         << QApplication::translate("Registro", "07", Q_NULLPTR)
         << QApplication::translate("Registro", "08", Q_NULLPTR)
         << QApplication::translate("Registro", "09", Q_NULLPTR)
         << QApplication::translate("Registro", "10", Q_NULLPTR)
         << QApplication::translate("Registro", "11", Q_NULLPTR)
         << QApplication::translate("Registro", "12", Q_NULLPTR)
        );
    } // retranslateUi

};

namespace Ui {
    class Registro: public Ui_Registro {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REGISTRO_H
