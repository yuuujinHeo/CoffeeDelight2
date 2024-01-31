/********************************************************************************
** Form generated from reading UI file 'DialogHotDispenser.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOGHOTDISPENSER_H
#define UI_DIALOGHOTDISPENSER_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_DialogHotDispenser
{
public:
    QGroupBox *GB_HOT;
    QLineEdit *LE_HOT_CONNECTION;
    QLabel *label_110;
    QFrame *line_37;
    QPushButton *BTN_DISPENSE_HOT_BY_TIME;
    QLineEdit *LE_LAST_DISPENSE_ERROR;
    QLabel *label_113;
    QLabel *label_114;
    QLineEdit *LE_OP_STATE;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_22;
    QLineEdit *LE_OUT_TIME_HOT;
    QLabel *label_111;
    QFrame *line_39;
    QFrame *line;
    QPushButton *BTN_DISPENSE_SODA_BY_TIME;
    QLineEdit *LE_OUT_TIME_SODA;
    QLabel *label_112;
    QLabel *label_23;
    QLineEdit *LE_HOT_DATA_CONNECTION;
    QLabel *label_115;
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QLineEdit *LE_VALVE_HOTO;
    QLineEdit *LE_VALVE_INLET;
    QLineEdit *LE_VALVE_HOTI;
    QLineEdit *LE_VALVE_AIR;
    QLineEdit *LE_VALVE_COOK;
    QLineEdit *LE_VALVE_CBO;
    QLineEdit *LE_VALVE_MIXI;
    QLabel *label_3;
    QWidget *formLayoutWidget;
    QFormLayout *formLayout;
    QLabel *label_4;
    QLineEdit *LE_SENSOR_ERR_GAS;
    QLineEdit *LE_SENSOR_ERR_HOT;
    QLineEdit *LE_SENSOR_ERR_CO2;
    QWidget *formLayoutWidget_2;
    QFormLayout *formLayout_2;
    QLabel *label_5;
    QLineEdit *LE_WATER_ERR_INLET;
    QLineEdit *LE_WATER_ERR_LEAK;
    QFrame *line_3;
    QFrame *line_41;
    QLabel *label_122;
    QWidget *formLayoutWidget_5;
    QFormLayout *formLayout_5;
    QLabel *label_11;
    QLineEdit *LE_SENSOR_ERR_GAS_3;
    QLineEdit *LE_SENSOR_ERR_HOT_3;
    QLineEdit *LE_SENSOR_ERR_CO2_3;
    QFrame *line_5;
    QPushButton *BTN_DISPENSE_SODA_BY_TIME_3;
    QLineEdit *LE_HOT_DATA_CONNECTION_3;
    QPushButton *BTN_DISPENSE_HOT_BY_TIME_3;
    QLabel *label_123;
    QWidget *formLayoutWidget_6;
    QFormLayout *formLayout_6;
    QLabel *label_12;
    QLineEdit *LE_WATER_ERR_INLET_3;
    QLineEdit *LE_WATER_ERR_LEAK_3;
    QLabel *label_26;
    QFrame *line_42;
    QLineEdit *LE_OUT_TIME_HOT_3;
    QLineEdit *LE_OUT_TIME_SODA_3;
    QLabel *label_27;
    QWidget *gridLayoutWidget_3;
    QGridLayout *gridLayout_3;
    QLineEdit *LE_VALVE_HOTO_3;
    QLineEdit *LE_VALVE_INLET_3;
    QLineEdit *LE_VALVE_HOTI_3;
    QLineEdit *LE_VALVE_AIR_3;
    QLineEdit *LE_VALVE_COOK_3;
    QLineEdit *LE_VALVE_CBO_3;
    QLineEdit *LE_VALVE_MIXI_3;
    QLabel *label_13;
    QLineEdit *LE_HOT_CONNECTION_3;
    QLabel *label_14;
    QLineEdit *LE_OP_STATE_3;
    QLabel *label_15;
    QLineEdit *LE_LAST_DISPENSE_ERROR_3;
    QLabel *label_116;
    QLabel *label_117;
    QLabel *label_118;
    QLabel *label_119;

    void setupUi(QDialog *DialogHotDispenser)
    {
        if (DialogHotDispenser->objectName().isEmpty())
            DialogHotDispenser->setObjectName(QString::fromUtf8("DialogHotDispenser"));
        DialogHotDispenser->resize(601, 931);
        GB_HOT = new QGroupBox(DialogHotDispenser);
        GB_HOT->setObjectName(QString::fromUtf8("GB_HOT"));
        GB_HOT->setGeometry(QRect(0, 0, 601, 971));
        QFont font;
        font.setFamily(QString::fromUtf8("\355\225\250\354\264\210\353\241\254\353\217\213\354\233\200"));
        font.setPointSize(20);
        font.setBold(false);
        font.setItalic(false);
        font.setWeight(50);
        GB_HOT->setFont(font);
        GB_HOT->setStyleSheet(QString::fromUtf8("QGroupBox  {\n"
"    margin-top: 10px;\n"
"	font: 20pt \"\355\225\250\354\264\210\353\241\254\353\217\213\354\233\200\";\n"
"}\n"
"\n"
"QGroupBox::title  {\n"
"    subcontrol-origin: margin;\n"
"    subcontrol-position: top center;\n"
"    padding: 10px 8000px 10px 8000px;\n"
"    background-color: #595959;\n"
"    color: rgb(255, 255, 255);\n"
"}\n"
"QLabel {\n"
"	font: 11pt \"\355\225\250\354\264\210\353\241\254\353\217\213\354\233\200\";\n"
"}\n"
"QComboBox{\n"
"	font: 11pt \"\355\225\250\354\264\210\353\241\254\353\217\213\354\233\200\";\n"
"	background-color: #ffffff\n"
"}\n"
"QPushButton{\n"
"	font: 13pt \"\355\225\250\354\264\210\353\241\254\353\217\213\354\233\200\";\n"
"	background-color: #ffffff\n"
"}\n"
"QLineEdit{\n"
"	font: 11pt \"\355\225\250\354\264\210\353\241\254\353\217\213\354\233\200\";\n"
"	background-color: #ffffff\n"
"}\n"
"\n"
"\n"
"\n"
""));
        LE_HOT_CONNECTION = new QLineEdit(GB_HOT);
        LE_HOT_CONNECTION->setObjectName(QString::fromUtf8("LE_HOT_CONNECTION"));
        LE_HOT_CONNECTION->setGeometry(QRect(120, 70, 81, 31));
        QFont font1;
        font1.setFamily(QString::fromUtf8("\355\225\250\354\264\210\353\241\254\353\217\213\354\233\200"));
        font1.setPointSize(11);
        font1.setBold(false);
        font1.setItalic(false);
        font1.setWeight(50);
        LE_HOT_CONNECTION->setFont(font1);
        LE_HOT_CONNECTION->setReadOnly(true);
        label_110 = new QLabel(GB_HOT);
        label_110->setObjectName(QString::fromUtf8("label_110"));
        label_110->setGeometry(QRect(10, 70, 101, 31));
        label_110->setFont(font1);
        label_110->setAlignment(Qt::AlignCenter);
        line_37 = new QFrame(GB_HOT);
        line_37->setObjectName(QString::fromUtf8("line_37"));
        line_37->setGeometry(QRect(10, 150, 271, 20));
        QFont font2;
        font2.setPointSize(11);
        line_37->setFont(font2);
        line_37->setFrameShape(QFrame::HLine);
        line_37->setFrameShadow(QFrame::Sunken);
        BTN_DISPENSE_HOT_BY_TIME = new QPushButton(GB_HOT);
        BTN_DISPENSE_HOT_BY_TIME->setObjectName(QString::fromUtf8("BTN_DISPENSE_HOT_BY_TIME"));
        BTN_DISPENSE_HOT_BY_TIME->setGeometry(QRect(10, 200, 121, 61));
        QFont font3;
        font3.setFamily(QString::fromUtf8("\355\225\250\354\264\210\353\241\254\353\217\213\354\233\200"));
        font3.setPointSize(13);
        font3.setBold(false);
        font3.setItalic(false);
        font3.setWeight(50);
        BTN_DISPENSE_HOT_BY_TIME->setFont(font3);
        LE_LAST_DISPENSE_ERROR = new QLineEdit(GB_HOT);
        LE_LAST_DISPENSE_ERROR->setObjectName(QString::fromUtf8("LE_LAST_DISPENSE_ERROR"));
        LE_LAST_DISPENSE_ERROR->setGeometry(QRect(120, 800, 61, 31));
        LE_LAST_DISPENSE_ERROR->setFont(font1);
        LE_LAST_DISPENSE_ERROR->setReadOnly(true);
        label_113 = new QLabel(GB_HOT);
        label_113->setObjectName(QString::fromUtf8("label_113"));
        label_113->setGeometry(QRect(10, 800, 101, 31));
        label_113->setFont(font1);
        label_113->setAlignment(Qt::AlignCenter);
        label_114 = new QLabel(GB_HOT);
        label_114->setObjectName(QString::fromUtf8("label_114"));
        label_114->setGeometry(QRect(10, 840, 101, 31));
        label_114->setFont(font1);
        label_114->setAlignment(Qt::AlignCenter);
        LE_OP_STATE = new QLineEdit(GB_HOT);
        LE_OP_STATE->setObjectName(QString::fromUtf8("LE_OP_STATE"));
        LE_OP_STATE->setGeometry(QRect(120, 840, 61, 31));
        LE_OP_STATE->setFont(font1);
        LE_OP_STATE->setReadOnly(true);
        label = new QLabel(GB_HOT);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(10, 880, 271, 17));
        label->setFont(font1);
        label_2 = new QLabel(GB_HOT);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(10, 900, 311, 17));
        label_2->setFont(font1);
        label_22 = new QLabel(GB_HOT);
        label_22->setObjectName(QString::fromUtf8("label_22"));
        label_22->setGeometry(QRect(120, 170, 21, 21));
        label_22->setFont(font1);
        LE_OUT_TIME_HOT = new QLineEdit(GB_HOT);
        LE_OUT_TIME_HOT->setObjectName(QString::fromUtf8("LE_OUT_TIME_HOT"));
        LE_OUT_TIME_HOT->setGeometry(QRect(70, 170, 41, 21));
        LE_OUT_TIME_HOT->setFont(font1);
        LE_OUT_TIME_HOT->setAlignment(Qt::AlignCenter);
        label_111 = new QLabel(GB_HOT);
        label_111->setObjectName(QString::fromUtf8("label_111"));
        label_111->setGeometry(QRect(10, 170, 61, 21));
        label_111->setFont(font1);
        label_111->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        line_39 = new QFrame(GB_HOT);
        line_39->setObjectName(QString::fromUtf8("line_39"));
        line_39->setGeometry(QRect(10, 580, 271, 20));
        line_39->setFont(font2);
        line_39->setFrameShape(QFrame::HLine);
        line_39->setFrameShadow(QFrame::Sunken);
        line = new QFrame(GB_HOT);
        line->setObjectName(QString::fromUtf8("line"));
        line->setGeometry(QRect(140, 170, 16, 91));
        line->setFrameShape(QFrame::VLine);
        line->setFrameShadow(QFrame::Sunken);
        BTN_DISPENSE_SODA_BY_TIME = new QPushButton(GB_HOT);
        BTN_DISPENSE_SODA_BY_TIME->setObjectName(QString::fromUtf8("BTN_DISPENSE_SODA_BY_TIME"));
        BTN_DISPENSE_SODA_BY_TIME->setGeometry(QRect(160, 200, 121, 61));
        BTN_DISPENSE_SODA_BY_TIME->setFont(font3);
        LE_OUT_TIME_SODA = new QLineEdit(GB_HOT);
        LE_OUT_TIME_SODA->setObjectName(QString::fromUtf8("LE_OUT_TIME_SODA"));
        LE_OUT_TIME_SODA->setGeometry(QRect(220, 170, 41, 21));
        LE_OUT_TIME_SODA->setFont(font1);
        LE_OUT_TIME_SODA->setAlignment(Qt::AlignCenter);
        label_112 = new QLabel(GB_HOT);
        label_112->setObjectName(QString::fromUtf8("label_112"));
        label_112->setGeometry(QRect(160, 170, 61, 21));
        label_112->setFont(font1);
        label_112->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        label_23 = new QLabel(GB_HOT);
        label_23->setObjectName(QString::fromUtf8("label_23"));
        label_23->setGeometry(QRect(270, 170, 21, 21));
        label_23->setFont(font1);
        LE_HOT_DATA_CONNECTION = new QLineEdit(GB_HOT);
        LE_HOT_DATA_CONNECTION->setObjectName(QString::fromUtf8("LE_HOT_DATA_CONNECTION"));
        LE_HOT_DATA_CONNECTION->setGeometry(QRect(120, 110, 81, 31));
        LE_HOT_DATA_CONNECTION->setFont(font1);
        LE_HOT_DATA_CONNECTION->setReadOnly(true);
        label_115 = new QLabel(GB_HOT);
        label_115->setObjectName(QString::fromUtf8("label_115"));
        label_115->setGeometry(QRect(10, 110, 101, 25));
        label_115->setFont(font1);
        label_115->setAlignment(Qt::AlignCenter);
        gridLayoutWidget = new QWidget(GB_HOT);
        gridLayoutWidget->setObjectName(QString::fromUtf8("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(10, 310, 121, 249));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        LE_VALVE_HOTO = new QLineEdit(gridLayoutWidget);
        LE_VALVE_HOTO->setObjectName(QString::fromUtf8("LE_VALVE_HOTO"));
        LE_VALVE_HOTO->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(LE_VALVE_HOTO, 1, 0, 1, 1);

        LE_VALVE_INLET = new QLineEdit(gridLayoutWidget);
        LE_VALVE_INLET->setObjectName(QString::fromUtf8("LE_VALVE_INLET"));
        LE_VALVE_INLET->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(LE_VALVE_INLET, 7, 0, 1, 1);

        LE_VALVE_HOTI = new QLineEdit(gridLayoutWidget);
        LE_VALVE_HOTI->setObjectName(QString::fromUtf8("LE_VALVE_HOTI"));
        LE_VALVE_HOTI->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(LE_VALVE_HOTI, 4, 0, 1, 1);

        LE_VALVE_AIR = new QLineEdit(gridLayoutWidget);
        LE_VALVE_AIR->setObjectName(QString::fromUtf8("LE_VALVE_AIR"));
        LE_VALVE_AIR->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(LE_VALVE_AIR, 6, 0, 1, 1);

        LE_VALVE_COOK = new QLineEdit(gridLayoutWidget);
        LE_VALVE_COOK->setObjectName(QString::fromUtf8("LE_VALVE_COOK"));
        LE_VALVE_COOK->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(LE_VALVE_COOK, 2, 0, 1, 1);

        LE_VALVE_CBO = new QLineEdit(gridLayoutWidget);
        LE_VALVE_CBO->setObjectName(QString::fromUtf8("LE_VALVE_CBO"));
        LE_VALVE_CBO->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(LE_VALVE_CBO, 3, 0, 1, 1);

        LE_VALVE_MIXI = new QLineEdit(gridLayoutWidget);
        LE_VALVE_MIXI->setObjectName(QString::fromUtf8("LE_VALVE_MIXI"));
        LE_VALVE_MIXI->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(LE_VALVE_MIXI, 5, 0, 1, 1);

        label_3 = new QLabel(gridLayoutWidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_3, 0, 0, 1, 1);

        formLayoutWidget = new QWidget(GB_HOT);
        formLayoutWidget->setObjectName(QString::fromUtf8("formLayoutWidget"));
        formLayoutWidget->setGeometry(QRect(160, 310, 121, 121));
        formLayout = new QFormLayout(formLayoutWidget);
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        formLayout->setContentsMargins(0, 0, 0, 0);
        label_4 = new QLabel(formLayoutWidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setAlignment(Qt::AlignCenter);

        formLayout->setWidget(0, QFormLayout::FieldRole, label_4);

        LE_SENSOR_ERR_GAS = new QLineEdit(formLayoutWidget);
        LE_SENSOR_ERR_GAS->setObjectName(QString::fromUtf8("LE_SENSOR_ERR_GAS"));
        LE_SENSOR_ERR_GAS->setAlignment(Qt::AlignCenter);

        formLayout->setWidget(1, QFormLayout::FieldRole, LE_SENSOR_ERR_GAS);

        LE_SENSOR_ERR_HOT = new QLineEdit(formLayoutWidget);
        LE_SENSOR_ERR_HOT->setObjectName(QString::fromUtf8("LE_SENSOR_ERR_HOT"));
        LE_SENSOR_ERR_HOT->setAlignment(Qt::AlignCenter);

        formLayout->setWidget(2, QFormLayout::FieldRole, LE_SENSOR_ERR_HOT);

        LE_SENSOR_ERR_CO2 = new QLineEdit(formLayoutWidget);
        LE_SENSOR_ERR_CO2->setObjectName(QString::fromUtf8("LE_SENSOR_ERR_CO2"));
        LE_SENSOR_ERR_CO2->setAlignment(Qt::AlignCenter);

        formLayout->setWidget(3, QFormLayout::FieldRole, LE_SENSOR_ERR_CO2);

        formLayoutWidget_2 = new QWidget(GB_HOT);
        formLayoutWidget_2->setObjectName(QString::fromUtf8("formLayoutWidget_2"));
        formLayoutWidget_2->setGeometry(QRect(160, 460, 121, 91));
        formLayout_2 = new QFormLayout(formLayoutWidget_2);
        formLayout_2->setObjectName(QString::fromUtf8("formLayout_2"));
        formLayout_2->setContentsMargins(0, 0, 0, 0);
        label_5 = new QLabel(formLayoutWidget_2);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setAlignment(Qt::AlignCenter);

        formLayout_2->setWidget(0, QFormLayout::FieldRole, label_5);

        LE_WATER_ERR_INLET = new QLineEdit(formLayoutWidget_2);
        LE_WATER_ERR_INLET->setObjectName(QString::fromUtf8("LE_WATER_ERR_INLET"));
        LE_WATER_ERR_INLET->setAlignment(Qt::AlignCenter);

        formLayout_2->setWidget(1, QFormLayout::FieldRole, LE_WATER_ERR_INLET);

        LE_WATER_ERR_LEAK = new QLineEdit(formLayoutWidget_2);
        LE_WATER_ERR_LEAK->setObjectName(QString::fromUtf8("LE_WATER_ERR_LEAK"));
        LE_WATER_ERR_LEAK->setAlignment(Qt::AlignCenter);

        formLayout_2->setWidget(2, QFormLayout::FieldRole, LE_WATER_ERR_LEAK);

        line_3 = new QFrame(GB_HOT);
        line_3->setObjectName(QString::fromUtf8("line_3"));
        line_3->setGeometry(QRect(290, 60, 20, 851));
        line_3->setFrameShape(QFrame::VLine);
        line_3->setFrameShadow(QFrame::Sunken);
        line_41 = new QFrame(GB_HOT);
        line_41->setObjectName(QString::fromUtf8("line_41"));
        line_41->setGeometry(QRect(310, 580, 271, 20));
        line_41->setFont(font2);
        line_41->setFrameShape(QFrame::HLine);
        line_41->setFrameShadow(QFrame::Sunken);
        label_122 = new QLabel(GB_HOT);
        label_122->setObjectName(QString::fromUtf8("label_122"));
        label_122->setGeometry(QRect(460, 170, 61, 21));
        label_122->setFont(font1);
        label_122->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        formLayoutWidget_5 = new QWidget(GB_HOT);
        formLayoutWidget_5->setObjectName(QString::fromUtf8("formLayoutWidget_5"));
        formLayoutWidget_5->setGeometry(QRect(460, 310, 121, 121));
        formLayout_5 = new QFormLayout(formLayoutWidget_5);
        formLayout_5->setObjectName(QString::fromUtf8("formLayout_5"));
        formLayout_5->setContentsMargins(0, 0, 0, 0);
        label_11 = new QLabel(formLayoutWidget_5);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        label_11->setAlignment(Qt::AlignCenter);

        formLayout_5->setWidget(0, QFormLayout::FieldRole, label_11);

        LE_SENSOR_ERR_GAS_3 = new QLineEdit(formLayoutWidget_5);
        LE_SENSOR_ERR_GAS_3->setObjectName(QString::fromUtf8("LE_SENSOR_ERR_GAS_3"));
        LE_SENSOR_ERR_GAS_3->setAlignment(Qt::AlignCenter);

        formLayout_5->setWidget(1, QFormLayout::FieldRole, LE_SENSOR_ERR_GAS_3);

        LE_SENSOR_ERR_HOT_3 = new QLineEdit(formLayoutWidget_5);
        LE_SENSOR_ERR_HOT_3->setObjectName(QString::fromUtf8("LE_SENSOR_ERR_HOT_3"));
        LE_SENSOR_ERR_HOT_3->setAlignment(Qt::AlignCenter);

        formLayout_5->setWidget(2, QFormLayout::FieldRole, LE_SENSOR_ERR_HOT_3);

        LE_SENSOR_ERR_CO2_3 = new QLineEdit(formLayoutWidget_5);
        LE_SENSOR_ERR_CO2_3->setObjectName(QString::fromUtf8("LE_SENSOR_ERR_CO2_3"));
        LE_SENSOR_ERR_CO2_3->setAlignment(Qt::AlignCenter);

        formLayout_5->setWidget(3, QFormLayout::FieldRole, LE_SENSOR_ERR_CO2_3);

        line_5 = new QFrame(GB_HOT);
        line_5->setObjectName(QString::fromUtf8("line_5"));
        line_5->setGeometry(QRect(440, 170, 16, 91));
        line_5->setFrameShape(QFrame::VLine);
        line_5->setFrameShadow(QFrame::Sunken);
        BTN_DISPENSE_SODA_BY_TIME_3 = new QPushButton(GB_HOT);
        BTN_DISPENSE_SODA_BY_TIME_3->setObjectName(QString::fromUtf8("BTN_DISPENSE_SODA_BY_TIME_3"));
        BTN_DISPENSE_SODA_BY_TIME_3->setGeometry(QRect(460, 200, 121, 61));
        BTN_DISPENSE_SODA_BY_TIME_3->setFont(font3);
        LE_HOT_DATA_CONNECTION_3 = new QLineEdit(GB_HOT);
        LE_HOT_DATA_CONNECTION_3->setObjectName(QString::fromUtf8("LE_HOT_DATA_CONNECTION_3"));
        LE_HOT_DATA_CONNECTION_3->setGeometry(QRect(420, 110, 81, 31));
        LE_HOT_DATA_CONNECTION_3->setFont(font1);
        LE_HOT_DATA_CONNECTION_3->setReadOnly(true);
        BTN_DISPENSE_HOT_BY_TIME_3 = new QPushButton(GB_HOT);
        BTN_DISPENSE_HOT_BY_TIME_3->setObjectName(QString::fromUtf8("BTN_DISPENSE_HOT_BY_TIME_3"));
        BTN_DISPENSE_HOT_BY_TIME_3->setGeometry(QRect(310, 200, 121, 61));
        BTN_DISPENSE_HOT_BY_TIME_3->setFont(font3);
        label_123 = new QLabel(GB_HOT);
        label_123->setObjectName(QString::fromUtf8("label_123"));
        label_123->setGeometry(QRect(310, 170, 61, 21));
        label_123->setFont(font1);
        label_123->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        formLayoutWidget_6 = new QWidget(GB_HOT);
        formLayoutWidget_6->setObjectName(QString::fromUtf8("formLayoutWidget_6"));
        formLayoutWidget_6->setGeometry(QRect(460, 460, 121, 91));
        formLayout_6 = new QFormLayout(formLayoutWidget_6);
        formLayout_6->setObjectName(QString::fromUtf8("formLayout_6"));
        formLayout_6->setContentsMargins(0, 0, 0, 0);
        label_12 = new QLabel(formLayoutWidget_6);
        label_12->setObjectName(QString::fromUtf8("label_12"));
        label_12->setAlignment(Qt::AlignCenter);

        formLayout_6->setWidget(0, QFormLayout::FieldRole, label_12);

        LE_WATER_ERR_INLET_3 = new QLineEdit(formLayoutWidget_6);
        LE_WATER_ERR_INLET_3->setObjectName(QString::fromUtf8("LE_WATER_ERR_INLET_3"));
        LE_WATER_ERR_INLET_3->setAlignment(Qt::AlignCenter);

        formLayout_6->setWidget(1, QFormLayout::FieldRole, LE_WATER_ERR_INLET_3);

        LE_WATER_ERR_LEAK_3 = new QLineEdit(formLayoutWidget_6);
        LE_WATER_ERR_LEAK_3->setObjectName(QString::fromUtf8("LE_WATER_ERR_LEAK_3"));
        LE_WATER_ERR_LEAK_3->setAlignment(Qt::AlignCenter);

        formLayout_6->setWidget(2, QFormLayout::FieldRole, LE_WATER_ERR_LEAK_3);

        label_26 = new QLabel(GB_HOT);
        label_26->setObjectName(QString::fromUtf8("label_26"));
        label_26->setGeometry(QRect(420, 170, 21, 21));
        label_26->setFont(font1);
        line_42 = new QFrame(GB_HOT);
        line_42->setObjectName(QString::fromUtf8("line_42"));
        line_42->setGeometry(QRect(310, 150, 271, 20));
        line_42->setFont(font2);
        line_42->setFrameShape(QFrame::HLine);
        line_42->setFrameShadow(QFrame::Sunken);
        LE_OUT_TIME_HOT_3 = new QLineEdit(GB_HOT);
        LE_OUT_TIME_HOT_3->setObjectName(QString::fromUtf8("LE_OUT_TIME_HOT_3"));
        LE_OUT_TIME_HOT_3->setGeometry(QRect(370, 170, 41, 21));
        LE_OUT_TIME_HOT_3->setFont(font1);
        LE_OUT_TIME_HOT_3->setAlignment(Qt::AlignCenter);
        LE_OUT_TIME_SODA_3 = new QLineEdit(GB_HOT);
        LE_OUT_TIME_SODA_3->setObjectName(QString::fromUtf8("LE_OUT_TIME_SODA_3"));
        LE_OUT_TIME_SODA_3->setGeometry(QRect(520, 170, 41, 21));
        LE_OUT_TIME_SODA_3->setFont(font1);
        LE_OUT_TIME_SODA_3->setAlignment(Qt::AlignCenter);
        label_27 = new QLabel(GB_HOT);
        label_27->setObjectName(QString::fromUtf8("label_27"));
        label_27->setGeometry(QRect(570, 170, 21, 21));
        label_27->setFont(font1);
        gridLayoutWidget_3 = new QWidget(GB_HOT);
        gridLayoutWidget_3->setObjectName(QString::fromUtf8("gridLayoutWidget_3"));
        gridLayoutWidget_3->setGeometry(QRect(310, 310, 121, 249));
        gridLayout_3 = new QGridLayout(gridLayoutWidget_3);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        gridLayout_3->setContentsMargins(0, 0, 0, 0);
        LE_VALVE_HOTO_3 = new QLineEdit(gridLayoutWidget_3);
        LE_VALVE_HOTO_3->setObjectName(QString::fromUtf8("LE_VALVE_HOTO_3"));
        LE_VALVE_HOTO_3->setAlignment(Qt::AlignCenter);

        gridLayout_3->addWidget(LE_VALVE_HOTO_3, 1, 0, 1, 1);

        LE_VALVE_INLET_3 = new QLineEdit(gridLayoutWidget_3);
        LE_VALVE_INLET_3->setObjectName(QString::fromUtf8("LE_VALVE_INLET_3"));
        LE_VALVE_INLET_3->setAlignment(Qt::AlignCenter);

        gridLayout_3->addWidget(LE_VALVE_INLET_3, 7, 0, 1, 1);

        LE_VALVE_HOTI_3 = new QLineEdit(gridLayoutWidget_3);
        LE_VALVE_HOTI_3->setObjectName(QString::fromUtf8("LE_VALVE_HOTI_3"));
        LE_VALVE_HOTI_3->setAlignment(Qt::AlignCenter);

        gridLayout_3->addWidget(LE_VALVE_HOTI_3, 4, 0, 1, 1);

        LE_VALVE_AIR_3 = new QLineEdit(gridLayoutWidget_3);
        LE_VALVE_AIR_3->setObjectName(QString::fromUtf8("LE_VALVE_AIR_3"));
        LE_VALVE_AIR_3->setAlignment(Qt::AlignCenter);

        gridLayout_3->addWidget(LE_VALVE_AIR_3, 6, 0, 1, 1);

        LE_VALVE_COOK_3 = new QLineEdit(gridLayoutWidget_3);
        LE_VALVE_COOK_3->setObjectName(QString::fromUtf8("LE_VALVE_COOK_3"));
        LE_VALVE_COOK_3->setAlignment(Qt::AlignCenter);

        gridLayout_3->addWidget(LE_VALVE_COOK_3, 2, 0, 1, 1);

        LE_VALVE_CBO_3 = new QLineEdit(gridLayoutWidget_3);
        LE_VALVE_CBO_3->setObjectName(QString::fromUtf8("LE_VALVE_CBO_3"));
        LE_VALVE_CBO_3->setAlignment(Qt::AlignCenter);

        gridLayout_3->addWidget(LE_VALVE_CBO_3, 3, 0, 1, 1);

        LE_VALVE_MIXI_3 = new QLineEdit(gridLayoutWidget_3);
        LE_VALVE_MIXI_3->setObjectName(QString::fromUtf8("LE_VALVE_MIXI_3"));
        LE_VALVE_MIXI_3->setAlignment(Qt::AlignCenter);

        gridLayout_3->addWidget(LE_VALVE_MIXI_3, 5, 0, 1, 1);

        label_13 = new QLabel(gridLayoutWidget_3);
        label_13->setObjectName(QString::fromUtf8("label_13"));
        label_13->setAlignment(Qt::AlignCenter);

        gridLayout_3->addWidget(label_13, 0, 0, 1, 1);

        LE_HOT_CONNECTION_3 = new QLineEdit(GB_HOT);
        LE_HOT_CONNECTION_3->setObjectName(QString::fromUtf8("LE_HOT_CONNECTION_3"));
        LE_HOT_CONNECTION_3->setGeometry(QRect(420, 70, 81, 31));
        LE_HOT_CONNECTION_3->setFont(font1);
        LE_HOT_CONNECTION_3->setReadOnly(true);
        label_14 = new QLabel(GB_HOT);
        label_14->setObjectName(QString::fromUtf8("label_14"));
        label_14->setGeometry(QRect(310, 900, 311, 17));
        label_14->setFont(font1);
        LE_OP_STATE_3 = new QLineEdit(GB_HOT);
        LE_OP_STATE_3->setObjectName(QString::fromUtf8("LE_OP_STATE_3"));
        LE_OP_STATE_3->setGeometry(QRect(420, 840, 61, 31));
        LE_OP_STATE_3->setFont(font1);
        LE_OP_STATE_3->setReadOnly(true);
        label_15 = new QLabel(GB_HOT);
        label_15->setObjectName(QString::fromUtf8("label_15"));
        label_15->setGeometry(QRect(310, 880, 271, 17));
        label_15->setFont(font1);
        LE_LAST_DISPENSE_ERROR_3 = new QLineEdit(GB_HOT);
        LE_LAST_DISPENSE_ERROR_3->setObjectName(QString::fromUtf8("LE_LAST_DISPENSE_ERROR_3"));
        LE_LAST_DISPENSE_ERROR_3->setGeometry(QRect(420, 800, 61, 31));
        LE_LAST_DISPENSE_ERROR_3->setFont(font1);
        LE_LAST_DISPENSE_ERROR_3->setReadOnly(true);
        label_116 = new QLabel(GB_HOT);
        label_116->setObjectName(QString::fromUtf8("label_116"));
        label_116->setGeometry(QRect(310, 840, 101, 31));
        label_116->setFont(font1);
        label_116->setAlignment(Qt::AlignCenter);
        label_117 = new QLabel(GB_HOT);
        label_117->setObjectName(QString::fromUtf8("label_117"));
        label_117->setGeometry(QRect(310, 800, 101, 31));
        label_117->setFont(font1);
        label_117->setAlignment(Qt::AlignCenter);
        label_118 = new QLabel(GB_HOT);
        label_118->setObjectName(QString::fromUtf8("label_118"));
        label_118->setGeometry(QRect(310, 110, 101, 25));
        label_118->setFont(font1);
        label_118->setAlignment(Qt::AlignCenter);
        label_119 = new QLabel(GB_HOT);
        label_119->setObjectName(QString::fromUtf8("label_119"));
        label_119->setGeometry(QRect(310, 70, 101, 31));
        label_119->setFont(font1);
        label_119->setAlignment(Qt::AlignCenter);

        retranslateUi(DialogHotDispenser);

        QMetaObject::connectSlotsByName(DialogHotDispenser);
    } // setupUi

    void retranslateUi(QDialog *DialogHotDispenser)
    {
        DialogHotDispenser->setWindowTitle(QApplication::translate("DialogHotDispenser", "Dialog", nullptr));
        GB_HOT->setTitle(QApplication::translate("DialogHotDispenser", "\354\230\250\354\210\230 \353\224\224\354\212\244\355\216\234\354\204\234", nullptr));
        label_110->setText(QApplication::translate("DialogHotDispenser", "\354\236\245\354\271\230 \354\227\260\352\262\260 \354\203\201\355\203\234", nullptr));
        BTN_DISPENSE_HOT_BY_TIME->setText(QApplication::translate("DialogHotDispenser", "\354\230\250\354\210\230 \353\260\260\354\266\234", nullptr));
        label_113->setText(QApplication::translate("DialogHotDispenser", "\354\265\234\354\242\205 \353\260\260\354\266\234\354\227\220\353\237\254", nullptr));
        label_114->setText(QApplication::translate("DialogHotDispenser", "\355\230\204\354\236\254 \353\217\231\354\236\221\354\203\201\355\203\234", nullptr));
        label->setText(QApplication::translate("DialogHotDispenser", "E1: \352\270\260\354\241\264 \353\260\260\354\266\234 \353\217\231\354\236\221\354\235\264 \353\201\235\353\202\230\354\247\200 \354\225\212\354\225\230\353\212\224\353\215\260 \353\252\205\353\240\271 \353\260\233\354\235\214", nullptr));
        label_2->setText(QApplication::translate("DialogHotDispenser", "E2: \354\265\234\353\214\200 \354\266\234\354\210\230 \354\213\234\352\260\204 \354\264\210\352\263\274", nullptr));
        label_22->setText(QApplication::translate("DialogHotDispenser", "\354\264\210", nullptr));
        LE_OUT_TIME_HOT->setText(QApplication::translate("DialogHotDispenser", "3", nullptr));
        label_111->setText(QApplication::translate("DialogHotDispenser", "\354\213\234\352\260\204 \353\260\260\354\266\234", nullptr));
        BTN_DISPENSE_SODA_BY_TIME->setText(QApplication::translate("DialogHotDispenser", "\355\203\204\354\202\260\354\210\230 \353\260\260\354\266\234", nullptr));
        LE_OUT_TIME_SODA->setText(QApplication::translate("DialogHotDispenser", "3", nullptr));
        label_112->setText(QApplication::translate("DialogHotDispenser", "\354\213\234\352\260\204 \353\260\260\354\266\234", nullptr));
        label_23->setText(QApplication::translate("DialogHotDispenser", "\354\264\210", nullptr));
        label_115->setText(QApplication::translate("DialogHotDispenser", "\353\215\260\354\235\264\355\204\260 \354\203\201\355\203\234", nullptr));
        LE_VALVE_HOTO->setText(QApplication::translate("DialogHotDispenser", "HOTO \353\260\270\353\270\214", nullptr));
        LE_VALVE_INLET->setText(QApplication::translate("DialogHotDispenser", "INLET \353\260\270\353\270\214", nullptr));
        LE_VALVE_HOTI->setText(QApplication::translate("DialogHotDispenser", "HOTI \353\260\270\353\270\214", nullptr));
        LE_VALVE_AIR->setText(QApplication::translate("DialogHotDispenser", "AIR \353\260\270\353\270\214", nullptr));
        LE_VALVE_COOK->setText(QApplication::translate("DialogHotDispenser", "COOK \353\260\270\353\270\214", nullptr));
        LE_VALVE_CBO->setText(QApplication::translate("DialogHotDispenser", "CBO \353\260\270\353\270\214", nullptr));
        LE_VALVE_MIXI->setText(QApplication::translate("DialogHotDispenser", "MIXI \353\260\270\353\270\214", nullptr));
        label_3->setText(QApplication::translate("DialogHotDispenser", "\353\260\270\353\270\214 \353\217\231\354\236\221 \354\203\201\355\203\234", nullptr));
        label_4->setText(QApplication::translate("DialogHotDispenser", "\354\204\274\354\204\234 \353\266\210\353\237\211", nullptr));
        LE_SENSOR_ERR_GAS->setText(QApplication::translate("DialogHotDispenser", "\352\260\200\354\212\244 \354\225\225\353\240\245 \353\266\210\353\237\211", nullptr));
        LE_SENSOR_ERR_HOT->setText(QApplication::translate("DialogHotDispenser", "\354\230\250\354\210\230 \354\204\274\354\204\234 \353\266\210\353\237\211", nullptr));
        LE_SENSOR_ERR_CO2->setText(QApplication::translate("DialogHotDispenser", "\355\203\204\354\202\260 \354\204\274\354\204\234 \353\266\210\353\237\211", nullptr));
        label_5->setText(QApplication::translate("DialogHotDispenser", "\352\270\211\354\210\230 \353\210\204\354\210\230 \353\266\210\353\237\211", nullptr));
        LE_WATER_ERR_INLET->setText(QApplication::translate("DialogHotDispenser", "\352\270\211\354\210\230 \353\266\210\353\237\211", nullptr));
        LE_WATER_ERR_LEAK->setText(QApplication::translate("DialogHotDispenser", "\353\210\204\354\210\230 \353\266\210\353\237\211", nullptr));
        label_122->setText(QApplication::translate("DialogHotDispenser", "\354\213\234\352\260\204 \353\260\260\354\266\234", nullptr));
        label_11->setText(QApplication::translate("DialogHotDispenser", "\354\204\274\354\204\234 \353\266\210\353\237\211", nullptr));
        LE_SENSOR_ERR_GAS_3->setText(QApplication::translate("DialogHotDispenser", "\352\260\200\354\212\244 \354\225\225\353\240\245 \353\266\210\353\237\211", nullptr));
        LE_SENSOR_ERR_HOT_3->setText(QApplication::translate("DialogHotDispenser", "\354\230\250\354\210\230 \354\204\274\354\204\234 \353\266\210\353\237\211", nullptr));
        LE_SENSOR_ERR_CO2_3->setText(QApplication::translate("DialogHotDispenser", "\355\203\204\354\202\260 \354\204\274\354\204\234 \353\266\210\353\237\211", nullptr));
        BTN_DISPENSE_SODA_BY_TIME_3->setText(QApplication::translate("DialogHotDispenser", "\355\203\204\354\202\260\354\210\230 \353\260\260\354\266\234", nullptr));
        BTN_DISPENSE_HOT_BY_TIME_3->setText(QApplication::translate("DialogHotDispenser", "\354\230\250\354\210\230 \353\260\260\354\266\234", nullptr));
        label_123->setText(QApplication::translate("DialogHotDispenser", "\354\213\234\352\260\204 \353\260\260\354\266\234", nullptr));
        label_12->setText(QApplication::translate("DialogHotDispenser", "\352\270\211\354\210\230 \353\210\204\354\210\230 \353\266\210\353\237\211", nullptr));
        LE_WATER_ERR_INLET_3->setText(QApplication::translate("DialogHotDispenser", "\352\270\211\354\210\230 \353\266\210\353\237\211", nullptr));
        LE_WATER_ERR_LEAK_3->setText(QApplication::translate("DialogHotDispenser", "\353\210\204\354\210\230 \353\266\210\353\237\211", nullptr));
        label_26->setText(QApplication::translate("DialogHotDispenser", "\354\264\210", nullptr));
        LE_OUT_TIME_HOT_3->setText(QApplication::translate("DialogHotDispenser", "3", nullptr));
        LE_OUT_TIME_SODA_3->setText(QApplication::translate("DialogHotDispenser", "3", nullptr));
        label_27->setText(QApplication::translate("DialogHotDispenser", "\354\264\210", nullptr));
        LE_VALVE_HOTO_3->setText(QApplication::translate("DialogHotDispenser", "HOTO \353\260\270\353\270\214", nullptr));
        LE_VALVE_INLET_3->setText(QApplication::translate("DialogHotDispenser", "INLET \353\260\270\353\270\214", nullptr));
        LE_VALVE_HOTI_3->setText(QApplication::translate("DialogHotDispenser", "HOTI \353\260\270\353\270\214", nullptr));
        LE_VALVE_AIR_3->setText(QApplication::translate("DialogHotDispenser", "AIR \353\260\270\353\270\214", nullptr));
        LE_VALVE_COOK_3->setText(QApplication::translate("DialogHotDispenser", "COOK \353\260\270\353\270\214", nullptr));
        LE_VALVE_CBO_3->setText(QApplication::translate("DialogHotDispenser", "CBO \353\260\270\353\270\214", nullptr));
        LE_VALVE_MIXI_3->setText(QApplication::translate("DialogHotDispenser", "MIXI \353\260\270\353\270\214", nullptr));
        label_13->setText(QApplication::translate("DialogHotDispenser", "\353\260\270\353\270\214 \353\217\231\354\236\221 \354\203\201\355\203\234", nullptr));
        label_14->setText(QApplication::translate("DialogHotDispenser", "E2: \354\265\234\353\214\200 \354\266\234\354\210\230 \354\213\234\352\260\204 \354\264\210\352\263\274", nullptr));
        label_15->setText(QApplication::translate("DialogHotDispenser", "E1: \352\270\260\354\241\264 \353\260\260\354\266\234 \353\217\231\354\236\221\354\235\264 \353\201\235\353\202\230\354\247\200 \354\225\212\354\225\230\353\212\224\353\215\260 \353\252\205\353\240\271 \353\260\233\354\235\214", nullptr));
        label_116->setText(QApplication::translate("DialogHotDispenser", "\355\230\204\354\236\254 \353\217\231\354\236\221\354\203\201\355\203\234", nullptr));
        label_117->setText(QApplication::translate("DialogHotDispenser", "\354\265\234\354\242\205 \353\260\260\354\266\234\354\227\220\353\237\254", nullptr));
        label_118->setText(QApplication::translate("DialogHotDispenser", "\353\215\260\354\235\264\355\204\260 \354\203\201\355\203\234", nullptr));
        label_119->setText(QApplication::translate("DialogHotDispenser", "\354\236\245\354\271\230 \354\227\260\352\262\260 \354\203\201\355\203\234", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DialogHotDispenser: public Ui_DialogHotDispenser {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOGHOTDISPENSER_H
