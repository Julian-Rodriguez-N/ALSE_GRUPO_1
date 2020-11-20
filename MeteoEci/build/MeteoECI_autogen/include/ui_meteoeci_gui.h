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
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MeteoECI_GUI
{
public:
    QWidget *centralWidget;
    QGridLayout *gridLayout_6;
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
    QGroupBox *groupBox_5;
    QGridLayout *gridLayout_5;
    QHBoxLayout *horizontalLayout_5;
    QLineEdit *txt_Hr;
    QLineEdit *txt_Min;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MeteoECI_GUI)
    {
        if (MeteoECI_GUI->objectName().isEmpty())
            MeteoECI_GUI->setObjectName(QStringLiteral("MeteoECI_GUI"));
        MeteoECI_GUI->resize(500, 312);
        MeteoECI_GUI->setMinimumSize(QSize(500, 312));
        MeteoECI_GUI->setMaximumSize(QSize(500, 312));
        centralWidget = new QWidget(MeteoECI_GUI);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        gridLayout_6 = new QGridLayout(centralWidget);
        gridLayout_6->setSpacing(6);
        gridLayout_6->setContentsMargins(11, 11, 11, 11);
        gridLayout_6->setObjectName(QStringLiteral("gridLayout_6"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        groupBox = new QGroupBox(centralWidget);
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

        horizontalLayout->addWidget(txt_Temp);

        txt_Hum = new QLineEdit(groupBox);
        txt_Hum->setObjectName(QStringLiteral("txt_Hum"));

        horizontalLayout->addWidget(txt_Hum);


        gridLayout->addLayout(horizontalLayout, 0, 0, 1, 1);


        horizontalLayout_3->addWidget(groupBox);

        groupBox_3 = new QGroupBox(centralWidget);
        groupBox_3->setObjectName(QStringLiteral("groupBox_3"));
        gridLayout_3 = new QGridLayout(groupBox_3);
        gridLayout_3->setSpacing(6);
        gridLayout_3->setContentsMargins(11, 11, 11, 11);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        txt_Preci = new QLineEdit(groupBox_3);
        txt_Preci->setObjectName(QStringLiteral("txt_Preci"));

        gridLayout_3->addWidget(txt_Preci, 0, 0, 1, 1);


        horizontalLayout_3->addWidget(groupBox_3);


        verticalLayout->addLayout(horizontalLayout_3);

        groupBox_2 = new QGroupBox(centralWidget);
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

        horizontalLayout_2->addWidget(txt_Lat);

        txt_Lon = new QLineEdit(groupBox_2);
        txt_Lon->setObjectName(QStringLiteral("txt_Lon"));

        horizontalLayout_2->addWidget(txt_Lon);

        txt_Alt = new QLineEdit(groupBox_2);
        txt_Alt->setObjectName(QStringLiteral("txt_Alt"));

        horizontalLayout_2->addWidget(txt_Alt);


        gridLayout_2->addLayout(horizontalLayout_2, 0, 0, 1, 1);


        verticalLayout->addWidget(groupBox_2);


        verticalLayout_2->addLayout(verticalLayout);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setSpacing(6);
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        groupBox_4 = new QGroupBox(centralWidget);
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

        horizontalLayout_4->addWidget(txt_Vel);

        txt_Dir = new QLineEdit(groupBox_4);
        txt_Dir->setObjectName(QStringLiteral("txt_Dir"));

        horizontalLayout_4->addWidget(txt_Dir);


        gridLayout_4->addLayout(horizontalLayout_4, 0, 0, 1, 1);


        horizontalLayout_6->addWidget(groupBox_4);

        groupBox_5 = new QGroupBox(centralWidget);
        groupBox_5->setObjectName(QStringLiteral("groupBox_5"));
        gridLayout_5 = new QGridLayout(groupBox_5);
        gridLayout_5->setSpacing(6);
        gridLayout_5->setContentsMargins(11, 11, 11, 11);
        gridLayout_5->setObjectName(QStringLiteral("gridLayout_5"));
        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setSpacing(6);
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        txt_Hr = new QLineEdit(groupBox_5);
        txt_Hr->setObjectName(QStringLiteral("txt_Hr"));
        txt_Hr->setMaximumSize(QSize(80, 16777215));

        horizontalLayout_5->addWidget(txt_Hr);

        txt_Min = new QLineEdit(groupBox_5);
        txt_Min->setObjectName(QStringLiteral("txt_Min"));
        txt_Min->setMaximumSize(QSize(80, 16777215));

        horizontalLayout_5->addWidget(txt_Min);


        gridLayout_5->addLayout(horizontalLayout_5, 0, 0, 1, 1);


        horizontalLayout_6->addWidget(groupBox_5);


        verticalLayout_2->addLayout(horizontalLayout_6);


        gridLayout_6->addLayout(verticalLayout_2, 0, 0, 1, 1);

        MeteoECI_GUI->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MeteoECI_GUI);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 500, 22));
        MeteoECI_GUI->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MeteoECI_GUI);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MeteoECI_GUI->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MeteoECI_GUI);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MeteoECI_GUI->setStatusBar(statusBar);

        retranslateUi(MeteoECI_GUI);

        QMetaObject::connectSlotsByName(MeteoECI_GUI);
    } // setupUi

    void retranslateUi(QMainWindow *MeteoECI_GUI)
    {
        MeteoECI_GUI->setWindowTitle(QApplication::translate("MeteoECI_GUI", "MeteoECI_GUI", Q_NULLPTR));
        groupBox->setTitle(QApplication::translate("MeteoECI_GUI", "Temperatura", Q_NULLPTR));
        groupBox_3->setTitle(QApplication::translate("MeteoECI_GUI", "Precipitaci\303\263n", Q_NULLPTR));
        groupBox_2->setTitle(QApplication::translate("MeteoECI_GUI", "GPS", Q_NULLPTR));
        groupBox_4->setTitle(QApplication::translate("MeteoECI_GUI", "Viento", Q_NULLPTR));
        groupBox_5->setTitle(QApplication::translate("MeteoECI_GUI", "Horas - Minutos", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MeteoECI_GUI: public Ui_MeteoECI_GUI {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_METEOECI_GUI_H
