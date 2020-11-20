/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

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
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QLabel *label;
    QFrame *line;
    QFrame *line_2;
    QLabel *label_10;
    QPushButton *pushButton;
    QLabel *label_13;
    QPushButton *pushButton_2;
    QLineEdit *lineEdit_25;
    QLabel *label_11;
    QLineEdit *lineEdit_22;
    QLabel *label_12;
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
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(684, 596);
        MainWindow->setMinimumSize(QSize(684, 596));
        MainWindow->setMaximumSize(QSize(684, 596));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(260, 20, 181, 17));
        line = new QFrame(centralWidget);
        line->setObjectName(QStringLiteral("line"));
        line->setGeometry(QRect(10, 310, 661, 16));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);
        line_2 = new QFrame(centralWidget);
        line_2->setObjectName(QStringLiteral("line_2"));
        line_2->setGeometry(QRect(10, 40, 661, 16));
        line_2->setFrameShape(QFrame::HLine);
        line_2->setFrameShadow(QFrame::Sunken);
        label_10 = new QLabel(centralWidget);
        label_10->setObjectName(QStringLiteral("label_10"));
        label_10->setGeometry(QRect(320, 330, 71, 17));
        pushButton = new QPushButton(centralWidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(310, 440, 89, 25));
        label_13 = new QLabel(centralWidget);
        label_13->setObjectName(QStringLiteral("label_13"));
        label_13->setGeometry(QRect(280, 470, 151, 17));
        pushButton_2 = new QPushButton(centralWidget);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(310, 500, 89, 25));
        lineEdit_25 = new QLineEdit(centralWidget);
        lineEdit_25->setObjectName(QStringLiteral("lineEdit_25"));
        lineEdit_25->setGeometry(QRect(289, 361, 142, 25));
        lineEdit_25->setReadOnly(false);
        label_11 = new QLabel(centralWidget);
        label_11->setObjectName(QStringLiteral("label_11"));
        label_11->setGeometry(QRect(190, 360, 52, 17));
        lineEdit_22 = new QLineEdit(centralWidget);
        lineEdit_22->setObjectName(QStringLiteral("lineEdit_22"));
        lineEdit_22->setGeometry(QRect(290, 391, 142, 25));
        lineEdit_22->setReadOnly(false);
        label_12 = new QLabel(centralWidget);
        label_12->setObjectName(QStringLiteral("label_12"));
        label_12->setGeometry(QRect(190, 390, 91, 20));
        layoutWidget = new QWidget(centralWidget);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(90, 70, 518, 233));
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

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 684, 22));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", Q_NULLPTR));
        label->setText(QApplication::translate("MainWindow", "Ultimos Datos Guardados", Q_NULLPTR));
        label_10->setText(QApplication::translate("MainWindow", "Validacion", Q_NULLPTR));
        pushButton->setText(QApplication::translate("MainWindow", "Ingresar", Q_NULLPTR));
        label_13->setText(QApplication::translate("MainWindow", "\302\277No tiene un usuario?", Q_NULLPTR));
        pushButton_2->setText(QApplication::translate("MainWindow", "Registrarse", Q_NULLPTR));
        label_11->setText(QApplication::translate("MainWindow", "Usuario", Q_NULLPTR));
        label_12->setText(QApplication::translate("MainWindow", "Constrase\303\261a", Q_NULLPTR));
        groupBox->setTitle(QApplication::translate("MainWindow", "Temperatura", Q_NULLPTR));
        groupBox_3->setTitle(QApplication::translate("MainWindow", "Precipitaci\303\263n", Q_NULLPTR));
        groupBox_2->setTitle(QApplication::translate("MainWindow", "GPS", Q_NULLPTR));
        groupBox_4->setTitle(QApplication::translate("MainWindow", "Viento", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
