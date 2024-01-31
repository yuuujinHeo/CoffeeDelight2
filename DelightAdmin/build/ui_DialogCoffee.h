/********************************************************************************
** Form generated from reading UI file 'DialogCoffee.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOGCOFFEE_H
#define UI_DIALOGCOFFEE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_DialogCoffee
{
public:
    QGroupBox *GB_COFFEE;
    QLineEdit *LE_COFFEE_CONNECTION;
    QLabel *label_123;
    QPushButton *BTN_REQUEST_BUTTON_LIST;
    QPushButton *BTN_DRINK_OUT;
    QComboBox *CB_LIST;
    QWidget *layoutWidget_2;
    QVBoxLayout *verticalLayout_2;
    QGridLayout *gridLayout;
    QLineEdit *LE_MACHINE_STATUS_MAKING;
    QLineEdit *LE_MACHINE_STATUS_NOT_CONNECTED;
    QLabel *label_126;
    QLabel *label_127;
    QLabel *label_125;
    QLineEdit *LE_MACHINE_STATUS_ERROR_OCCURED;
    QLineEdit *LE_MACHINE_STATUS_PREPAREING;
    QLineEdit *LE_MACHINE_STATUS_ON_READY;
    QLabel *label_128;
    QLabel *label_124;
    QGridLayout *gridLayout_2;
    QLineEdit *LE_MACHINE_STATUS_SYS_CLEANING;
    QLineEdit *LE_MACHINE_STATUS_MILK_CLEANING;
    QLabel *label_129;
    QLabel *label_131;
    QLabel *label_130;
    QLineEdit *LE_MACHINE_STATUS_MILK_REPLACING;
    QWidget *layoutWidget_3;
    QGridLayout *gridLayout_3;
    QLabel *label_111;
    QLineEdit *LE_SYS_CLEAN_TIME_HOUR;
    QLabel *label_114;
    QLineEdit *LE_SYS_CLEAN_TIME_MINUTE;
    QLabel *label_115;
    QLineEdit *LE_SYS_CLEAN_TIME_SECOND;
    QLabel *label_116;
    QLabel *label_112;
    QLineEdit *LE_MILK_CLEAN_TIME_HOUR;
    QLabel *label_118;
    QLineEdit *LE_MILK_CLEAN_TIME_MINUTE;
    QLabel *label_119;
    QLineEdit *LE_MILK_CLEAN_TIME_SECOND;
    QLabel *label_117;
    QLabel *label_113;
    QLineEdit *LE_MILK_REPLACE_TIME_HOUR;
    QLabel *label_121;
    QLineEdit *LE_MILK_REPLACE_TIME_MINUTE;
    QLabel *label_122;
    QLineEdit *LE_MILK_REPLACE_TIME_SECOND;
    QLabel *label_120;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QRadioButton *RB_RINSE_ON;
    QRadioButton *RB_RINSE_OFF;
    QLabel *label_132;
    QButtonGroup *buttonGroup;

    void setupUi(QDialog *DialogCoffee)
    {
        if (DialogCoffee->objectName().isEmpty())
            DialogCoffee->setObjectName(QString::fromUtf8("DialogCoffee"));
        DialogCoffee->resize(601, 931);
        GB_COFFEE = new QGroupBox(DialogCoffee);
        GB_COFFEE->setObjectName(QString::fromUtf8("GB_COFFEE"));
        GB_COFFEE->setGeometry(QRect(0, 0, 601, 971));
        QFont font;
        font.setFamily(QString::fromUtf8("\355\225\250\354\264\210\353\241\254\353\217\213\354\233\200"));
        font.setPointSize(20);
        font.setBold(false);
        font.setItalic(false);
        font.setWeight(50);
        GB_COFFEE->setFont(font);
        GB_COFFEE->setStyleSheet(QString::fromUtf8("QGroupBox  {\n"
"    margin-top: 10px;\n"
"	font: 20pt \"\355\225\250\354\264\210\353\241\254\353\217\213\354\233\200\";\n"
"}\n"
"\n"
"QGroupBox::title  {\n"
"    subcontrol-origin: margin;\n"
"    subcontrol-position: top center;\n"
"    padding: 10px 8000px 10px 8000px;\n"
"    background-color: #FF7401;\n"
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
"	font: 12pt \"\355\225\250\354\264\210\353\241\254\353\217\213\354\233\200\";\n"
"	background-color: #ffffff\n"
"}\n"
"QLineEdit{\n"
"	font: 10pt \"\355\225\250\354\264\210\353\241\254\353\217\213\354\233\200\";\n"
"	background-color: #ffffff\n"
"}\n"
"\n"
"QGroupBox  {\n"
"    margin-top: 10px;\n"
"	font: 20pt \"\355\225\250\354\264\210\353\241\254\353\217\213\354\233\200\";\n"
"}\n"
"\n"
"QGroupBox::title  {\n"
" "
                        "   subcontrol-origin: margin;\n"
"    subcontrol-position: top center;\n"
"    padding: 10px 8000px 10px 8000px;\n"
"    background-color: #595959;\n"
"    color: rgb(255, 255, 255);\n"
"}\n"
"QLabel {\n"
"	font: 15pt \"\355\225\250\354\264\210\353\241\254\353\217\213\354\233\200\";\n"
"}\n"
"QComboBox{\n"
"	font: 12pt \"\355\225\250\354\264\210\353\241\254\353\217\213\354\233\200\";\n"
"	background-color: #ffffff\n"
"}\n"
"QPushButton{\n"
"	font: 12pt \"\355\225\250\354\264\210\353\241\254\353\217\213\354\233\200\";\n"
"	background-color: #ffffff\n"
"}\n"
"QLineEdit{\n"
"	font: 12pt \"\355\225\250\354\264\210\353\241\254\353\217\213\354\233\200\";\n"
"	background-color: #ffffff\n"
"}\n"
"\n"
"\n"
"\n"
"\n"
"\n"
""));
        LE_COFFEE_CONNECTION = new QLineEdit(GB_COFFEE);
        LE_COFFEE_CONNECTION->setObjectName(QString::fromUtf8("LE_COFFEE_CONNECTION"));
        LE_COFFEE_CONNECTION->setGeometry(QRect(170, 70, 411, 31));
        QFont font1;
        font1.setFamily(QString::fromUtf8("\355\225\250\354\264\210\353\241\254\353\217\213\354\233\200"));
        font1.setPointSize(12);
        font1.setBold(false);
        font1.setItalic(false);
        font1.setWeight(50);
        LE_COFFEE_CONNECTION->setFont(font1);
        LE_COFFEE_CONNECTION->setReadOnly(true);
        label_123 = new QLabel(GB_COFFEE);
        label_123->setObjectName(QString::fromUtf8("label_123"));
        label_123->setGeometry(QRect(20, 190, 151, 31));
        QFont font2;
        font2.setFamily(QString::fromUtf8("\355\225\250\354\264\210\353\241\254\353\217\213\354\233\200"));
        font2.setPointSize(15);
        font2.setBold(false);
        font2.setItalic(false);
        font2.setWeight(50);
        label_123->setFont(font2);
        label_123->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        BTN_REQUEST_BUTTON_LIST = new QPushButton(GB_COFFEE);
        BTN_REQUEST_BUTTON_LIST->setObjectName(QString::fromUtf8("BTN_REQUEST_BUTTON_LIST"));
        BTN_REQUEST_BUTTON_LIST->setEnabled(false);
        BTN_REQUEST_BUTTON_LIST->setGeometry(QRect(230, 870, 121, 31));
        BTN_DRINK_OUT = new QPushButton(GB_COFFEE);
        BTN_DRINK_OUT->setObjectName(QString::fromUtf8("BTN_DRINK_OUT"));
        BTN_DRINK_OUT->setGeometry(QRect(180, 130, 89, 31));
        BTN_DRINK_OUT->setFont(font1);
        CB_LIST = new QComboBox(GB_COFFEE);
        CB_LIST->setObjectName(QString::fromUtf8("CB_LIST"));
        CB_LIST->setGeometry(QRect(20, 130, 141, 31));
        CB_LIST->setFont(font1);
        layoutWidget_2 = new QWidget(GB_COFFEE);
        layoutWidget_2->setObjectName(QString::fromUtf8("layoutWidget_2"));
        layoutWidget_2->setGeometry(QRect(20, 230, 571, 171));
        verticalLayout_2 = new QVBoxLayout(layoutWidget_2);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        LE_MACHINE_STATUS_MAKING = new QLineEdit(layoutWidget_2);
        LE_MACHINE_STATUS_MAKING->setObjectName(QString::fromUtf8("LE_MACHINE_STATUS_MAKING"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(LE_MACHINE_STATUS_MAKING->sizePolicy().hasHeightForWidth());
        LE_MACHINE_STATUS_MAKING->setSizePolicy(sizePolicy);
        LE_MACHINE_STATUS_MAKING->setMaximumSize(QSize(110, 16777215));
        LE_MACHINE_STATUS_MAKING->setFont(font1);
        LE_MACHINE_STATUS_MAKING->setReadOnly(true);

        gridLayout->addWidget(LE_MACHINE_STATUS_MAKING, 1, 5, 1, 1);

        LE_MACHINE_STATUS_NOT_CONNECTED = new QLineEdit(layoutWidget_2);
        LE_MACHINE_STATUS_NOT_CONNECTED->setObjectName(QString::fromUtf8("LE_MACHINE_STATUS_NOT_CONNECTED"));
        sizePolicy.setHeightForWidth(LE_MACHINE_STATUS_NOT_CONNECTED->sizePolicy().hasHeightForWidth());
        LE_MACHINE_STATUS_NOT_CONNECTED->setSizePolicy(sizePolicy);
        LE_MACHINE_STATUS_NOT_CONNECTED->setMaximumSize(QSize(110, 16777215));
        LE_MACHINE_STATUS_NOT_CONNECTED->setFont(font1);
        LE_MACHINE_STATUS_NOT_CONNECTED->setReadOnly(true);

        gridLayout->addWidget(LE_MACHINE_STATUS_NOT_CONNECTED, 1, 0, 1, 1);

        label_126 = new QLabel(layoutWidget_2);
        label_126->setObjectName(QString::fromUtf8("label_126"));
        label_126->setMaximumSize(QSize(100000, 16777215));
        label_126->setFont(font2);
        label_126->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_126, 0, 4, 1, 1);

        label_127 = new QLabel(layoutWidget_2);
        label_127->setObjectName(QString::fromUtf8("label_127"));
        label_127->setMaximumSize(QSize(100000, 16777215));
        label_127->setFont(font2);
        label_127->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_127, 0, 3, 1, 1);

        label_125 = new QLabel(layoutWidget_2);
        label_125->setObjectName(QString::fromUtf8("label_125"));
        label_125->setMaximumSize(QSize(100000, 16777215));
        label_125->setFont(font2);
        label_125->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_125, 0, 1, 1, 2);

        LE_MACHINE_STATUS_ERROR_OCCURED = new QLineEdit(layoutWidget_2);
        LE_MACHINE_STATUS_ERROR_OCCURED->setObjectName(QString::fromUtf8("LE_MACHINE_STATUS_ERROR_OCCURED"));
        sizePolicy.setHeightForWidth(LE_MACHINE_STATUS_ERROR_OCCURED->sizePolicy().hasHeightForWidth());
        LE_MACHINE_STATUS_ERROR_OCCURED->setSizePolicy(sizePolicy);
        LE_MACHINE_STATUS_ERROR_OCCURED->setMaximumSize(QSize(110, 16777215));
        LE_MACHINE_STATUS_ERROR_OCCURED->setFont(font1);
        LE_MACHINE_STATUS_ERROR_OCCURED->setReadOnly(true);

        gridLayout->addWidget(LE_MACHINE_STATUS_ERROR_OCCURED, 1, 3, 1, 1);

        LE_MACHINE_STATUS_PREPAREING = new QLineEdit(layoutWidget_2);
        LE_MACHINE_STATUS_PREPAREING->setObjectName(QString::fromUtf8("LE_MACHINE_STATUS_PREPAREING"));
        sizePolicy.setHeightForWidth(LE_MACHINE_STATUS_PREPAREING->sizePolicy().hasHeightForWidth());
        LE_MACHINE_STATUS_PREPAREING->setSizePolicy(sizePolicy);
        LE_MACHINE_STATUS_PREPAREING->setMaximumSize(QSize(110, 16777215));
        LE_MACHINE_STATUS_PREPAREING->setFont(font1);
        LE_MACHINE_STATUS_PREPAREING->setReadOnly(true);

        gridLayout->addWidget(LE_MACHINE_STATUS_PREPAREING, 1, 1, 1, 2);

        LE_MACHINE_STATUS_ON_READY = new QLineEdit(layoutWidget_2);
        LE_MACHINE_STATUS_ON_READY->setObjectName(QString::fromUtf8("LE_MACHINE_STATUS_ON_READY"));
        sizePolicy.setHeightForWidth(LE_MACHINE_STATUS_ON_READY->sizePolicy().hasHeightForWidth());
        LE_MACHINE_STATUS_ON_READY->setSizePolicy(sizePolicy);
        LE_MACHINE_STATUS_ON_READY->setMaximumSize(QSize(110, 16777215));
        LE_MACHINE_STATUS_ON_READY->setFont(font1);
        LE_MACHINE_STATUS_ON_READY->setReadOnly(true);

        gridLayout->addWidget(LE_MACHINE_STATUS_ON_READY, 1, 4, 1, 1);

        label_128 = new QLabel(layoutWidget_2);
        label_128->setObjectName(QString::fromUtf8("label_128"));
        label_128->setMaximumSize(QSize(100000, 16777215));
        label_128->setFont(font2);
        label_128->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_128, 0, 5, 1, 1);

        label_124 = new QLabel(layoutWidget_2);
        label_124->setObjectName(QString::fromUtf8("label_124"));
        label_124->setMaximumSize(QSize(100000, 16777215));
        label_124->setFont(font2);
        label_124->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_124, 0, 0, 1, 1);


        verticalLayout_2->addLayout(gridLayout);

        gridLayout_2 = new QGridLayout();
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        LE_MACHINE_STATUS_SYS_CLEANING = new QLineEdit(layoutWidget_2);
        LE_MACHINE_STATUS_SYS_CLEANING->setObjectName(QString::fromUtf8("LE_MACHINE_STATUS_SYS_CLEANING"));
        sizePolicy.setHeightForWidth(LE_MACHINE_STATUS_SYS_CLEANING->sizePolicy().hasHeightForWidth());
        LE_MACHINE_STATUS_SYS_CLEANING->setSizePolicy(sizePolicy);
        LE_MACHINE_STATUS_SYS_CLEANING->setMaximumSize(QSize(10000, 16777215));
        LE_MACHINE_STATUS_SYS_CLEANING->setFont(font1);
        LE_MACHINE_STATUS_SYS_CLEANING->setReadOnly(true);

        gridLayout_2->addWidget(LE_MACHINE_STATUS_SYS_CLEANING, 1, 0, 1, 1);

        LE_MACHINE_STATUS_MILK_CLEANING = new QLineEdit(layoutWidget_2);
        LE_MACHINE_STATUS_MILK_CLEANING->setObjectName(QString::fromUtf8("LE_MACHINE_STATUS_MILK_CLEANING"));
        sizePolicy.setHeightForWidth(LE_MACHINE_STATUS_MILK_CLEANING->sizePolicy().hasHeightForWidth());
        LE_MACHINE_STATUS_MILK_CLEANING->setSizePolicy(sizePolicy);
        LE_MACHINE_STATUS_MILK_CLEANING->setMaximumSize(QSize(10000, 16777215));
        LE_MACHINE_STATUS_MILK_CLEANING->setFont(font1);
        LE_MACHINE_STATUS_MILK_CLEANING->setReadOnly(true);

        gridLayout_2->addWidget(LE_MACHINE_STATUS_MILK_CLEANING, 1, 1, 1, 1);

        label_129 = new QLabel(layoutWidget_2);
        label_129->setObjectName(QString::fromUtf8("label_129"));
        label_129->setMaximumSize(QSize(10000, 16777215));
        label_129->setFont(font2);
        label_129->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(label_129, 0, 0, 1, 1);

        label_131 = new QLabel(layoutWidget_2);
        label_131->setObjectName(QString::fromUtf8("label_131"));
        label_131->setMaximumSize(QSize(10000, 16777215));
        label_131->setFont(font2);
        label_131->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(label_131, 0, 2, 1, 1);

        label_130 = new QLabel(layoutWidget_2);
        label_130->setObjectName(QString::fromUtf8("label_130"));
        label_130->setMaximumSize(QSize(10000, 16777215));
        label_130->setFont(font2);
        label_130->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(label_130, 0, 1, 1, 1);

        LE_MACHINE_STATUS_MILK_REPLACING = new QLineEdit(layoutWidget_2);
        LE_MACHINE_STATUS_MILK_REPLACING->setObjectName(QString::fromUtf8("LE_MACHINE_STATUS_MILK_REPLACING"));
        sizePolicy.setHeightForWidth(LE_MACHINE_STATUS_MILK_REPLACING->sizePolicy().hasHeightForWidth());
        LE_MACHINE_STATUS_MILK_REPLACING->setSizePolicy(sizePolicy);
        LE_MACHINE_STATUS_MILK_REPLACING->setMaximumSize(QSize(10000, 16777215));
        LE_MACHINE_STATUS_MILK_REPLACING->setFont(font1);
        LE_MACHINE_STATUS_MILK_REPLACING->setReadOnly(true);

        gridLayout_2->addWidget(LE_MACHINE_STATUS_MILK_REPLACING, 1, 2, 1, 1);


        verticalLayout_2->addLayout(gridLayout_2);

        layoutWidget_3 = new QWidget(GB_COFFEE);
        layoutWidget_3->setObjectName(QString::fromUtf8("layoutWidget_3"));
        layoutWidget_3->setGeometry(QRect(20, 440, 561, 104));
        gridLayout_3 = new QGridLayout(layoutWidget_3);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        gridLayout_3->setContentsMargins(0, 0, 0, 0);
        label_111 = new QLabel(layoutWidget_3);
        label_111->setObjectName(QString::fromUtf8("label_111"));
        label_111->setFont(font2);
        label_111->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_3->addWidget(label_111, 0, 0, 1, 1);

        LE_SYS_CLEAN_TIME_HOUR = new QLineEdit(layoutWidget_3);
        LE_SYS_CLEAN_TIME_HOUR->setObjectName(QString::fromUtf8("LE_SYS_CLEAN_TIME_HOUR"));
        LE_SYS_CLEAN_TIME_HOUR->setMaximumSize(QSize(50, 16777215));
        LE_SYS_CLEAN_TIME_HOUR->setFont(font1);
        LE_SYS_CLEAN_TIME_HOUR->setReadOnly(true);

        gridLayout_3->addWidget(LE_SYS_CLEAN_TIME_HOUR, 0, 1, 1, 1);

        label_114 = new QLabel(layoutWidget_3);
        label_114->setObjectName(QString::fromUtf8("label_114"));
        label_114->setMaximumSize(QSize(50, 16777215));
        label_114->setFont(font2);
        label_114->setAlignment(Qt::AlignCenter);

        gridLayout_3->addWidget(label_114, 0, 2, 1, 1);

        LE_SYS_CLEAN_TIME_MINUTE = new QLineEdit(layoutWidget_3);
        LE_SYS_CLEAN_TIME_MINUTE->setObjectName(QString::fromUtf8("LE_SYS_CLEAN_TIME_MINUTE"));
        LE_SYS_CLEAN_TIME_MINUTE->setMaximumSize(QSize(50, 16777215));
        LE_SYS_CLEAN_TIME_MINUTE->setFont(font1);
        LE_SYS_CLEAN_TIME_MINUTE->setReadOnly(true);

        gridLayout_3->addWidget(LE_SYS_CLEAN_TIME_MINUTE, 0, 3, 1, 1);

        label_115 = new QLabel(layoutWidget_3);
        label_115->setObjectName(QString::fromUtf8("label_115"));
        label_115->setMaximumSize(QSize(50, 16777215));
        label_115->setFont(font2);
        label_115->setAlignment(Qt::AlignCenter);

        gridLayout_3->addWidget(label_115, 0, 4, 1, 1);

        LE_SYS_CLEAN_TIME_SECOND = new QLineEdit(layoutWidget_3);
        LE_SYS_CLEAN_TIME_SECOND->setObjectName(QString::fromUtf8("LE_SYS_CLEAN_TIME_SECOND"));
        LE_SYS_CLEAN_TIME_SECOND->setMaximumSize(QSize(50, 16777215));
        LE_SYS_CLEAN_TIME_SECOND->setFont(font1);
        LE_SYS_CLEAN_TIME_SECOND->setReadOnly(true);

        gridLayout_3->addWidget(LE_SYS_CLEAN_TIME_SECOND, 0, 5, 1, 1);

        label_116 = new QLabel(layoutWidget_3);
        label_116->setObjectName(QString::fromUtf8("label_116"));
        label_116->setMaximumSize(QSize(50, 16777215));
        label_116->setFont(font2);
        label_116->setAlignment(Qt::AlignCenter);

        gridLayout_3->addWidget(label_116, 0, 6, 1, 1);

        label_112 = new QLabel(layoutWidget_3);
        label_112->setObjectName(QString::fromUtf8("label_112"));
        label_112->setFont(font2);
        label_112->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_3->addWidget(label_112, 1, 0, 1, 1);

        LE_MILK_CLEAN_TIME_HOUR = new QLineEdit(layoutWidget_3);
        LE_MILK_CLEAN_TIME_HOUR->setObjectName(QString::fromUtf8("LE_MILK_CLEAN_TIME_HOUR"));
        LE_MILK_CLEAN_TIME_HOUR->setMaximumSize(QSize(50, 16777215));
        LE_MILK_CLEAN_TIME_HOUR->setFont(font1);
        LE_MILK_CLEAN_TIME_HOUR->setReadOnly(true);

        gridLayout_3->addWidget(LE_MILK_CLEAN_TIME_HOUR, 1, 1, 1, 1);

        label_118 = new QLabel(layoutWidget_3);
        label_118->setObjectName(QString::fromUtf8("label_118"));
        label_118->setMaximumSize(QSize(50, 16777215));
        label_118->setFont(font2);
        label_118->setAlignment(Qt::AlignCenter);

        gridLayout_3->addWidget(label_118, 1, 2, 1, 1);

        LE_MILK_CLEAN_TIME_MINUTE = new QLineEdit(layoutWidget_3);
        LE_MILK_CLEAN_TIME_MINUTE->setObjectName(QString::fromUtf8("LE_MILK_CLEAN_TIME_MINUTE"));
        LE_MILK_CLEAN_TIME_MINUTE->setMaximumSize(QSize(50, 16777215));
        LE_MILK_CLEAN_TIME_MINUTE->setFont(font1);
        LE_MILK_CLEAN_TIME_MINUTE->setReadOnly(true);

        gridLayout_3->addWidget(LE_MILK_CLEAN_TIME_MINUTE, 1, 3, 1, 1);

        label_119 = new QLabel(layoutWidget_3);
        label_119->setObjectName(QString::fromUtf8("label_119"));
        label_119->setMaximumSize(QSize(50, 16777215));
        label_119->setFont(font2);
        label_119->setAlignment(Qt::AlignCenter);

        gridLayout_3->addWidget(label_119, 1, 4, 1, 1);

        LE_MILK_CLEAN_TIME_SECOND = new QLineEdit(layoutWidget_3);
        LE_MILK_CLEAN_TIME_SECOND->setObjectName(QString::fromUtf8("LE_MILK_CLEAN_TIME_SECOND"));
        LE_MILK_CLEAN_TIME_SECOND->setMaximumSize(QSize(50, 16777215));
        LE_MILK_CLEAN_TIME_SECOND->setFont(font1);
        LE_MILK_CLEAN_TIME_SECOND->setReadOnly(true);

        gridLayout_3->addWidget(LE_MILK_CLEAN_TIME_SECOND, 1, 5, 1, 1);

        label_117 = new QLabel(layoutWidget_3);
        label_117->setObjectName(QString::fromUtf8("label_117"));
        label_117->setMaximumSize(QSize(50, 16777215));
        label_117->setFont(font2);
        label_117->setAlignment(Qt::AlignCenter);

        gridLayout_3->addWidget(label_117, 1, 6, 1, 1);

        label_113 = new QLabel(layoutWidget_3);
        label_113->setObjectName(QString::fromUtf8("label_113"));
        label_113->setFont(font2);
        label_113->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_3->addWidget(label_113, 2, 0, 1, 1);

        LE_MILK_REPLACE_TIME_HOUR = new QLineEdit(layoutWidget_3);
        LE_MILK_REPLACE_TIME_HOUR->setObjectName(QString::fromUtf8("LE_MILK_REPLACE_TIME_HOUR"));
        LE_MILK_REPLACE_TIME_HOUR->setMaximumSize(QSize(50, 16777215));
        LE_MILK_REPLACE_TIME_HOUR->setFont(font1);
        LE_MILK_REPLACE_TIME_HOUR->setReadOnly(true);

        gridLayout_3->addWidget(LE_MILK_REPLACE_TIME_HOUR, 2, 1, 1, 1);

        label_121 = new QLabel(layoutWidget_3);
        label_121->setObjectName(QString::fromUtf8("label_121"));
        label_121->setMaximumSize(QSize(50, 16777215));
        label_121->setFont(font2);
        label_121->setAlignment(Qt::AlignCenter);

        gridLayout_3->addWidget(label_121, 2, 2, 1, 1);

        LE_MILK_REPLACE_TIME_MINUTE = new QLineEdit(layoutWidget_3);
        LE_MILK_REPLACE_TIME_MINUTE->setObjectName(QString::fromUtf8("LE_MILK_REPLACE_TIME_MINUTE"));
        LE_MILK_REPLACE_TIME_MINUTE->setMaximumSize(QSize(50, 16777215));
        LE_MILK_REPLACE_TIME_MINUTE->setFont(font1);
        LE_MILK_REPLACE_TIME_MINUTE->setReadOnly(true);

        gridLayout_3->addWidget(LE_MILK_REPLACE_TIME_MINUTE, 2, 3, 1, 1);

        label_122 = new QLabel(layoutWidget_3);
        label_122->setObjectName(QString::fromUtf8("label_122"));
        label_122->setMaximumSize(QSize(50, 16777215));
        label_122->setFont(font2);
        label_122->setAlignment(Qt::AlignCenter);

        gridLayout_3->addWidget(label_122, 2, 4, 1, 1);

        LE_MILK_REPLACE_TIME_SECOND = new QLineEdit(layoutWidget_3);
        LE_MILK_REPLACE_TIME_SECOND->setObjectName(QString::fromUtf8("LE_MILK_REPLACE_TIME_SECOND"));
        LE_MILK_REPLACE_TIME_SECOND->setMaximumSize(QSize(50, 16777215));
        LE_MILK_REPLACE_TIME_SECOND->setFont(font1);
        LE_MILK_REPLACE_TIME_SECOND->setReadOnly(true);

        gridLayout_3->addWidget(LE_MILK_REPLACE_TIME_SECOND, 2, 5, 1, 1);

        label_120 = new QLabel(layoutWidget_3);
        label_120->setObjectName(QString::fromUtf8("label_120"));
        label_120->setMaximumSize(QSize(50, 16777215));
        label_120->setFont(font2);
        label_120->setAlignment(Qt::AlignCenter);

        gridLayout_3->addWidget(label_120, 2, 6, 1, 1);

        layoutWidget = new QWidget(GB_COFFEE);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(20, 580, 151, 81));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        RB_RINSE_ON = new QRadioButton(layoutWidget);
        buttonGroup = new QButtonGroup(DialogCoffee);
        buttonGroup->setObjectName(QString::fromUtf8("buttonGroup"));
        buttonGroup->addButton(RB_RINSE_ON);
        RB_RINSE_ON->setObjectName(QString::fromUtf8("RB_RINSE_ON"));
        QFont font3;
        font3.setPointSize(14);
        RB_RINSE_ON->setFont(font3);
        RB_RINSE_ON->setChecked(false);

        verticalLayout->addWidget(RB_RINSE_ON);

        RB_RINSE_OFF = new QRadioButton(layoutWidget);
        buttonGroup->addButton(RB_RINSE_OFF);
        RB_RINSE_OFF->setObjectName(QString::fromUtf8("RB_RINSE_OFF"));
        RB_RINSE_OFF->setFont(font3);
        RB_RINSE_OFF->setChecked(true);

        verticalLayout->addWidget(RB_RINSE_OFF);

        label_132 = new QLabel(GB_COFFEE);
        label_132->setObjectName(QString::fromUtf8("label_132"));
        label_132->setGeometry(QRect(20, 70, 141, 31));
        label_132->setFont(font2);
        label_132->setAlignment(Qt::AlignCenter);

        retranslateUi(DialogCoffee);

        QMetaObject::connectSlotsByName(DialogCoffee);
    } // setupUi

    void retranslateUi(QDialog *DialogCoffee)
    {
        DialogCoffee->setWindowTitle(QApplication::translate("DialogCoffee", "Dialog", nullptr));
        GB_COFFEE->setTitle(QApplication::translate("DialogCoffee", "\354\273\244\355\224\274 (WMF)", nullptr));
        label_123->setText(QApplication::translate("DialogCoffee", "\354\273\244\355\224\274 \353\250\270\354\213\240 \354\203\201\355\203\234", nullptr));
        BTN_REQUEST_BUTTON_LIST->setText(QApplication::translate("DialogCoffee", "\353\262\204\355\212\274 \353\246\254\354\212\244\355\212\270 \354\232\224\354\262\255", nullptr));
        BTN_DRINK_OUT->setText(QApplication::translate("DialogCoffee", "\355\210\254\354\266\234", nullptr));
        label_126->setText(QApplication::translate("DialogCoffee", "\354\244\200\353\271\204\354\231\204\353\243\214", nullptr));
        label_127->setText(QApplication::translate("DialogCoffee", "\354\227\220\353\237\254\353\260\234\354\203\235", nullptr));
        label_125->setText(QApplication::translate("DialogCoffee", "\354\244\200\353\271\204\354\244\221", nullptr));
        label_128->setText(QApplication::translate("DialogCoffee", "\354\240\234\354\241\260\354\244\221", nullptr));
        label_124->setText(QApplication::translate("DialogCoffee", "\354\227\260\352\262\260\354\225\210\353\220\250", nullptr));
        label_129->setText(QApplication::translate("DialogCoffee", "\354\213\234\354\212\244\355\205\234\354\262\255\354\206\214\354\244\221", nullptr));
        label_131->setText(QApplication::translate("DialogCoffee", "\354\232\260\354\234\240\352\264\200\354\262\255\354\206\214\354\244\221", nullptr));
        label_130->setText(QApplication::translate("DialogCoffee", "\354\232\260\354\234\240\354\262\255\354\206\214\354\244\221", nullptr));
        label_111->setText(QApplication::translate("DialogCoffee", "\354\213\234\354\212\244\355\205\234 \354\262\255\354\206\214 \353\202\250\354\235\200 \354\213\234\352\260\204", nullptr));
        label_114->setText(QApplication::translate("DialogCoffee", "\354\213\234", nullptr));
        label_115->setText(QApplication::translate("DialogCoffee", "\353\266\204", nullptr));
        label_116->setText(QApplication::translate("DialogCoffee", "\354\264\210", nullptr));
        label_112->setText(QApplication::translate("DialogCoffee", "\354\232\260\354\234\240 \354\262\255\354\206\214 \353\202\250\354\235\200 \354\213\234\352\260\204", nullptr));
        label_118->setText(QApplication::translate("DialogCoffee", "\354\213\234", nullptr));
        label_119->setText(QApplication::translate("DialogCoffee", "\353\266\204", nullptr));
        label_117->setText(QApplication::translate("DialogCoffee", "\354\264\210", nullptr));
        label_113->setText(QApplication::translate("DialogCoffee", "\354\232\260\354\234\240 \352\264\200 \354\262\255\354\206\214 \353\202\250\354\235\200 \354\213\234\352\260\204", nullptr));
        label_121->setText(QApplication::translate("DialogCoffee", "\354\213\234", nullptr));
        label_122->setText(QApplication::translate("DialogCoffee", "\353\266\204", nullptr));
        label_120->setText(QApplication::translate("DialogCoffee", "\354\264\210", nullptr));
        RB_RINSE_ON->setText(QApplication::translate("DialogCoffee", "rinsing on", nullptr));
        RB_RINSE_OFF->setText(QApplication::translate("DialogCoffee", "rinsing off", nullptr));
        label_132->setText(QApplication::translate("DialogCoffee", "\354\236\245\354\271\230 \354\227\260\352\262\260 \354\203\201\355\203\234", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DialogCoffee: public Ui_DialogCoffee {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOGCOFFEE_H
