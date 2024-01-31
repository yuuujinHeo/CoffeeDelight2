/********************************************************************************
** Form generated from reading UI file 'DialogOutlet.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOGOUTLET_H
#define UI_DIALOGOUTLET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_DialogOutlet
{
public:
    QGroupBox *GB_OUTLET;
    QLineEdit *LE_OUTLET_CONNECTION;
    QLabel *label_110;
    QWidget *gridLayoutWidget_2;
    QGridLayout *gridLayout_8;
    QLabel *label_21;
    QLineEdit *LE_OUTLET_DOOR_OPEN_1;
    QLineEdit *LE_OUTLET_CUP_DETECT_1;
    QLineEdit *LE_OUTLET_DOOR_LOCK_1;
    QLineEdit *LE_OUTLET_PIN_1;
    QPushButton *BTN_OUTLET_DISPENSE_1;
    QPushButton *BTN_ENABLE_MODULE_1;
    QWidget *gridLayoutWidget_3;
    QGridLayout *gridLayout_9;
    QLineEdit *LE_OUTLET_CUP_DETECT_2;
    QLabel *label_22;
    QLineEdit *LE_OUTLET_DOOR_LOCK_2;
    QLineEdit *LE_OUTLET_DOOR_OPEN_2;
    QPushButton *BTN_OUTLET_DISPENSE_2;
    QLineEdit *LE_OUTLET_PIN_2;
    QPushButton *BTN_ENABLE_MODULE_2;
    QWidget *gridLayoutWidget_4;
    QGridLayout *gridLayout_10;
    QPushButton *BTN_OUTLET_DISPENSE_3;
    QPushButton *BTN_ENABLE_MODULE_3;
    QLineEdit *LE_OUTLET_PIN_3;
    QLineEdit *LE_OUTLET_DOOR_LOCK_3;
    QLineEdit *LE_OUTLET_DOOR_OPEN_3;
    QLineEdit *LE_OUTLET_CUP_DETECT_3;
    QLabel *label_23;
    QWidget *gridLayoutWidget_5;
    QGridLayout *gridLayout_11;
    QLineEdit *LE_OUTLET_DOOR_LOCK_4;
    QLineEdit *LE_OUTLET_CUP_DETECT_4;
    QPushButton *BTN_OUTLET_DISPENSE_4;
    QLineEdit *LE_OUTLET_DOOR_OPEN_4;
    QLineEdit *LE_OUTLET_PIN_4;
    QLabel *label_24;
    QPushButton *BTN_ENABLE_MODULE_4;
    QWidget *gridLayoutWidget_6;
    QGridLayout *gridLayout_12;
    QLineEdit *LE_OUTLET_CUP_DETECT_5;
    QPushButton *BTN_OUTLET_DISPENSE_5;
    QLineEdit *LE_OUTLET_DOOR_OPEN_5;
    QLineEdit *LE_OUTLET_PIN_5;
    QLabel *label_25;
    QLineEdit *LE_OUTLET_DOOR_LOCK_5;
    QPushButton *BTN_ENABLE_MODULE_5;

    void setupUi(QDialog *DialogOutlet)
    {
        if (DialogOutlet->objectName().isEmpty())
            DialogOutlet->setObjectName(QString::fromUtf8("DialogOutlet"));
        DialogOutlet->resize(601, 931);
        GB_OUTLET = new QGroupBox(DialogOutlet);
        GB_OUTLET->setObjectName(QString::fromUtf8("GB_OUTLET"));
        GB_OUTLET->setGeometry(QRect(0, 0, 601, 971));
        QFont font;
        font.setFamily(QString::fromUtf8("\355\225\250\354\264\210\353\241\254\353\217\213\354\233\200"));
        font.setPointSize(20);
        font.setBold(false);
        font.setItalic(false);
        font.setWeight(50);
        GB_OUTLET->setFont(font);
        GB_OUTLET->setStyleSheet(QString::fromUtf8("QGroupBox  {\n"
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
"	font: 15pt \"\355\225\250\354\264\210\353\241\254\353\217\213\354\233\200\";\n"
"}\n"
"QComboBox{\n"
"	font: 10pt \"\355\225\250\354\264\210\353\241\254\353\217\213\354\233\200\";\n"
"	background-color: #ffffff\n"
"}\n"
"QPushButton{\n"
"	font: 13pt \"\355\225\250\354\264\210\353\241\254\353\217\213\354\233\200\";\n"
"	background-color: #ffffff\n"
"}\n"
"QLineEdit{\n"
"	font: 10pt \"\355\225\250\354\264\210\353\241\254\353\217\213\354\233\200\";\n"
"	background-color: #ffffff\n"
"}\n"
"\n"
"\n"
"\n"
""));
        LE_OUTLET_CONNECTION = new QLineEdit(GB_OUTLET);
        LE_OUTLET_CONNECTION->setObjectName(QString::fromUtf8("LE_OUTLET_CONNECTION"));
        LE_OUTLET_CONNECTION->setGeometry(QRect(170, 70, 411, 31));
        QFont font1;
        font1.setFamily(QString::fromUtf8("\355\225\250\354\264\210\353\241\254\353\217\213\354\233\200"));
        font1.setPointSize(10);
        font1.setBold(false);
        font1.setItalic(false);
        font1.setWeight(50);
        LE_OUTLET_CONNECTION->setFont(font1);
        LE_OUTLET_CONNECTION->setReadOnly(true);
        label_110 = new QLabel(GB_OUTLET);
        label_110->setObjectName(QString::fromUtf8("label_110"));
        label_110->setGeometry(QRect(20, 70, 141, 31));
        QFont font2;
        font2.setFamily(QString::fromUtf8("\355\225\250\354\264\210\353\241\254\353\217\213\354\233\200"));
        font2.setPointSize(15);
        font2.setBold(false);
        font2.setItalic(false);
        font2.setWeight(50);
        label_110->setFont(font2);
        label_110->setAlignment(Qt::AlignCenter);
        gridLayoutWidget_2 = new QWidget(GB_OUTLET);
        gridLayoutWidget_2->setObjectName(QString::fromUtf8("gridLayoutWidget_2"));
        gridLayoutWidget_2->setGeometry(QRect(20, 170, 171, 223));
        gridLayout_8 = new QGridLayout(gridLayoutWidget_2);
        gridLayout_8->setObjectName(QString::fromUtf8("gridLayout_8"));
        gridLayout_8->setContentsMargins(0, 0, 0, 0);
        label_21 = new QLabel(gridLayoutWidget_2);
        label_21->setObjectName(QString::fromUtf8("label_21"));
        label_21->setFont(font2);
        label_21->setStyleSheet(QString::fromUtf8("QLabel{ \n"
"   border: 0px solid\n"
"} "));
        label_21->setAlignment(Qt::AlignCenter);

        gridLayout_8->addWidget(label_21, 0, 0, 1, 3);

        LE_OUTLET_DOOR_OPEN_1 = new QLineEdit(gridLayoutWidget_2);
        LE_OUTLET_DOOR_OPEN_1->setObjectName(QString::fromUtf8("LE_OUTLET_DOOR_OPEN_1"));
        LE_OUTLET_DOOR_OPEN_1->setMinimumSize(QSize(50, 50));
        LE_OUTLET_DOOR_OPEN_1->setMaximumSize(QSize(50, 16777215));
        LE_OUTLET_DOOR_OPEN_1->setAlignment(Qt::AlignCenter);
        LE_OUTLET_DOOR_OPEN_1->setReadOnly(true);

        gridLayout_8->addWidget(LE_OUTLET_DOOR_OPEN_1, 3, 0, 1, 1);

        LE_OUTLET_CUP_DETECT_1 = new QLineEdit(gridLayoutWidget_2);
        LE_OUTLET_CUP_DETECT_1->setObjectName(QString::fromUtf8("LE_OUTLET_CUP_DETECT_1"));
        LE_OUTLET_CUP_DETECT_1->setMinimumSize(QSize(50, 50));
        LE_OUTLET_CUP_DETECT_1->setMaximumSize(QSize(50, 16777215));
        LE_OUTLET_CUP_DETECT_1->setAlignment(Qt::AlignCenter);
        LE_OUTLET_CUP_DETECT_1->setReadOnly(true);

        gridLayout_8->addWidget(LE_OUTLET_CUP_DETECT_1, 3, 2, 1, 1);

        LE_OUTLET_DOOR_LOCK_1 = new QLineEdit(gridLayoutWidget_2);
        LE_OUTLET_DOOR_LOCK_1->setObjectName(QString::fromUtf8("LE_OUTLET_DOOR_LOCK_1"));
        LE_OUTLET_DOOR_LOCK_1->setMinimumSize(QSize(50, 50));
        LE_OUTLET_DOOR_LOCK_1->setMaximumSize(QSize(50, 16777215));
        LE_OUTLET_DOOR_LOCK_1->setAlignment(Qt::AlignCenter);
        LE_OUTLET_DOOR_LOCK_1->setReadOnly(true);

        gridLayout_8->addWidget(LE_OUTLET_DOOR_LOCK_1, 3, 1, 1, 1);

        LE_OUTLET_PIN_1 = new QLineEdit(gridLayoutWidget_2);
        LE_OUTLET_PIN_1->setObjectName(QString::fromUtf8("LE_OUTLET_PIN_1"));
        LE_OUTLET_PIN_1->setMinimumSize(QSize(0, 40));
        LE_OUTLET_PIN_1->setFont(font1);
        LE_OUTLET_PIN_1->setAlignment(Qt::AlignCenter);

        gridLayout_8->addWidget(LE_OUTLET_PIN_1, 2, 0, 1, 3);

        BTN_OUTLET_DISPENSE_1 = new QPushButton(gridLayoutWidget_2);
        BTN_OUTLET_DISPENSE_1->setObjectName(QString::fromUtf8("BTN_OUTLET_DISPENSE_1"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(BTN_OUTLET_DISPENSE_1->sizePolicy().hasHeightForWidth());
        BTN_OUTLET_DISPENSE_1->setSizePolicy(sizePolicy);
        BTN_OUTLET_DISPENSE_1->setMinimumSize(QSize(80, 50));
        BTN_OUTLET_DISPENSE_1->setMaximumSize(QSize(8888, 50));
        QFont font3;
        font3.setFamily(QString::fromUtf8("\355\225\250\354\264\210\353\241\254\353\217\213\354\233\200"));
        font3.setPointSize(13);
        font3.setBold(false);
        font3.setItalic(false);
        font3.setWeight(50);
        BTN_OUTLET_DISPENSE_1->setFont(font3);

        gridLayout_8->addWidget(BTN_OUTLET_DISPENSE_1, 4, 0, 1, 3);

        BTN_ENABLE_MODULE_1 = new QPushButton(gridLayoutWidget_2);
        BTN_ENABLE_MODULE_1->setObjectName(QString::fromUtf8("BTN_ENABLE_MODULE_1"));
        BTN_ENABLE_MODULE_1->setFont(font3);

        gridLayout_8->addWidget(BTN_ENABLE_MODULE_1, 1, 0, 1, 3);

        gridLayoutWidget_3 = new QWidget(GB_OUTLET);
        gridLayoutWidget_3->setObjectName(QString::fromUtf8("gridLayoutWidget_3"));
        gridLayoutWidget_3->setGeometry(QRect(20, 410, 171, 223));
        gridLayout_9 = new QGridLayout(gridLayoutWidget_3);
        gridLayout_9->setObjectName(QString::fromUtf8("gridLayout_9"));
        gridLayout_9->setContentsMargins(0, 0, 0, 0);
        LE_OUTLET_CUP_DETECT_2 = new QLineEdit(gridLayoutWidget_3);
        LE_OUTLET_CUP_DETECT_2->setObjectName(QString::fromUtf8("LE_OUTLET_CUP_DETECT_2"));
        LE_OUTLET_CUP_DETECT_2->setMinimumSize(QSize(50, 50));
        LE_OUTLET_CUP_DETECT_2->setMaximumSize(QSize(50, 16777215));
        LE_OUTLET_CUP_DETECT_2->setAlignment(Qt::AlignCenter);
        LE_OUTLET_CUP_DETECT_2->setReadOnly(true);

        gridLayout_9->addWidget(LE_OUTLET_CUP_DETECT_2, 3, 2, 1, 1);

        label_22 = new QLabel(gridLayoutWidget_3);
        label_22->setObjectName(QString::fromUtf8("label_22"));
        label_22->setFont(font2);
        label_22->setStyleSheet(QString::fromUtf8("QLabel{ \n"
"   border: 0px solid\n"
"} "));
        label_22->setAlignment(Qt::AlignCenter);

        gridLayout_9->addWidget(label_22, 0, 0, 1, 3);

        LE_OUTLET_DOOR_LOCK_2 = new QLineEdit(gridLayoutWidget_3);
        LE_OUTLET_DOOR_LOCK_2->setObjectName(QString::fromUtf8("LE_OUTLET_DOOR_LOCK_2"));
        LE_OUTLET_DOOR_LOCK_2->setMinimumSize(QSize(50, 50));
        LE_OUTLET_DOOR_LOCK_2->setMaximumSize(QSize(50, 16777215));
        LE_OUTLET_DOOR_LOCK_2->setAlignment(Qt::AlignCenter);
        LE_OUTLET_DOOR_LOCK_2->setReadOnly(true);

        gridLayout_9->addWidget(LE_OUTLET_DOOR_LOCK_2, 3, 1, 1, 1);

        LE_OUTLET_DOOR_OPEN_2 = new QLineEdit(gridLayoutWidget_3);
        LE_OUTLET_DOOR_OPEN_2->setObjectName(QString::fromUtf8("LE_OUTLET_DOOR_OPEN_2"));
        LE_OUTLET_DOOR_OPEN_2->setMinimumSize(QSize(50, 50));
        LE_OUTLET_DOOR_OPEN_2->setMaximumSize(QSize(50, 16777215));
        LE_OUTLET_DOOR_OPEN_2->setAlignment(Qt::AlignCenter);
        LE_OUTLET_DOOR_OPEN_2->setReadOnly(true);

        gridLayout_9->addWidget(LE_OUTLET_DOOR_OPEN_2, 3, 0, 1, 1);

        BTN_OUTLET_DISPENSE_2 = new QPushButton(gridLayoutWidget_3);
        BTN_OUTLET_DISPENSE_2->setObjectName(QString::fromUtf8("BTN_OUTLET_DISPENSE_2"));
        sizePolicy.setHeightForWidth(BTN_OUTLET_DISPENSE_2->sizePolicy().hasHeightForWidth());
        BTN_OUTLET_DISPENSE_2->setSizePolicy(sizePolicy);
        BTN_OUTLET_DISPENSE_2->setMinimumSize(QSize(80, 50));
        BTN_OUTLET_DISPENSE_2->setMaximumSize(QSize(8888, 50));
        BTN_OUTLET_DISPENSE_2->setFont(font3);

        gridLayout_9->addWidget(BTN_OUTLET_DISPENSE_2, 4, 0, 1, 3);

        LE_OUTLET_PIN_2 = new QLineEdit(gridLayoutWidget_3);
        LE_OUTLET_PIN_2->setObjectName(QString::fromUtf8("LE_OUTLET_PIN_2"));
        LE_OUTLET_PIN_2->setMinimumSize(QSize(0, 40));
        LE_OUTLET_PIN_2->setFont(font1);
        LE_OUTLET_PIN_2->setAlignment(Qt::AlignCenter);

        gridLayout_9->addWidget(LE_OUTLET_PIN_2, 2, 0, 1, 3);

        BTN_ENABLE_MODULE_2 = new QPushButton(gridLayoutWidget_3);
        BTN_ENABLE_MODULE_2->setObjectName(QString::fromUtf8("BTN_ENABLE_MODULE_2"));
        BTN_ENABLE_MODULE_2->setFont(font3);

        gridLayout_9->addWidget(BTN_ENABLE_MODULE_2, 1, 0, 1, 3);

        gridLayoutWidget_4 = new QWidget(GB_OUTLET);
        gridLayoutWidget_4->setObjectName(QString::fromUtf8("gridLayoutWidget_4"));
        gridLayoutWidget_4->setGeometry(QRect(220, 410, 171, 223));
        gridLayout_10 = new QGridLayout(gridLayoutWidget_4);
        gridLayout_10->setObjectName(QString::fromUtf8("gridLayout_10"));
        gridLayout_10->setContentsMargins(0, 0, 0, 0);
        BTN_OUTLET_DISPENSE_3 = new QPushButton(gridLayoutWidget_4);
        BTN_OUTLET_DISPENSE_3->setObjectName(QString::fromUtf8("BTN_OUTLET_DISPENSE_3"));
        sizePolicy.setHeightForWidth(BTN_OUTLET_DISPENSE_3->sizePolicy().hasHeightForWidth());
        BTN_OUTLET_DISPENSE_3->setSizePolicy(sizePolicy);
        BTN_OUTLET_DISPENSE_3->setMinimumSize(QSize(80, 50));
        BTN_OUTLET_DISPENSE_3->setMaximumSize(QSize(8888, 50));
        BTN_OUTLET_DISPENSE_3->setFont(font3);

        gridLayout_10->addWidget(BTN_OUTLET_DISPENSE_3, 4, 0, 1, 3);

        BTN_ENABLE_MODULE_3 = new QPushButton(gridLayoutWidget_4);
        BTN_ENABLE_MODULE_3->setObjectName(QString::fromUtf8("BTN_ENABLE_MODULE_3"));
        BTN_ENABLE_MODULE_3->setFont(font3);

        gridLayout_10->addWidget(BTN_ENABLE_MODULE_3, 1, 0, 1, 3);

        LE_OUTLET_PIN_3 = new QLineEdit(gridLayoutWidget_4);
        LE_OUTLET_PIN_3->setObjectName(QString::fromUtf8("LE_OUTLET_PIN_3"));
        LE_OUTLET_PIN_3->setMinimumSize(QSize(0, 40));
        LE_OUTLET_PIN_3->setFont(font1);
        LE_OUTLET_PIN_3->setAlignment(Qt::AlignCenter);

        gridLayout_10->addWidget(LE_OUTLET_PIN_3, 2, 0, 1, 3);

        LE_OUTLET_DOOR_LOCK_3 = new QLineEdit(gridLayoutWidget_4);
        LE_OUTLET_DOOR_LOCK_3->setObjectName(QString::fromUtf8("LE_OUTLET_DOOR_LOCK_3"));
        LE_OUTLET_DOOR_LOCK_3->setMinimumSize(QSize(50, 50));
        LE_OUTLET_DOOR_LOCK_3->setMaximumSize(QSize(50, 16777215));
        LE_OUTLET_DOOR_LOCK_3->setAlignment(Qt::AlignCenter);
        LE_OUTLET_DOOR_LOCK_3->setReadOnly(true);

        gridLayout_10->addWidget(LE_OUTLET_DOOR_LOCK_3, 3, 1, 1, 1);

        LE_OUTLET_DOOR_OPEN_3 = new QLineEdit(gridLayoutWidget_4);
        LE_OUTLET_DOOR_OPEN_3->setObjectName(QString::fromUtf8("LE_OUTLET_DOOR_OPEN_3"));
        LE_OUTLET_DOOR_OPEN_3->setMinimumSize(QSize(50, 50));
        LE_OUTLET_DOOR_OPEN_3->setMaximumSize(QSize(50, 16777215));
        LE_OUTLET_DOOR_OPEN_3->setAlignment(Qt::AlignCenter);
        LE_OUTLET_DOOR_OPEN_3->setReadOnly(true);

        gridLayout_10->addWidget(LE_OUTLET_DOOR_OPEN_3, 3, 0, 1, 1);

        LE_OUTLET_CUP_DETECT_3 = new QLineEdit(gridLayoutWidget_4);
        LE_OUTLET_CUP_DETECT_3->setObjectName(QString::fromUtf8("LE_OUTLET_CUP_DETECT_3"));
        LE_OUTLET_CUP_DETECT_3->setMinimumSize(QSize(50, 50));
        LE_OUTLET_CUP_DETECT_3->setMaximumSize(QSize(50, 16777215));
        LE_OUTLET_CUP_DETECT_3->setAlignment(Qt::AlignCenter);
        LE_OUTLET_CUP_DETECT_3->setReadOnly(true);

        gridLayout_10->addWidget(LE_OUTLET_CUP_DETECT_3, 3, 2, 1, 1);

        label_23 = new QLabel(gridLayoutWidget_4);
        label_23->setObjectName(QString::fromUtf8("label_23"));
        label_23->setFont(font2);
        label_23->setStyleSheet(QString::fromUtf8("QLabel{ \n"
"   border: 0px solid\n"
"} "));
        label_23->setAlignment(Qt::AlignCenter);

        gridLayout_10->addWidget(label_23, 0, 0, 1, 3);

        gridLayoutWidget_5 = new QWidget(GB_OUTLET);
        gridLayoutWidget_5->setObjectName(QString::fromUtf8("gridLayoutWidget_5"));
        gridLayoutWidget_5->setGeometry(QRect(420, 410, 171, 223));
        gridLayout_11 = new QGridLayout(gridLayoutWidget_5);
        gridLayout_11->setObjectName(QString::fromUtf8("gridLayout_11"));
        gridLayout_11->setContentsMargins(0, 0, 0, 0);
        LE_OUTLET_DOOR_LOCK_4 = new QLineEdit(gridLayoutWidget_5);
        LE_OUTLET_DOOR_LOCK_4->setObjectName(QString::fromUtf8("LE_OUTLET_DOOR_LOCK_4"));
        LE_OUTLET_DOOR_LOCK_4->setMinimumSize(QSize(50, 50));
        LE_OUTLET_DOOR_LOCK_4->setMaximumSize(QSize(50, 16777215));
        LE_OUTLET_DOOR_LOCK_4->setAlignment(Qt::AlignCenter);
        LE_OUTLET_DOOR_LOCK_4->setReadOnly(true);

        gridLayout_11->addWidget(LE_OUTLET_DOOR_LOCK_4, 3, 1, 1, 1);

        LE_OUTLET_CUP_DETECT_4 = new QLineEdit(gridLayoutWidget_5);
        LE_OUTLET_CUP_DETECT_4->setObjectName(QString::fromUtf8("LE_OUTLET_CUP_DETECT_4"));
        LE_OUTLET_CUP_DETECT_4->setMinimumSize(QSize(50, 50));
        LE_OUTLET_CUP_DETECT_4->setMaximumSize(QSize(50, 16777215));
        LE_OUTLET_CUP_DETECT_4->setAlignment(Qt::AlignCenter);
        LE_OUTLET_CUP_DETECT_4->setReadOnly(true);

        gridLayout_11->addWidget(LE_OUTLET_CUP_DETECT_4, 3, 2, 1, 1);

        BTN_OUTLET_DISPENSE_4 = new QPushButton(gridLayoutWidget_5);
        BTN_OUTLET_DISPENSE_4->setObjectName(QString::fromUtf8("BTN_OUTLET_DISPENSE_4"));
        sizePolicy.setHeightForWidth(BTN_OUTLET_DISPENSE_4->sizePolicy().hasHeightForWidth());
        BTN_OUTLET_DISPENSE_4->setSizePolicy(sizePolicy);
        BTN_OUTLET_DISPENSE_4->setMinimumSize(QSize(80, 50));
        BTN_OUTLET_DISPENSE_4->setMaximumSize(QSize(8888, 50));
        BTN_OUTLET_DISPENSE_4->setFont(font3);

        gridLayout_11->addWidget(BTN_OUTLET_DISPENSE_4, 4, 0, 1, 3);

        LE_OUTLET_DOOR_OPEN_4 = new QLineEdit(gridLayoutWidget_5);
        LE_OUTLET_DOOR_OPEN_4->setObjectName(QString::fromUtf8("LE_OUTLET_DOOR_OPEN_4"));
        LE_OUTLET_DOOR_OPEN_4->setMinimumSize(QSize(50, 50));
        LE_OUTLET_DOOR_OPEN_4->setMaximumSize(QSize(50, 16777215));
        LE_OUTLET_DOOR_OPEN_4->setAlignment(Qt::AlignCenter);
        LE_OUTLET_DOOR_OPEN_4->setReadOnly(true);

        gridLayout_11->addWidget(LE_OUTLET_DOOR_OPEN_4, 3, 0, 1, 1);

        LE_OUTLET_PIN_4 = new QLineEdit(gridLayoutWidget_5);
        LE_OUTLET_PIN_4->setObjectName(QString::fromUtf8("LE_OUTLET_PIN_4"));
        LE_OUTLET_PIN_4->setMinimumSize(QSize(0, 40));
        LE_OUTLET_PIN_4->setFont(font1);
        LE_OUTLET_PIN_4->setAlignment(Qt::AlignCenter);

        gridLayout_11->addWidget(LE_OUTLET_PIN_4, 2, 0, 1, 3);

        label_24 = new QLabel(gridLayoutWidget_5);
        label_24->setObjectName(QString::fromUtf8("label_24"));
        label_24->setFont(font2);
        label_24->setStyleSheet(QString::fromUtf8("QLabel{ \n"
"   border: 0px solid\n"
"} "));
        label_24->setAlignment(Qt::AlignCenter);

        gridLayout_11->addWidget(label_24, 0, 0, 1, 3);

        BTN_ENABLE_MODULE_4 = new QPushButton(gridLayoutWidget_5);
        BTN_ENABLE_MODULE_4->setObjectName(QString::fromUtf8("BTN_ENABLE_MODULE_4"));
        BTN_ENABLE_MODULE_4->setFont(font3);

        gridLayout_11->addWidget(BTN_ENABLE_MODULE_4, 1, 0, 1, 3);

        gridLayoutWidget_6 = new QWidget(GB_OUTLET);
        gridLayoutWidget_6->setObjectName(QString::fromUtf8("gridLayoutWidget_6"));
        gridLayoutWidget_6->setGeometry(QRect(420, 170, 171, 223));
        gridLayout_12 = new QGridLayout(gridLayoutWidget_6);
        gridLayout_12->setObjectName(QString::fromUtf8("gridLayout_12"));
        gridLayout_12->setContentsMargins(0, 0, 0, 0);
        LE_OUTLET_CUP_DETECT_5 = new QLineEdit(gridLayoutWidget_6);
        LE_OUTLET_CUP_DETECT_5->setObjectName(QString::fromUtf8("LE_OUTLET_CUP_DETECT_5"));
        LE_OUTLET_CUP_DETECT_5->setMinimumSize(QSize(50, 50));
        LE_OUTLET_CUP_DETECT_5->setMaximumSize(QSize(50, 16777215));
        LE_OUTLET_CUP_DETECT_5->setAlignment(Qt::AlignCenter);
        LE_OUTLET_CUP_DETECT_5->setReadOnly(true);

        gridLayout_12->addWidget(LE_OUTLET_CUP_DETECT_5, 3, 2, 1, 1);

        BTN_OUTLET_DISPENSE_5 = new QPushButton(gridLayoutWidget_6);
        BTN_OUTLET_DISPENSE_5->setObjectName(QString::fromUtf8("BTN_OUTLET_DISPENSE_5"));
        sizePolicy.setHeightForWidth(BTN_OUTLET_DISPENSE_5->sizePolicy().hasHeightForWidth());
        BTN_OUTLET_DISPENSE_5->setSizePolicy(sizePolicy);
        BTN_OUTLET_DISPENSE_5->setMinimumSize(QSize(80, 50));
        BTN_OUTLET_DISPENSE_5->setMaximumSize(QSize(8888, 50));
        BTN_OUTLET_DISPENSE_5->setFont(font3);

        gridLayout_12->addWidget(BTN_OUTLET_DISPENSE_5, 4, 0, 1, 3);

        LE_OUTLET_DOOR_OPEN_5 = new QLineEdit(gridLayoutWidget_6);
        LE_OUTLET_DOOR_OPEN_5->setObjectName(QString::fromUtf8("LE_OUTLET_DOOR_OPEN_5"));
        LE_OUTLET_DOOR_OPEN_5->setMinimumSize(QSize(50, 50));
        LE_OUTLET_DOOR_OPEN_5->setMaximumSize(QSize(50, 16777215));
        LE_OUTLET_DOOR_OPEN_5->setAlignment(Qt::AlignCenter);
        LE_OUTLET_DOOR_OPEN_5->setReadOnly(true);

        gridLayout_12->addWidget(LE_OUTLET_DOOR_OPEN_5, 3, 0, 1, 1);

        LE_OUTLET_PIN_5 = new QLineEdit(gridLayoutWidget_6);
        LE_OUTLET_PIN_5->setObjectName(QString::fromUtf8("LE_OUTLET_PIN_5"));
        LE_OUTLET_PIN_5->setMinimumSize(QSize(0, 40));
        LE_OUTLET_PIN_5->setFont(font1);
        LE_OUTLET_PIN_5->setAlignment(Qt::AlignCenter);

        gridLayout_12->addWidget(LE_OUTLET_PIN_5, 2, 0, 1, 3);

        label_25 = new QLabel(gridLayoutWidget_6);
        label_25->setObjectName(QString::fromUtf8("label_25"));
        label_25->setFont(font2);
        label_25->setStyleSheet(QString::fromUtf8("QLabel{ \n"
"   border: 0px solid\n"
"} "));
        label_25->setAlignment(Qt::AlignCenter);

        gridLayout_12->addWidget(label_25, 0, 0, 1, 3);

        LE_OUTLET_DOOR_LOCK_5 = new QLineEdit(gridLayoutWidget_6);
        LE_OUTLET_DOOR_LOCK_5->setObjectName(QString::fromUtf8("LE_OUTLET_DOOR_LOCK_5"));
        LE_OUTLET_DOOR_LOCK_5->setMinimumSize(QSize(50, 50));
        LE_OUTLET_DOOR_LOCK_5->setMaximumSize(QSize(50, 16777215));
        LE_OUTLET_DOOR_LOCK_5->setAlignment(Qt::AlignCenter);
        LE_OUTLET_DOOR_LOCK_5->setReadOnly(true);

        gridLayout_12->addWidget(LE_OUTLET_DOOR_LOCK_5, 3, 1, 1, 1);

        BTN_ENABLE_MODULE_5 = new QPushButton(gridLayoutWidget_6);
        BTN_ENABLE_MODULE_5->setObjectName(QString::fromUtf8("BTN_ENABLE_MODULE_5"));
        BTN_ENABLE_MODULE_5->setFont(font3);

        gridLayout_12->addWidget(BTN_ENABLE_MODULE_5, 1, 0, 1, 3);


        retranslateUi(DialogOutlet);

        QMetaObject::connectSlotsByName(DialogOutlet);
    } // setupUi

    void retranslateUi(QDialog *DialogOutlet)
    {
        DialogOutlet->setWindowTitle(QApplication::translate("DialogOutlet", "Dialog", nullptr));
        GB_OUTLET->setTitle(QApplication::translate("DialogOutlet", "\354\235\214\353\243\214 \353\260\260\354\266\234\352\265\254", nullptr));
        label_110->setText(QApplication::translate("DialogOutlet", "\354\236\245\354\271\230 \354\227\260\352\262\260 \354\203\201\355\203\234", nullptr));
        label_21->setText(QApplication::translate("DialogOutlet", "#1", nullptr));
        LE_OUTLET_DOOR_OPEN_1->setText(QApplication::translate("DialogOutlet", "\354\227\264\353\246\274", nullptr));
        LE_OUTLET_CUP_DETECT_1->setText(QApplication::translate("DialogOutlet", "\354\273\265\352\260\220\354\247\200", nullptr));
        LE_OUTLET_DOOR_LOCK_1->setText(QApplication::translate("DialogOutlet", "\354\236\240\352\271\200", nullptr));
        BTN_OUTLET_DISPENSE_1->setText(QApplication::translate("DialogOutlet", "\353\260\260\354\266\234", nullptr));
        BTN_ENABLE_MODULE_1->setText(QApplication::translate("DialogOutlet", "\354\202\254\354\232\251 \354\244\221", nullptr));
        LE_OUTLET_CUP_DETECT_2->setText(QApplication::translate("DialogOutlet", "\354\273\265\352\260\220\354\247\200", nullptr));
        label_22->setText(QApplication::translate("DialogOutlet", "#2", nullptr));
        LE_OUTLET_DOOR_LOCK_2->setText(QApplication::translate("DialogOutlet", "\354\236\240\352\271\200", nullptr));
        LE_OUTLET_DOOR_OPEN_2->setText(QApplication::translate("DialogOutlet", "\354\227\264\353\246\274", nullptr));
        BTN_OUTLET_DISPENSE_2->setText(QApplication::translate("DialogOutlet", "\353\260\260\354\266\234", nullptr));
        BTN_ENABLE_MODULE_2->setText(QApplication::translate("DialogOutlet", "\354\202\254\354\232\251 \354\244\221", nullptr));
        BTN_OUTLET_DISPENSE_3->setText(QApplication::translate("DialogOutlet", "\353\260\260\354\266\234", nullptr));
        BTN_ENABLE_MODULE_3->setText(QApplication::translate("DialogOutlet", "\354\202\254\354\232\251 \354\244\221", nullptr));
        LE_OUTLET_DOOR_LOCK_3->setText(QApplication::translate("DialogOutlet", "\354\236\240\352\271\200", nullptr));
        LE_OUTLET_DOOR_OPEN_3->setText(QApplication::translate("DialogOutlet", "\354\227\264\353\246\274", nullptr));
        LE_OUTLET_CUP_DETECT_3->setText(QApplication::translate("DialogOutlet", "\354\273\265\352\260\220\354\247\200", nullptr));
        label_23->setText(QApplication::translate("DialogOutlet", "#3", nullptr));
        LE_OUTLET_DOOR_LOCK_4->setText(QApplication::translate("DialogOutlet", "\354\236\240\352\271\200", nullptr));
        LE_OUTLET_CUP_DETECT_4->setText(QApplication::translate("DialogOutlet", "\354\273\265\352\260\220\354\247\200", nullptr));
        BTN_OUTLET_DISPENSE_4->setText(QApplication::translate("DialogOutlet", "\353\260\260\354\266\234", nullptr));
        LE_OUTLET_DOOR_OPEN_4->setText(QApplication::translate("DialogOutlet", "\354\227\264\353\246\274", nullptr));
        label_24->setText(QApplication::translate("DialogOutlet", "#4", nullptr));
        BTN_ENABLE_MODULE_4->setText(QApplication::translate("DialogOutlet", "\354\202\254\354\232\251 \354\244\221", nullptr));
        LE_OUTLET_CUP_DETECT_5->setText(QApplication::translate("DialogOutlet", "\354\273\265\352\260\220\354\247\200", nullptr));
        BTN_OUTLET_DISPENSE_5->setText(QApplication::translate("DialogOutlet", "\353\260\260\354\266\234", nullptr));
        LE_OUTLET_DOOR_OPEN_5->setText(QApplication::translate("DialogOutlet", "\354\227\264\353\246\274", nullptr));
        label_25->setText(QApplication::translate("DialogOutlet", "#5", nullptr));
        LE_OUTLET_DOOR_LOCK_5->setText(QApplication::translate("DialogOutlet", "\354\236\240\352\271\200", nullptr));
        BTN_ENABLE_MODULE_5->setText(QApplication::translate("DialogOutlet", "\354\202\254\354\232\251 \354\244\221", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DialogOutlet: public Ui_DialogOutlet {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOGOUTLET_H
