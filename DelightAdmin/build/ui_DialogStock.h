/********************************************************************************
** Form generated from reading UI file 'DialogStock.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOGSTOCK_H
#define UI_DIALOGSTOCK_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_DialogStock
{
public:
    QGroupBox *GB_STOCK;
    QPushButton *BTN_CUP_HALF_4;
    QProgressBar *PB_CUP_1;
    QPushButton *BTN_CUP_FULL_1;
    QLabel *LB_CUP_3;
    QProgressBar *PB_CUP_2;
    QPushButton *BTN_CUP_FULL_3;
    QPushButton *BTN_CUP_FULL_4;
    QLabel *LB_CUP_4;
    QPushButton *BTN_CUP_FULL_2;
    QPushButton *BTN_CUP_HALF_1;
    QLabel *LB_CUP_1;
    QPushButton *BTN_CUP_HALF_3;
    QLabel *LB_CUP_2;
    QPushButton *BTN_CUP_HALF_2;
    QProgressBar *PB_CUP_3;
    QProgressBar *PB_CUP_4;
    QPushButton *BTN_SAUCE_REPLACE_8;
    QLabel *LB_SAUCE_5;
    QPushButton *BTN_SAUCE_REPLACE_2;
    QPushButton *BTN_SAUCE_REPLACE_5;
    QLabel *LB_SAUCE_4;
    QProgressBar *PB_SAUCE_8;
    QProgressBar *PB_SAUCE_2;
    QLabel *LB_SAUCE_2;
    QPushButton *BTN_SAUCE_REPLACE_3;
    QLabel *LB_SAUCE_6;
    QLabel *LB_SAUCE_8;
    QProgressBar *PB_SAUCE_3;
    QPushButton *BTN_SAUCE_REPLACE_1;
    QLabel *LB_SAUCE_7;
    QLabel *LB_SAUCE_1;
    QPushButton *BTN_SAUCE_REPLACE_4;
    QProgressBar *PB_SAUCE_1;
    QProgressBar *PB_SAUCE_4;
    QProgressBar *PB_SAUCE_6;
    QPushButton *BTN_SAUCE_REPLACE_7;
    QLabel *LB_SAUCE_3;
    QProgressBar *PB_SAUCE_7;
    QProgressBar *PB_SAUCE_5;
    QPushButton *BTN_SAUCE_REPLACE_6;
    QPushButton *BTN_DB_RELOAD;
    QComboBox *CB_STOCK_NAME;
    QLineEdit *LE_MANUAL_STOCK_AMOUNT;
    QPushButton *BTN_SET_STOCK_MANUAL;
    QProgressBar *PB_MILK;
    QLabel *LB_MILK;
    QProgressBar *PB_ICE_1;
    QLabel *LB_ICE_1;
    QProgressBar *PB_ICE_2;
    QLabel *LB_ICE_2;
    QProgressBar *PB_HOT_1;
    QLabel *LB_HOT_1;
    QProgressBar *PB_HOT_2;
    QLabel *LB_HOT_2;
    QLabel *LB_COFFEE;
    QProgressBar *PB_COFFEE;
    QPushButton *BTN_ENABLE_MILK;
    QPushButton *BTN_ENABLE_ICE_1;
    QPushButton *BTN_ENABLE_ICE_2;
    QPushButton *BTN_ENABLE_HOT_1;
    QPushButton *BTN_ENABLE_HOT_2;
    QPushButton *BTN_ENABLE_COFFEE;
    QPushButton *BTN_ENABLE_SODA_2;
    QLabel *LB_SODA_1;
    QProgressBar *PB_SODA_1;
    QPushButton *BTN_ENABLE_SODA_1;
    QLabel *LB_SODA_2;
    QProgressBar *PB_SODA_2;

    void setupUi(QDialog *DialogStock)
    {
        if (DialogStock->objectName().isEmpty())
            DialogStock->setObjectName(QString::fromUtf8("DialogStock"));
        DialogStock->resize(601, 931);
        GB_STOCK = new QGroupBox(DialogStock);
        GB_STOCK->setObjectName(QString::fromUtf8("GB_STOCK"));
        GB_STOCK->setGeometry(QRect(0, 0, 601, 971));
        QFont font;
        font.setFamily(QString::fromUtf8("\355\225\250\354\264\210\353\241\254\353\217\213\354\233\200"));
        font.setPointSize(20);
        font.setBold(false);
        font.setItalic(false);
        font.setWeight(50);
        GB_STOCK->setFont(font);
        GB_STOCK->setStyleSheet(QString::fromUtf8("QGroupBox  {\n"
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
"	font: 10pt \"\355\225\250\354\264\210\353\241\254\353\217\213\354\233\200\";\n"
"}\n"
"QComboBox{\n"
"	font: 10pt \"\355\225\250\354\264\210\353\241\254\353\217\213\354\233\200\";\n"
"	background-color: #ffffff\n"
"}\n"
"QPushButton{\n"
"	font: 10pt \"\355\225\250\354\264\210\353\241\254\353\217\213\354\233\200\";\n"
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
        BTN_CUP_HALF_4 = new QPushButton(GB_STOCK);
        BTN_CUP_HALF_4->setObjectName(QString::fromUtf8("BTN_CUP_HALF_4"));
        BTN_CUP_HALF_4->setGeometry(QRect(222, 170, 81, 41));
        PB_CUP_1 = new QProgressBar(GB_STOCK);
        PB_CUP_1->setObjectName(QString::fromUtf8("PB_CUP_1"));
        PB_CUP_1->setGeometry(QRect(88, 60, 111, 31));
        PB_CUP_1->setValue(24);
        BTN_CUP_FULL_1 = new QPushButton(GB_STOCK);
        BTN_CUP_FULL_1->setObjectName(QString::fromUtf8("BTN_CUP_FULL_1"));
        BTN_CUP_FULL_1->setGeometry(QRect(120, 90, 81, 41));
        LB_CUP_3 = new QLabel(GB_STOCK);
        LB_CUP_3->setObjectName(QString::fromUtf8("LB_CUP_3"));
        LB_CUP_3->setGeometry(QRect(210, 60, 71, 31));
        PB_CUP_2 = new QProgressBar(GB_STOCK);
        PB_CUP_2->setObjectName(QString::fromUtf8("PB_CUP_2"));
        PB_CUP_2->setGeometry(QRect(90, 140, 111, 31));
        PB_CUP_2->setValue(24);
        BTN_CUP_FULL_3 = new QPushButton(GB_STOCK);
        BTN_CUP_FULL_3->setObjectName(QString::fromUtf8("BTN_CUP_FULL_3"));
        BTN_CUP_FULL_3->setGeometry(QRect(320, 90, 81, 41));
        BTN_CUP_FULL_4 = new QPushButton(GB_STOCK);
        BTN_CUP_FULL_4->setObjectName(QString::fromUtf8("BTN_CUP_FULL_4"));
        BTN_CUP_FULL_4->setGeometry(QRect(320, 170, 81, 41));
        LB_CUP_4 = new QLabel(GB_STOCK);
        LB_CUP_4->setObjectName(QString::fromUtf8("LB_CUP_4"));
        LB_CUP_4->setGeometry(QRect(210, 140, 71, 31));
        BTN_CUP_FULL_2 = new QPushButton(GB_STOCK);
        BTN_CUP_FULL_2->setObjectName(QString::fromUtf8("BTN_CUP_FULL_2"));
        BTN_CUP_FULL_2->setGeometry(QRect(120, 170, 81, 41));
        BTN_CUP_HALF_1 = new QPushButton(GB_STOCK);
        BTN_CUP_HALF_1->setObjectName(QString::fromUtf8("BTN_CUP_HALF_1"));
        BTN_CUP_HALF_1->setGeometry(QRect(10, 90, 81, 41));
        LB_CUP_1 = new QLabel(GB_STOCK);
        LB_CUP_1->setObjectName(QString::fromUtf8("LB_CUP_1"));
        LB_CUP_1->setGeometry(QRect(10, 60, 67, 31));
        BTN_CUP_HALF_3 = new QPushButton(GB_STOCK);
        BTN_CUP_HALF_3->setObjectName(QString::fromUtf8("BTN_CUP_HALF_3"));
        BTN_CUP_HALF_3->setGeometry(QRect(222, 90, 81, 41));
        LB_CUP_2 = new QLabel(GB_STOCK);
        LB_CUP_2->setObjectName(QString::fromUtf8("LB_CUP_2"));
        LB_CUP_2->setGeometry(QRect(10, 140, 71, 31));
        BTN_CUP_HALF_2 = new QPushButton(GB_STOCK);
        BTN_CUP_HALF_2->setObjectName(QString::fromUtf8("BTN_CUP_HALF_2"));
        BTN_CUP_HALF_2->setGeometry(QRect(10, 170, 81, 41));
        PB_CUP_3 = new QProgressBar(GB_STOCK);
        PB_CUP_3->setObjectName(QString::fromUtf8("PB_CUP_3"));
        PB_CUP_3->setGeometry(QRect(290, 60, 111, 31));
        PB_CUP_3->setValue(24);
        PB_CUP_4 = new QProgressBar(GB_STOCK);
        PB_CUP_4->setObjectName(QString::fromUtf8("PB_CUP_4"));
        PB_CUP_4->setGeometry(QRect(290, 140, 111, 31));
        PB_CUP_4->setValue(24);
        BTN_SAUCE_REPLACE_8 = new QPushButton(GB_STOCK);
        BTN_SAUCE_REPLACE_8->setObjectName(QString::fromUtf8("BTN_SAUCE_REPLACE_8"));
        BTN_SAUCE_REPLACE_8->setGeometry(QRect(310, 440, 71, 31));
        LB_SAUCE_5 = new QLabel(GB_STOCK);
        LB_SAUCE_5->setObjectName(QString::fromUtf8("LB_SAUCE_5"));
        LB_SAUCE_5->setGeometry(QRect(10, 370, 91, 31));
        QFont font1;
        font1.setFamily(QString::fromUtf8("\355\225\250\354\264\210\353\241\254\353\217\213\354\233\200"));
        font1.setPointSize(10);
        font1.setBold(false);
        font1.setItalic(false);
        font1.setWeight(50);
        LB_SAUCE_5->setFont(font1);
        BTN_SAUCE_REPLACE_2 = new QPushButton(GB_STOCK);
        BTN_SAUCE_REPLACE_2->setObjectName(QString::fromUtf8("BTN_SAUCE_REPLACE_2"));
        BTN_SAUCE_REPLACE_2->setGeometry(QRect(320, 230, 71, 31));
        BTN_SAUCE_REPLACE_5 = new QPushButton(GB_STOCK);
        BTN_SAUCE_REPLACE_5->setObjectName(QString::fromUtf8("BTN_SAUCE_REPLACE_5"));
        BTN_SAUCE_REPLACE_5->setGeometry(QRect(110, 370, 71, 31));
        LB_SAUCE_4 = new QLabel(GB_STOCK);
        LB_SAUCE_4->setObjectName(QString::fromUtf8("LB_SAUCE_4"));
        LB_SAUCE_4->setGeometry(QRect(220, 300, 91, 31));
        LB_SAUCE_4->setFont(font1);
        PB_SAUCE_8 = new QProgressBar(GB_STOCK);
        PB_SAUCE_8->setObjectName(QString::fromUtf8("PB_SAUCE_8"));
        PB_SAUCE_8->setGeometry(QRect(210, 470, 171, 31));
        PB_SAUCE_8->setValue(24);
        PB_SAUCE_2 = new QProgressBar(GB_STOCK);
        PB_SAUCE_2->setObjectName(QString::fromUtf8("PB_SAUCE_2"));
        PB_SAUCE_2->setGeometry(QRect(220, 260, 171, 31));
        PB_SAUCE_2->setValue(24);
        LB_SAUCE_2 = new QLabel(GB_STOCK);
        LB_SAUCE_2->setObjectName(QString::fromUtf8("LB_SAUCE_2"));
        LB_SAUCE_2->setGeometry(QRect(220, 230, 91, 31));
        LB_SAUCE_2->setFont(font1);
        BTN_SAUCE_REPLACE_3 = new QPushButton(GB_STOCK);
        BTN_SAUCE_REPLACE_3->setObjectName(QString::fromUtf8("BTN_SAUCE_REPLACE_3"));
        BTN_SAUCE_REPLACE_3->setGeometry(QRect(110, 300, 71, 31));
        LB_SAUCE_6 = new QLabel(GB_STOCK);
        LB_SAUCE_6->setObjectName(QString::fromUtf8("LB_SAUCE_6"));
        LB_SAUCE_6->setGeometry(QRect(220, 370, 91, 31));
        LB_SAUCE_6->setFont(font1);
        LB_SAUCE_8 = new QLabel(GB_STOCK);
        LB_SAUCE_8->setObjectName(QString::fromUtf8("LB_SAUCE_8"));
        LB_SAUCE_8->setGeometry(QRect(210, 440, 91, 31));
        LB_SAUCE_8->setFont(font1);
        PB_SAUCE_3 = new QProgressBar(GB_STOCK);
        PB_SAUCE_3->setObjectName(QString::fromUtf8("PB_SAUCE_3"));
        PB_SAUCE_3->setGeometry(QRect(10, 330, 171, 31));
        PB_SAUCE_3->setValue(24);
        BTN_SAUCE_REPLACE_1 = new QPushButton(GB_STOCK);
        BTN_SAUCE_REPLACE_1->setObjectName(QString::fromUtf8("BTN_SAUCE_REPLACE_1"));
        BTN_SAUCE_REPLACE_1->setGeometry(QRect(110, 230, 71, 31));
        LB_SAUCE_7 = new QLabel(GB_STOCK);
        LB_SAUCE_7->setObjectName(QString::fromUtf8("LB_SAUCE_7"));
        LB_SAUCE_7->setGeometry(QRect(10, 440, 91, 31));
        LB_SAUCE_7->setFont(font1);
        LB_SAUCE_1 = new QLabel(GB_STOCK);
        LB_SAUCE_1->setObjectName(QString::fromUtf8("LB_SAUCE_1"));
        LB_SAUCE_1->setGeometry(QRect(10, 230, 91, 31));
        LB_SAUCE_1->setFont(font1);
        BTN_SAUCE_REPLACE_4 = new QPushButton(GB_STOCK);
        BTN_SAUCE_REPLACE_4->setObjectName(QString::fromUtf8("BTN_SAUCE_REPLACE_4"));
        BTN_SAUCE_REPLACE_4->setGeometry(QRect(320, 300, 71, 31));
        PB_SAUCE_1 = new QProgressBar(GB_STOCK);
        PB_SAUCE_1->setObjectName(QString::fromUtf8("PB_SAUCE_1"));
        PB_SAUCE_1->setGeometry(QRect(10, 260, 171, 31));
        PB_SAUCE_1->setValue(24);
        PB_SAUCE_4 = new QProgressBar(GB_STOCK);
        PB_SAUCE_4->setObjectName(QString::fromUtf8("PB_SAUCE_4"));
        PB_SAUCE_4->setGeometry(QRect(220, 330, 171, 31));
        PB_SAUCE_4->setValue(24);
        PB_SAUCE_6 = new QProgressBar(GB_STOCK);
        PB_SAUCE_6->setObjectName(QString::fromUtf8("PB_SAUCE_6"));
        PB_SAUCE_6->setGeometry(QRect(220, 400, 171, 31));
        PB_SAUCE_6->setValue(24);
        BTN_SAUCE_REPLACE_7 = new QPushButton(GB_STOCK);
        BTN_SAUCE_REPLACE_7->setObjectName(QString::fromUtf8("BTN_SAUCE_REPLACE_7"));
        BTN_SAUCE_REPLACE_7->setGeometry(QRect(110, 440, 71, 31));
        LB_SAUCE_3 = new QLabel(GB_STOCK);
        LB_SAUCE_3->setObjectName(QString::fromUtf8("LB_SAUCE_3"));
        LB_SAUCE_3->setGeometry(QRect(10, 300, 91, 31));
        LB_SAUCE_3->setFont(font1);
        PB_SAUCE_7 = new QProgressBar(GB_STOCK);
        PB_SAUCE_7->setObjectName(QString::fromUtf8("PB_SAUCE_7"));
        PB_SAUCE_7->setGeometry(QRect(10, 470, 171, 31));
        PB_SAUCE_7->setValue(24);
        PB_SAUCE_5 = new QProgressBar(GB_STOCK);
        PB_SAUCE_5->setObjectName(QString::fromUtf8("PB_SAUCE_5"));
        PB_SAUCE_5->setGeometry(QRect(10, 400, 171, 31));
        PB_SAUCE_5->setValue(24);
        BTN_SAUCE_REPLACE_6 = new QPushButton(GB_STOCK);
        BTN_SAUCE_REPLACE_6->setObjectName(QString::fromUtf8("BTN_SAUCE_REPLACE_6"));
        BTN_SAUCE_REPLACE_6->setGeometry(QRect(320, 370, 71, 31));
        BTN_DB_RELOAD = new QPushButton(GB_STOCK);
        BTN_DB_RELOAD->setObjectName(QString::fromUtf8("BTN_DB_RELOAD"));
        BTN_DB_RELOAD->setGeometry(QRect(20, 880, 121, 41));
        CB_STOCK_NAME = new QComboBox(GB_STOCK);
        CB_STOCK_NAME->setObjectName(QString::fromUtf8("CB_STOCK_NAME"));
        CB_STOCK_NAME->setGeometry(QRect(20, 830, 191, 41));
        LE_MANUAL_STOCK_AMOUNT = new QLineEdit(GB_STOCK);
        LE_MANUAL_STOCK_AMOUNT->setObjectName(QString::fromUtf8("LE_MANUAL_STOCK_AMOUNT"));
        LE_MANUAL_STOCK_AMOUNT->setGeometry(QRect(250, 830, 121, 41));
        LE_MANUAL_STOCK_AMOUNT->setFont(font1);
        LE_MANUAL_STOCK_AMOUNT->setReadOnly(false);
        BTN_SET_STOCK_MANUAL = new QPushButton(GB_STOCK);
        BTN_SET_STOCK_MANUAL->setObjectName(QString::fromUtf8("BTN_SET_STOCK_MANUAL"));
        BTN_SET_STOCK_MANUAL->setGeometry(QRect(250, 880, 121, 41));
        PB_MILK = new QProgressBar(GB_STOCK);
        PB_MILK->setObjectName(QString::fromUtf8("PB_MILK"));
        PB_MILK->setGeometry(QRect(90, 510, 181, 31));
        PB_MILK->setValue(24);
        LB_MILK = new QLabel(GB_STOCK);
        LB_MILK->setObjectName(QString::fromUtf8("LB_MILK"));
        LB_MILK->setGeometry(QRect(10, 510, 67, 31));
        PB_ICE_1 = new QProgressBar(GB_STOCK);
        PB_ICE_1->setObjectName(QString::fromUtf8("PB_ICE_1"));
        PB_ICE_1->setGeometry(QRect(90, 550, 181, 31));
        PB_ICE_1->setValue(24);
        LB_ICE_1 = new QLabel(GB_STOCK);
        LB_ICE_1->setObjectName(QString::fromUtf8("LB_ICE_1"));
        LB_ICE_1->setGeometry(QRect(10, 550, 67, 31));
        PB_ICE_2 = new QProgressBar(GB_STOCK);
        PB_ICE_2->setObjectName(QString::fromUtf8("PB_ICE_2"));
        PB_ICE_2->setGeometry(QRect(90, 590, 181, 31));
        PB_ICE_2->setValue(24);
        LB_ICE_2 = new QLabel(GB_STOCK);
        LB_ICE_2->setObjectName(QString::fromUtf8("LB_ICE_2"));
        LB_ICE_2->setGeometry(QRect(10, 590, 67, 31));
        PB_HOT_1 = new QProgressBar(GB_STOCK);
        PB_HOT_1->setObjectName(QString::fromUtf8("PB_HOT_1"));
        PB_HOT_1->setGeometry(QRect(90, 630, 181, 31));
        PB_HOT_1->setValue(24);
        LB_HOT_1 = new QLabel(GB_STOCK);
        LB_HOT_1->setObjectName(QString::fromUtf8("LB_HOT_1"));
        LB_HOT_1->setGeometry(QRect(10, 630, 67, 31));
        PB_HOT_2 = new QProgressBar(GB_STOCK);
        PB_HOT_2->setObjectName(QString::fromUtf8("PB_HOT_2"));
        PB_HOT_2->setGeometry(QRect(90, 670, 181, 31));
        PB_HOT_2->setValue(24);
        LB_HOT_2 = new QLabel(GB_STOCK);
        LB_HOT_2->setObjectName(QString::fromUtf8("LB_HOT_2"));
        LB_HOT_2->setGeometry(QRect(10, 670, 67, 31));
        LB_COFFEE = new QLabel(GB_STOCK);
        LB_COFFEE->setObjectName(QString::fromUtf8("LB_COFFEE"));
        LB_COFFEE->setGeometry(QRect(10, 790, 67, 31));
        PB_COFFEE = new QProgressBar(GB_STOCK);
        PB_COFFEE->setObjectName(QString::fromUtf8("PB_COFFEE"));
        PB_COFFEE->setGeometry(QRect(90, 790, 181, 31));
        PB_COFFEE->setValue(24);
        BTN_ENABLE_MILK = new QPushButton(GB_STOCK);
        BTN_ENABLE_MILK->setObjectName(QString::fromUtf8("BTN_ENABLE_MILK"));
        BTN_ENABLE_MILK->setGeometry(QRect(280, 510, 91, 28));
        BTN_ENABLE_MILK->setFont(font1);
        BTN_ENABLE_ICE_1 = new QPushButton(GB_STOCK);
        BTN_ENABLE_ICE_1->setObjectName(QString::fromUtf8("BTN_ENABLE_ICE_1"));
        BTN_ENABLE_ICE_1->setGeometry(QRect(280, 550, 91, 28));
        BTN_ENABLE_ICE_1->setFont(font1);
        BTN_ENABLE_ICE_2 = new QPushButton(GB_STOCK);
        BTN_ENABLE_ICE_2->setObjectName(QString::fromUtf8("BTN_ENABLE_ICE_2"));
        BTN_ENABLE_ICE_2->setGeometry(QRect(280, 590, 91, 28));
        BTN_ENABLE_ICE_2->setFont(font1);
        BTN_ENABLE_HOT_1 = new QPushButton(GB_STOCK);
        BTN_ENABLE_HOT_1->setObjectName(QString::fromUtf8("BTN_ENABLE_HOT_1"));
        BTN_ENABLE_HOT_1->setGeometry(QRect(280, 630, 91, 28));
        BTN_ENABLE_HOT_1->setFont(font1);
        BTN_ENABLE_HOT_2 = new QPushButton(GB_STOCK);
        BTN_ENABLE_HOT_2->setObjectName(QString::fromUtf8("BTN_ENABLE_HOT_2"));
        BTN_ENABLE_HOT_2->setGeometry(QRect(280, 670, 91, 28));
        BTN_ENABLE_HOT_2->setFont(font1);
        BTN_ENABLE_COFFEE = new QPushButton(GB_STOCK);
        BTN_ENABLE_COFFEE->setObjectName(QString::fromUtf8("BTN_ENABLE_COFFEE"));
        BTN_ENABLE_COFFEE->setGeometry(QRect(280, 790, 91, 28));
        BTN_ENABLE_COFFEE->setFont(font1);
        BTN_ENABLE_SODA_2 = new QPushButton(GB_STOCK);
        BTN_ENABLE_SODA_2->setObjectName(QString::fromUtf8("BTN_ENABLE_SODA_2"));
        BTN_ENABLE_SODA_2->setGeometry(QRect(280, 750, 91, 28));
        BTN_ENABLE_SODA_2->setFont(font1);
        LB_SODA_1 = new QLabel(GB_STOCK);
        LB_SODA_1->setObjectName(QString::fromUtf8("LB_SODA_1"));
        LB_SODA_1->setGeometry(QRect(10, 710, 67, 31));
        PB_SODA_1 = new QProgressBar(GB_STOCK);
        PB_SODA_1->setObjectName(QString::fromUtf8("PB_SODA_1"));
        PB_SODA_1->setGeometry(QRect(90, 710, 181, 31));
        PB_SODA_1->setValue(24);
        BTN_ENABLE_SODA_1 = new QPushButton(GB_STOCK);
        BTN_ENABLE_SODA_1->setObjectName(QString::fromUtf8("BTN_ENABLE_SODA_1"));
        BTN_ENABLE_SODA_1->setGeometry(QRect(280, 710, 91, 28));
        BTN_ENABLE_SODA_1->setFont(font1);
        LB_SODA_2 = new QLabel(GB_STOCK);
        LB_SODA_2->setObjectName(QString::fromUtf8("LB_SODA_2"));
        LB_SODA_2->setGeometry(QRect(10, 750, 67, 31));
        PB_SODA_2 = new QProgressBar(GB_STOCK);
        PB_SODA_2->setObjectName(QString::fromUtf8("PB_SODA_2"));
        PB_SODA_2->setGeometry(QRect(90, 750, 181, 31));
        PB_SODA_2->setValue(24);

        retranslateUi(DialogStock);

        QMetaObject::connectSlotsByName(DialogStock);
    } // setupUi

    void retranslateUi(QDialog *DialogStock)
    {
        DialogStock->setWindowTitle(QApplication::translate("DialogStock", "Dialog", nullptr));
        GB_STOCK->setTitle(QApplication::translate("DialogStock", "\354\236\254\352\263\240", nullptr));
        BTN_CUP_HALF_4->setText(QApplication::translate("DialogStock", "\354\240\210\353\260\230", nullptr));
        PB_CUP_1->setFormat(QApplication::translate("DialogStock", "%p%", nullptr));
        BTN_CUP_FULL_1->setText(QApplication::translate("DialogStock", "FULL", nullptr));
        LB_CUP_3->setText(QApplication::translate("DialogStock", "TextLabel", nullptr));
        PB_CUP_2->setFormat(QApplication::translate("DialogStock", "%p%", nullptr));
        BTN_CUP_FULL_3->setText(QApplication::translate("DialogStock", "FULL", nullptr));
        BTN_CUP_FULL_4->setText(QApplication::translate("DialogStock", "FULL", nullptr));
        LB_CUP_4->setText(QApplication::translate("DialogStock", "TextLabel", nullptr));
        BTN_CUP_FULL_2->setText(QApplication::translate("DialogStock", "FULL", nullptr));
        BTN_CUP_HALF_1->setText(QApplication::translate("DialogStock", "\354\240\210\353\260\230", nullptr));
        LB_CUP_1->setText(QApplication::translate("DialogStock", "TextLabel", nullptr));
        BTN_CUP_HALF_3->setText(QApplication::translate("DialogStock", "\354\240\210\353\260\230", nullptr));
        LB_CUP_2->setText(QApplication::translate("DialogStock", "TextLabel", nullptr));
        BTN_CUP_HALF_2->setText(QApplication::translate("DialogStock", "\354\240\210\353\260\230", nullptr));
        PB_CUP_3->setFormat(QApplication::translate("DialogStock", "%p%", nullptr));
        PB_CUP_4->setFormat(QApplication::translate("DialogStock", "%p%", nullptr));
        BTN_SAUCE_REPLACE_8->setText(QApplication::translate("DialogStock", "\352\265\220\354\262\264", nullptr));
        LB_SAUCE_5->setText(QApplication::translate("DialogStock", "TextLabel", nullptr));
        BTN_SAUCE_REPLACE_2->setText(QApplication::translate("DialogStock", "\352\265\220\354\262\264", nullptr));
        BTN_SAUCE_REPLACE_5->setText(QApplication::translate("DialogStock", "\352\265\220\354\262\264", nullptr));
        LB_SAUCE_4->setText(QApplication::translate("DialogStock", "TextLabel", nullptr));
        PB_SAUCE_8->setFormat(QApplication::translate("DialogStock", "%p%", nullptr));
        PB_SAUCE_2->setFormat(QApplication::translate("DialogStock", "%p%", nullptr));
        LB_SAUCE_2->setText(QApplication::translate("DialogStock", "TextLabel", nullptr));
        BTN_SAUCE_REPLACE_3->setText(QApplication::translate("DialogStock", "\352\265\220\354\262\264", nullptr));
        LB_SAUCE_6->setText(QApplication::translate("DialogStock", "TextLabel", nullptr));
        LB_SAUCE_8->setText(QApplication::translate("DialogStock", "TextLabel", nullptr));
        PB_SAUCE_3->setFormat(QApplication::translate("DialogStock", "%p%", nullptr));
        BTN_SAUCE_REPLACE_1->setText(QApplication::translate("DialogStock", "\352\265\220\354\262\264", nullptr));
        LB_SAUCE_7->setText(QApplication::translate("DialogStock", "TextLabel", nullptr));
        LB_SAUCE_1->setText(QApplication::translate("DialogStock", "TextLabel", nullptr));
        BTN_SAUCE_REPLACE_4->setText(QApplication::translate("DialogStock", "\352\265\220\354\262\264", nullptr));
        PB_SAUCE_1->setFormat(QApplication::translate("DialogStock", "%p%", nullptr));
        PB_SAUCE_4->setFormat(QApplication::translate("DialogStock", "%p%", nullptr));
        PB_SAUCE_6->setFormat(QApplication::translate("DialogStock", "%p%", nullptr));
        BTN_SAUCE_REPLACE_7->setText(QApplication::translate("DialogStock", "\352\265\220\354\262\264", nullptr));
        LB_SAUCE_3->setText(QApplication::translate("DialogStock", "TextLabel", nullptr));
        PB_SAUCE_7->setFormat(QApplication::translate("DialogStock", "%p%", nullptr));
        PB_SAUCE_5->setFormat(QApplication::translate("DialogStock", "%p%", nullptr));
        BTN_SAUCE_REPLACE_6->setText(QApplication::translate("DialogStock", "\352\265\220\354\262\264", nullptr));
        BTN_DB_RELOAD->setText(QApplication::translate("DialogStock", "DB reload", nullptr));
        BTN_SET_STOCK_MANUAL->setText(QApplication::translate("DialogStock", "\354\210\230\353\217\231 \354\236\254\352\263\240 \354\247\200\354\240\225", nullptr));
        PB_MILK->setFormat(QApplication::translate("DialogStock", "%p%", nullptr));
        LB_MILK->setText(QApplication::translate("DialogStock", "TextLabel", nullptr));
        PB_ICE_1->setFormat(QApplication::translate("DialogStock", "%p%", nullptr));
        LB_ICE_1->setText(QApplication::translate("DialogStock", "TextLabel", nullptr));
        PB_ICE_2->setFormat(QApplication::translate("DialogStock", "%p%", nullptr));
        LB_ICE_2->setText(QApplication::translate("DialogStock", "TextLabel", nullptr));
        PB_HOT_1->setFormat(QApplication::translate("DialogStock", "%p%", nullptr));
        LB_HOT_1->setText(QApplication::translate("DialogStock", "TextLabel", nullptr));
        PB_HOT_2->setFormat(QApplication::translate("DialogStock", "%p%", nullptr));
        LB_HOT_2->setText(QApplication::translate("DialogStock", "TextLabel", nullptr));
        LB_COFFEE->setText(QApplication::translate("DialogStock", "TextLabel", nullptr));
        PB_COFFEE->setFormat(QApplication::translate("DialogStock", "%p%", nullptr));
        BTN_ENABLE_MILK->setText(QApplication::translate("DialogStock", "\354\202\254\354\232\251 \354\244\221", nullptr));
        BTN_ENABLE_ICE_1->setText(QApplication::translate("DialogStock", "\354\202\254\354\232\251 \354\244\221", nullptr));
        BTN_ENABLE_ICE_2->setText(QApplication::translate("DialogStock", "\354\202\254\354\232\251 \354\244\221", nullptr));
        BTN_ENABLE_HOT_1->setText(QApplication::translate("DialogStock", "\354\202\254\354\232\251 \354\244\221", nullptr));
        BTN_ENABLE_HOT_2->setText(QApplication::translate("DialogStock", "\354\202\254\354\232\251 \354\244\221", nullptr));
        BTN_ENABLE_COFFEE->setText(QApplication::translate("DialogStock", "\354\202\254\354\232\251 \354\244\221", nullptr));
        BTN_ENABLE_SODA_2->setText(QApplication::translate("DialogStock", "\354\202\254\354\232\251 \354\244\221", nullptr));
        LB_SODA_1->setText(QApplication::translate("DialogStock", "TextLabel", nullptr));
        PB_SODA_1->setFormat(QApplication::translate("DialogStock", "%p%", nullptr));
        BTN_ENABLE_SODA_1->setText(QApplication::translate("DialogStock", "\354\202\254\354\232\251 \354\244\221", nullptr));
        LB_SODA_2->setText(QApplication::translate("DialogStock", "TextLabel", nullptr));
        PB_SODA_2->setFormat(QApplication::translate("DialogStock", "%p%", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DialogStock: public Ui_DialogStock {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOGSTOCK_H
