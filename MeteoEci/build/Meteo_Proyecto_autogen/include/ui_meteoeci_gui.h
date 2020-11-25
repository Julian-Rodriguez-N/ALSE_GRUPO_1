/********************************************************************************
** Form generated from reading UI file 'meteoeci_gui.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_METEOECI_GUI_H
#define UI_METEOECI_GUI_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MeteoECI_GUI
{
public:
    QWidget *centralWidget;
    QPushButton *pushButton;
    QLabel *label_10;
    QLabel *label_13;
    QPushButton *pushButton_2;
    QFrame *line_2;
    QFrame *line;
    QLabel *label_14;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_3;
    QGroupBox *groupBox;
    QGridLayout *gridLayout;
    QHBoxLayout *horizontalLayout;
    QLineEdit *txt_Temp;
    QLineEdit *txt_Hum;
    QGroupBox *groupBox_3;
    QGridLayout *gridLayout_3;
    QLineEdit *txt_Preci;
    QGroupBox *groupBox_2;
    QGridLayout *gridLayout_2;
    QHBoxLayout *horizontalLayout_2;
    QLineEdit *txt_Lat;
    QLineEdit *txt_Lon;
    QLineEdit *txt_Alt;
    QHBoxLayout *horizontalLayout_6;
    QGroupBox *groupBox_4;
    QGridLayout *gridLayout_4;
    QHBoxLayout *horizontalLayout_4;
    QLineEdit *txt_Vel;
    QLineEdit *txt_Dir;
    QWidget *layoutWidget1;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout_7;
    QLabel *label_11;
    QLineEdit *lineEdit_25;
    QHBoxLayout *horizontalLayout_8;
    QLabel *label_12;
    QLineEdit *lineEdit_22;
    QLabel *label;
    QFrame *line_3;
    QFrame *line_4;
    QGroupBox *groupBox_8;
    QGridLayout *gridLayout_8;
    QLineEdit *txt_Preci_5;
    QWidget *widget;
    QHBoxLayout *horizontalLayout_12;
    QGroupBox *groupBox_5;
    QGridLayout *gridLayout_5;
    QLineEdit *txt_Preci_2;
    QGroupBox *groupBox_6;
    QGridLayout *gridLayout_6;
    QLineEdit *txt_Preci_3;
    QWidget *widget1;
    QHBoxLayout *horizontalLayout_5;
    QGroupBox *groupBox_7;
    QGridLayout *gridLayout_7;
    QLineEdit *txt_Preci_4;
    QGroupBox *groupBox_9;
    QGridLayout *gridLayout_9;
    QLineEdit *txt_Preci_6;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QToolBar *toolBar;

    void setupUi(QMainWindow *MeteoECI_GUI)
    {
        if (MeteoECI_GUI->objectName().isEmpty())
            MeteoECI_GUI->setObjectName(QStringLiteral("MeteoECI_GUI"));
        MeteoECI_GUI->resize(550, 584);
        MeteoECI_GUI->setMinimumSize(QSize(550, 312));
        MeteoECI_GUI->setMaximumSize(QSize(1280, 720));
        centralWidget = new QWidget(MeteoECI_GUI);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        centralWidget->setMinimumSize(QSize(550, 557));
        pushButton = new QPushButton(centralWidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(230, 440, 89, 25));
        label_10 = new QLabel(centralWidget);
        label_10->setObjectName(QStringLiteral("label_10"));
        label_10->setGeometry(QRect(239, 330, 71, 17));
        label_13 = new QLabel(centralWidget);
        label_13->setObjectName(QStringLiteral("label_13"));
        label_13->setGeometry(QRect(200, 470, 151, 17));
        pushButton_2 = new QPushButton(centralWidget);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(230, 500, 89, 25));
        line_2 = new QFrame(centralWidget);
        line_2->setObjectName(QStringLiteral("line_2"));
        line_2->setGeometry(QRect(20, 10, 511, 20));
        line_2->setFrameShape(QFrame::HLine);
        line_2->setFrameShadow(QFrame::Sunken);
        line = new QFrame(centralWidget);
        line->setObjectName(QStringLiteral("line"));
        line->setGeometry(QRect(20, 300, 511, 20));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);
        label_14 = new QLabel(centralWidget);
        label_14->setObjectName(QStringLiteral("label_14"));
        label_14->setGeometry(QRect(214, 30, 121, 17));
        layoutWidget = new QWidget(centralWidget);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(19, 59, 511, 233));
        verticalLayout_2 = new QVBoxLayout(layoutWidget);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        groupBox = new QGroupBox(layoutWidget);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        gridLayout = new QGridLayout(groupBox);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        txt_Temp = new QLineEdit(groupBox);
        txt_Temp->setObjectName(QStringLiteral("txt_Temp"));
        txt_Temp->setReadOnly(true);

        horizontalLayout->addWidget(txt_Temp);

        txt_Hum = new QLineEdit(groupBox);
        txt_Hum->setObjectName(QStringLiteral("txt_Hum"));
        txt_Hum->setReadOnly(true);

        horizontalLayout->addWidget(txt_Hum);


        gridLayout->addLayout(horizontalLayout, 0, 0, 1, 1);


        horizontalLayout_3->addWidget(groupBox);

        groupBox_3 = new QGroupBox(layoutWidget);
        groupBox_3->setObjectName(QStringLiteral("groupBox_3"));
        gridLayout_3 = new QGridLayout(groupBox_3);
        gridLayout_3->setSpacing(6);
        gridLayout_3->setContentsMargins(11, 11, 11, 11);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        txt_Preci = new QLineEdit(groupBox_3);
        txt_Preci->setObjectName(QStringLiteral("txt_Preci"));
        txt_Preci->setReadOnly(true);

        gridLayout_3->addWidget(txt_Preci, 0, 0, 1, 1);


        horizontalLayout_3->addWidget(groupBox_3);


        verticalLayout->addLayout(horizontalLayout_3);

        groupBox_2 = new QGroupBox(layoutWidget);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        gridLayout_2 = new QGridLayout(groupBox_2);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        txt_Lat = new QLineEdit(groupBox_2);
        txt_Lat->setObjectName(QStringLiteral("txt_Lat"));
        txt_Lat->setReadOnly(true);

        horizontalLayout_2->addWidget(txt_Lat);

        txt_Lon = new QLineEdit(groupBox_2);
        txt_Lon->setObjectName(QStringLiteral("txt_Lon"));
        txt_Lon->setReadOnly(true);

        horizontalLayout_2->addWidget(txt_Lon);

        txt_Alt = new QLineEdit(groupBox_2);
        txt_Alt->setObjectName(QStringLiteral("txt_Alt"));
        txt_Alt->setReadOnly(true);

        horizontalLayout_2->addWidget(txt_Alt);


        gridLayout_2->addLayout(horizontalLayout_2, 0, 0, 1, 1);


        verticalLayout->addWidget(groupBox_2);


        verticalLayout_2->addLayout(verticalLayout);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setSpacing(6);
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        groupBox_4 = new QGroupBox(layoutWidget);
        groupBox_4->setObjectName(QStringLiteral("groupBox_4"));
        gridLayout_4 = new QGridLayout(groupBox_4);
        gridLayout_4->setSpacing(6);
        gridLayout_4->setContentsMargins(11, 11, 11, 11);
        gridLayout_4->setObjectName(QStringLiteral("gridLayout_4"));
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        txt_Vel = new QLineEdit(groupBox_4);
        txt_Vel->setObjectName(QStringLiteral("txt_Vel"));
        txt_Vel->setReadOnly(true);

        horizontalLayout_4->addWidget(txt_Vel);

        txt_Dir = new QLineEdit(groupBox_4);
        txt_Dir->setObjectName(QStringLiteral("txt_Dir"));
        txt_Dir->setReadOnly(true);

        horizontalLayout_4->addWidget(txt_Dir);


        gridLayout_4->addLayout(horizontalLayout_4, 0, 0, 1, 1);


        horizontalLayout_6->addWidget(groupBox_4);


        verticalLayout_2->addLayout(horizontalLayout_6);

        layoutWidget1 = new QWidget(centralWidget);
        layoutWidget1->setObjectName(QStringLiteral("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(150, 360, 237, 62));
        verticalLayout_3 = new QVBoxLayout(layoutWidget1);
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setContentsMargins(11, 11, 11, 11);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setSpacing(6);
        horizontalLayout_7->setObjectName(QStringLiteral("horizontalLayout_7"));
        label_11 = new QLabel(layoutWidget1);
        label_11->setObjectName(QStringLiteral("label_11"));

        horizontalLayout_7->addWidget(label_11);

        lineEdit_25 = new QLineEdit(layoutWidget1);
        lineEdit_25->setObjectName(QStringLiteral("lineEdit_25"));
        lineEdit_25->setReadOnly(false);

        horizontalLayout_7->addWidget(lineEdit_25);


        verticalLayout_3->addLayout(horizontalLayout_7);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setSpacing(6);
        horizontalLayout_8->setObjectName(QStringLiteral("horizontalLayout_8"));
        label_12 = new QLabel(layoutWidget1);
        label_12->setObjectName(QStringLiteral("label_12"));

        horizontalLayout_8->addWidget(label_12);

        lineEdit_22 = new QLineEdit(layoutWidget1);
        lineEdit_22->setObjectName(QStringLiteral("lineEdit_22"));
        lineEdit_22->setEchoMode(QLineEdit::Password);
        lineEdit_22->setReadOnly(false);

        horizontalLayout_8->addWidget(lineEdit_22);


        verticalLayout_3->addLayout(horizontalLayout_8);

        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(740, 30, 101, 17));
        line_3 = new QFrame(centralWidget);
        line_3->setObjectName(QStringLiteral("line_3"));
        line_3->setGeometry(QRect(550, 300, 461, 20));
        line_3->setFrameShape(QFrame::HLine);
        line_3->setFrameShadow(QFrame::Sunken);
        line_4 = new QFrame(centralWidget);
        line_4->setObjectName(QStringLiteral("line_4"));
        line_4->setGeometry(QRect(550, 10, 461, 20));
        line_4->setFrameShape(QFrame::HLine);
        line_4->setFrameShadow(QFrame::Sunken);
        groupBox_8 = new QGroupBox(centralWidget);
        groupBox_8->setObjectName(QStringLiteral("groupBox_8"));
        groupBox_8->setGeometry(QRect(710, 220, 166, 69));
        gridLayout_8 = new QGridLayout(groupBox_8);
        gridLayout_8->setSpacing(6);
        gridLayout_8->setContentsMargins(11, 11, 11, 11);
        gridLayout_8->setObjectName(QStringLiteral("gridLayout_8"));
        txt_Preci_5 = new QLineEdit(groupBox_8);
        txt_Preci_5->setObjectName(QStringLiteral("txt_Preci_5"));
        txt_Preci_5->setReadOnly(true);

        gridLayout_8->addWidget(txt_Preci_5, 0, 0, 1, 1);

        widget = new QWidget(centralWidget);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(620, 60, 340, 71));
        horizontalLayout_12 = new QHBoxLayout(widget);
        horizontalLayout_12->setSpacing(6);
        horizontalLayout_12->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_12->setObjectName(QStringLiteral("horizontalLayout_12"));
        horizontalLayout_12->setContentsMargins(0, 0, 0, 0);
        groupBox_5 = new QGroupBox(widget);
        groupBox_5->setObjectName(QStringLiteral("groupBox_5"));
        gridLayout_5 = new QGridLayout(groupBox_5);
        gridLayout_5->setSpacing(6);
        gridLayout_5->setContentsMargins(11, 11, 11, 11);
        gridLayout_5->setObjectName(QStringLiteral("gridLayout_5"));
        txt_Preci_2 = new QLineEdit(groupBox_5);
        txt_Preci_2->setObjectName(QStringLiteral("txt_Preci_2"));
        txt_Preci_2->setReadOnly(true);

        gridLayout_5->addWidget(txt_Preci_2, 0, 0, 1, 1);


        horizontalLayout_12->addWidget(groupBox_5);

        groupBox_6 = new QGroupBox(widget);
        groupBox_6->setObjectName(QStringLiteral("groupBox_6"));
        gridLayout_6 = new QGridLayout(groupBox_6);
        gridLayout_6->setSpacing(6);
        gridLayout_6->setContentsMargins(11, 11, 11, 11);
        gridLayout_6->setObjectName(QStringLiteral("gridLayout_6"));
        txt_Preci_3 = new QLineEdit(groupBox_6);
        txt_Preci_3->setObjectName(QStringLiteral("txt_Preci_3"));
        txt_Preci_3->setReadOnly(true);

        gridLayout_6->addWidget(txt_Preci_3, 0, 0, 1, 1);


        horizontalLayout_12->addWidget(groupBox_6);

        widget1 = new QWidget(centralWidget);
        widget1->setObjectName(QStringLiteral("widget1"));
        widget1->setGeometry(QRect(620, 140, 340, 71));
        horizontalLayout_5 = new QHBoxLayout(widget1);
        horizontalLayout_5->setSpacing(6);
        horizontalLayout_5->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        horizontalLayout_5->setContentsMargins(0, 0, 0, 0);
        groupBox_7 = new QGroupBox(widget1);
        groupBox_7->setObjectName(QStringLiteral("groupBox_7"));
        gridLayout_7 = new QGridLayout(groupBox_7);
        gridLayout_7->setSpacing(6);
        gridLayout_7->setContentsMargins(11, 11, 11, 11);
        gridLayout_7->setObjectName(QStringLiteral("gridLayout_7"));
        txt_Preci_4 = new QLineEdit(groupBox_7);
        txt_Preci_4->setObjectName(QStringLiteral("txt_Preci_4"));
        txt_Preci_4->setReadOnly(true);

        gridLayout_7->addWidget(txt_Preci_4, 0, 0, 1, 1);


        horizontalLayout_5->addWidget(groupBox_7);

        groupBox_9 = new QGroupBox(widget1);
        groupBox_9->setObjectName(QStringLiteral("groupBox_9"));
        gridLayout_9 = new QGridLayout(groupBox_9);
        gridLayout_9->setSpacing(6);
        gridLayout_9->setContentsMargins(11, 11, 11, 11);
        gridLayout_9->setObjectName(QStringLiteral("gridLayout_9"));
        txt_Preci_6 = new QLineEdit(groupBox_9);
        txt_Preci_6->setObjectName(QStringLiteral("txt_Preci_6"));
        txt_Preci_6->setReadOnly(true);

        gridLayout_9->addWidget(txt_Preci_6, 0, 0, 1, 1);


        horizontalLayout_5->addWidget(groupBox_9);

        MeteoECI_GUI->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MeteoECI_GUI);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 550, 22));
        MeteoECI_GUI->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MeteoECI_GUI);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MeteoECI_GUI->addToolBar(Qt::TopToolBarArea, mainToolBar);
        toolBar = new QToolBar(MeteoECI_GUI);
        toolBar->setObjectName(QStringLiteral("toolBar"));
        MeteoECI_GUI->addToolBar(Qt::TopToolBarArea, toolBar);

        retranslateUi(MeteoECI_GUI);

        QMetaObject::connectSlotsByName(MeteoECI_GUI);
    } // setupUi

    void retranslateUi(QMainWindow *MeteoECI_GUI)
    {
        MeteoECI_GUI->setWindowTitle(QApplication::translate("MeteoECI_GUI", "MeteoECI_GUI", Q_NULLPTR));
        pushButton->setText(QApplication::translate("MeteoECI_GUI", "Ingresar", Q_NULLPTR));
        label_10->setText(QApplication::translate("MeteoECI_GUI", "Validacion", Q_NULLPTR));
        label_13->setText(QApplication::translate("MeteoECI_GUI", "\302\277No tiene un usuario?", Q_NULLPTR));
        pushButton_2->setText(QApplication::translate("MeteoECI_GUI", "Registrarse", Q_NULLPTR));
        label_14->setText(QApplication::translate("MeteoECI_GUI", "Ultimo promedio", Q_NULLPTR));
        groupBox->setTitle(QApplication::translate("MeteoECI_GUI", "Temperatura", Q_NULLPTR));
        groupBox_3->setTitle(QApplication::translate("MeteoECI_GUI", "Precipitaci\303\263n", Q_NULLPTR));
        groupBox_2->setTitle(QApplication::translate("MeteoECI_GUI", "GPS", Q_NULLPTR));
        groupBox_4->setTitle(QApplication::translate("MeteoECI_GUI", "Viento", Q_NULLPTR));
        label_11->setText(QApplication::translate("MeteoECI_GUI", "Usuario         ", Q_NULLPTR));
        label_12->setText(QApplication::translate("MeteoECI_GUI", "Constrase\303\261a", Q_NULLPTR));
        label->setText(QApplication::translate("MeteoECI_GUI", "Sus datos son", Q_NULLPTR));
        groupBox_8->setTitle(QApplication::translate("MeteoECI_GUI", "Edad", Q_NULLPTR));
        groupBox_5->setTitle(QApplication::translate("MeteoECI_GUI", "Nombre", Q_NULLPTR));
        groupBox_6->setTitle(QApplication::translate("MeteoECI_GUI", "Apellido", Q_NULLPTR));
        groupBox_7->setTitle(QApplication::translate("MeteoECI_GUI", "Documento", Q_NULLPTR));
        groupBox_9->setTitle(QApplication::translate("MeteoECI_GUI", "Fecha de nacimiento", Q_NULLPTR));
        toolBar->setWindowTitle(QApplication::translate("MeteoECI_GUI", "toolBar", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MeteoECI_GUI: public Ui_MeteoECI_GUI {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_METEOECI_GUI_H
