/********************************************************************************
** Form generated from reading UI file 'displaydialog.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DISPLAYDIALOG_H
#define UI_DISPLAYDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QLabel>

QT_BEGIN_NAMESPACE

class Ui_DisplayDialog
{
public:
    QLabel *LE_WAIT_STATUS_2;
    QLabel *LB_WAIT_PIN_4;
    QLabel *LB_WAIT_PIN_6;
    QLabel *LE_WAIT_STATUS_7;
    QLabel *LB_WAIT_PIN;
    QLabel *LE_OUTLET_STATUS_1;
    QLabel *LE_WAIT_NAME_5;
    QLabel *LB_WAIT_PIN_2;
    QLabel *LB_WAIT_PIN_5;
    QLabel *LE_WAIT_STATUS_5;
    QLabel *LE_WAIT_STATUS;
    QLabel *LE_WAIT_NAME_3;
    QLabel *LE_WAIT_NAME_6;
    QLabel *LE_WAIT_NAME_4;
    QLabel *LB_WAIT_PIN_3;
    QLabel *LE_OUTLET_PIN_1;
    QLabel *LE_WAIT_NAME_7;
    QLabel *LE_WAIT_STATUS_4;
    QLabel *label;
    QLabel *LE_WAIT_NAME_2;
    QLabel *LE_WAIT_NAME;
    QLabel *LE_WAIT_STATUS_6;
    QLabel *LB_WAIT_PIN_7;
    QLabel *LE_OUTLET_MENU_1;
    QLabel *LE_WAIT_STATUS_3;
    QLabel *BACKGROUND_READY;
    QLabel *BACKGROUND_1;
    QLabel *BACKGROUND_2;
    QLabel *BACKGROUND_3;
    QLabel *LE_CALL;
    QLabel *LE_TIME;
    QFrame *FR_NOTICE;
    QLabel *LB_NOTICE;
    QLabel *LE_OUTLET_MENU_2;
    QLabel *LE_OUTLET_PIN_2;
    QLabel *LE_OUTLET_MENU_3;
    QLabel *LE_OUTLET_PIN_3;
    QLabel *LE_OUTLET_MENU_4;
    QLabel *LE_OUTLET_PIN_4;
    QLabel *LE_OUTLET_MENU_5;
    QLabel *LE_OUTLET_PIN_5;
    QLabel *LE_OUTLET_STATUS_2;
    QLabel *LE_OUTLET_STATUS_3;
    QLabel *LE_OUTLET_STATUS_4;
    QLabel *LE_OUTLET_STATUS_5;

    void setupUi(QDialog *DisplayDialog)
    {
        if (DisplayDialog->objectName().isEmpty())
            DisplayDialog->setObjectName(QString::fromUtf8("DisplayDialog"));
        DisplayDialog->resize(1920, 1080);
        LE_WAIT_STATUS_2 = new QLabel(DisplayDialog);
        LE_WAIT_STATUS_2->setObjectName(QString::fromUtf8("LE_WAIT_STATUS_2"));
        LE_WAIT_STATUS_2->setGeometry(QRect(890, 517, 40, 40));
        QFont font;
        font.setFamily(QString::fromUtf8("Yrsa SemiBold"));
        font.setPointSize(30);
        LE_WAIT_STATUS_2->setFont(font);
        LE_WAIT_STATUS_2->setPixmap(QPixmap(QString::fromUtf8(":/build/image/waiting.png")));
        LE_WAIT_STATUS_2->setScaledContents(true);
        LE_WAIT_STATUS_2->setAlignment(Qt::AlignCenter);
        LB_WAIT_PIN_4 = new QLabel(DisplayDialog);
        LB_WAIT_PIN_4->setObjectName(QString::fromUtf8("LB_WAIT_PIN_4"));
        LB_WAIT_PIN_4->setGeometry(QRect(60, 658, 251, 71));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Yrsa SemiBold"));
        font1.setPointSize(35);
        font1.setBold(true);
        font1.setWeight(75);
        LB_WAIT_PIN_4->setFont(font1);
        LB_WAIT_PIN_4->setAlignment(Qt::AlignCenter);
        LB_WAIT_PIN_6 = new QLabel(DisplayDialog);
        LB_WAIT_PIN_6->setObjectName(QString::fromUtf8("LB_WAIT_PIN_6"));
        LB_WAIT_PIN_6->setGeometry(QRect(60, 815, 251, 71));
        LB_WAIT_PIN_6->setFont(font1);
        LB_WAIT_PIN_6->setAlignment(Qt::AlignCenter);
        LE_WAIT_STATUS_7 = new QLabel(DisplayDialog);
        LE_WAIT_STATUS_7->setObjectName(QString::fromUtf8("LE_WAIT_STATUS_7"));
        LE_WAIT_STATUS_7->setGeometry(QRect(890, 910, 40, 40));
        LE_WAIT_STATUS_7->setFont(font);
        LE_WAIT_STATUS_7->setPixmap(QPixmap(QString::fromUtf8(":/build/image/waiting.png")));
        LE_WAIT_STATUS_7->setScaledContents(true);
        LE_WAIT_STATUS_7->setAlignment(Qt::AlignCenter);
        LB_WAIT_PIN = new QLabel(DisplayDialog);
        LB_WAIT_PIN->setObjectName(QString::fromUtf8("LB_WAIT_PIN"));
        LB_WAIT_PIN->setGeometry(QRect(60, 420, 251, 71));
        LB_WAIT_PIN->setFont(font1);
        LB_WAIT_PIN->setAlignment(Qt::AlignCenter);
        LE_OUTLET_STATUS_1 = new QLabel(DisplayDialog);
        LE_OUTLET_STATUS_1->setObjectName(QString::fromUtf8("LE_OUTLET_STATUS_1"));
        LE_OUTLET_STATUS_1->setGeometry(QRect(1107, 448, 257, 181));
        LE_OUTLET_STATUS_1->setPixmap(QPixmap(QString::fromUtf8(":/build/image/outlet.png")));
        LE_OUTLET_STATUS_1->setScaledContents(true);
        LE_WAIT_NAME_5 = new QLabel(DisplayDialog);
        LE_WAIT_NAME_5->setObjectName(QString::fromUtf8("LE_WAIT_NAME_5"));
        LE_WAIT_NAME_5->setGeometry(QRect(320, 736, 451, 71));
        QFont font2;
        font2.setFamily(QString::fromUtf8("Yrsa SemiBold"));
        font2.setPointSize(25);
        font2.setBold(true);
        font2.setWeight(75);
        LE_WAIT_NAME_5->setFont(font2);
        LE_WAIT_NAME_5->setAlignment(Qt::AlignCenter);
        LB_WAIT_PIN_2 = new QLabel(DisplayDialog);
        LB_WAIT_PIN_2->setObjectName(QString::fromUtf8("LB_WAIT_PIN_2"));
        LB_WAIT_PIN_2->setGeometry(QRect(60, 500, 251, 71));
        LB_WAIT_PIN_2->setFont(font1);
        LB_WAIT_PIN_2->setAlignment(Qt::AlignCenter);
        LB_WAIT_PIN_5 = new QLabel(DisplayDialog);
        LB_WAIT_PIN_5->setObjectName(QString::fromUtf8("LB_WAIT_PIN_5"));
        LB_WAIT_PIN_5->setGeometry(QRect(60, 736, 251, 71));
        LB_WAIT_PIN_5->setFont(font1);
        LB_WAIT_PIN_5->setAlignment(Qt::AlignCenter);
        LE_WAIT_STATUS_5 = new QLabel(DisplayDialog);
        LE_WAIT_STATUS_5->setObjectName(QString::fromUtf8("LE_WAIT_STATUS_5"));
        LE_WAIT_STATUS_5->setGeometry(QRect(890, 754, 40, 40));
        LE_WAIT_STATUS_5->setFont(font);
        LE_WAIT_STATUS_5->setPixmap(QPixmap(QString::fromUtf8(":/build/image/waiting.png")));
        LE_WAIT_STATUS_5->setScaledContents(true);
        LE_WAIT_STATUS_5->setAlignment(Qt::AlignCenter);
        LE_WAIT_STATUS = new QLabel(DisplayDialog);
        LE_WAIT_STATUS->setObjectName(QString::fromUtf8("LE_WAIT_STATUS"));
        LE_WAIT_STATUS->setGeometry(QRect(890, 436, 40, 40));
        LE_WAIT_STATUS->setFont(font);
        LE_WAIT_STATUS->setPixmap(QPixmap(QString::fromUtf8(":/build/image/making.png")));
        LE_WAIT_STATUS->setScaledContents(true);
        LE_WAIT_STATUS->setAlignment(Qt::AlignCenter);
        LE_WAIT_NAME_3 = new QLabel(DisplayDialog);
        LE_WAIT_NAME_3->setObjectName(QString::fromUtf8("LE_WAIT_NAME_3"));
        LE_WAIT_NAME_3->setGeometry(QRect(320, 580, 451, 71));
        LE_WAIT_NAME_3->setFont(font2);
        LE_WAIT_NAME_3->setAlignment(Qt::AlignCenter);
        LE_WAIT_NAME_6 = new QLabel(DisplayDialog);
        LE_WAIT_NAME_6->setObjectName(QString::fromUtf8("LE_WAIT_NAME_6"));
        LE_WAIT_NAME_6->setGeometry(QRect(320, 814, 451, 71));
        LE_WAIT_NAME_6->setFont(font2);
        LE_WAIT_NAME_6->setAlignment(Qt::AlignCenter);
        LE_WAIT_NAME_4 = new QLabel(DisplayDialog);
        LE_WAIT_NAME_4->setObjectName(QString::fromUtf8("LE_WAIT_NAME_4"));
        LE_WAIT_NAME_4->setGeometry(QRect(320, 657, 451, 71));
        LE_WAIT_NAME_4->setFont(font2);
        LE_WAIT_NAME_4->setAlignment(Qt::AlignCenter);
        LB_WAIT_PIN_3 = new QLabel(DisplayDialog);
        LB_WAIT_PIN_3->setObjectName(QString::fromUtf8("LB_WAIT_PIN_3"));
        LB_WAIT_PIN_3->setGeometry(QRect(60, 580, 251, 71));
        LB_WAIT_PIN_3->setFont(font1);
        LB_WAIT_PIN_3->setAlignment(Qt::AlignCenter);
        LE_OUTLET_PIN_1 = new QLabel(DisplayDialog);
        LE_OUTLET_PIN_1->setObjectName(QString::fromUtf8("LE_OUTLET_PIN_1"));
        LE_OUTLET_PIN_1->setGeometry(QRect(1110, 470, 251, 71));
        QFont font3;
        font3.setFamily(QString::fromUtf8("Yrsa SemiBold"));
        font3.setPointSize(45);
        font3.setBold(true);
        font3.setWeight(75);
        LE_OUTLET_PIN_1->setFont(font3);
        LE_OUTLET_PIN_1->setAlignment(Qt::AlignCenter);
        LE_WAIT_NAME_7 = new QLabel(DisplayDialog);
        LE_WAIT_NAME_7->setObjectName(QString::fromUtf8("LE_WAIT_NAME_7"));
        LE_WAIT_NAME_7->setGeometry(QRect(320, 893, 451, 71));
        LE_WAIT_NAME_7->setFont(font2);
        LE_WAIT_NAME_7->setAlignment(Qt::AlignCenter);
        LE_WAIT_STATUS_4 = new QLabel(DisplayDialog);
        LE_WAIT_STATUS_4->setObjectName(QString::fromUtf8("LE_WAIT_STATUS_4"));
        LE_WAIT_STATUS_4->setGeometry(QRect(890, 674, 40, 40));
        LE_WAIT_STATUS_4->setFont(font);
        LE_WAIT_STATUS_4->setPixmap(QPixmap(QString::fromUtf8(":/build/image/waiting.png")));
        LE_WAIT_STATUS_4->setScaledContents(true);
        LE_WAIT_STATUS_4->setAlignment(Qt::AlignCenter);
        label = new QLabel(DisplayDialog);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(0, 0, 1920, 1080));
        label->setPixmap(QPixmap(QString::fromUtf8(":/build/image/background.png")));
        label->setScaledContents(true);
        LE_WAIT_NAME_2 = new QLabel(DisplayDialog);
        LE_WAIT_NAME_2->setObjectName(QString::fromUtf8("LE_WAIT_NAME_2"));
        LE_WAIT_NAME_2->setGeometry(QRect(320, 500, 451, 71));
        LE_WAIT_NAME_2->setFont(font2);
        LE_WAIT_NAME_2->setAlignment(Qt::AlignCenter);
        LE_WAIT_NAME = new QLabel(DisplayDialog);
        LE_WAIT_NAME->setObjectName(QString::fromUtf8("LE_WAIT_NAME"));
        LE_WAIT_NAME->setGeometry(QRect(320, 420, 451, 71));
        LE_WAIT_NAME->setFont(font2);
        LE_WAIT_NAME->setAlignment(Qt::AlignCenter);
        LE_WAIT_STATUS_6 = new QLabel(DisplayDialog);
        LE_WAIT_STATUS_6->setObjectName(QString::fromUtf8("LE_WAIT_STATUS_6"));
        LE_WAIT_STATUS_6->setGeometry(QRect(890, 833, 40, 40));
        LE_WAIT_STATUS_6->setFont(font);
        LE_WAIT_STATUS_6->setPixmap(QPixmap(QString::fromUtf8(":/build/image/waiting.png")));
        LE_WAIT_STATUS_6->setScaledContents(true);
        LE_WAIT_STATUS_6->setAlignment(Qt::AlignCenter);
        LB_WAIT_PIN_7 = new QLabel(DisplayDialog);
        LB_WAIT_PIN_7->setObjectName(QString::fromUtf8("LB_WAIT_PIN_7"));
        LB_WAIT_PIN_7->setGeometry(QRect(60, 894, 251, 71));
        LB_WAIT_PIN_7->setFont(font1);
        LB_WAIT_PIN_7->setAlignment(Qt::AlignCenter);
        LE_OUTLET_MENU_1 = new QLabel(DisplayDialog);
        LE_OUTLET_MENU_1->setObjectName(QString::fromUtf8("LE_OUTLET_MENU_1"));
        LE_OUTLET_MENU_1->setGeometry(QRect(1110, 540, 251, 61));
        QFont font4;
        font4.setFamily(QString::fromUtf8("Yrsa SemiBold"));
        font4.setPointSize(20);
        LE_OUTLET_MENU_1->setFont(font4);
        LE_OUTLET_MENU_1->setAlignment(Qt::AlignCenter);
        LE_WAIT_STATUS_3 = new QLabel(DisplayDialog);
        LE_WAIT_STATUS_3->setObjectName(QString::fromUtf8("LE_WAIT_STATUS_3"));
        LE_WAIT_STATUS_3->setGeometry(QRect(890, 595, 40, 40));
        LE_WAIT_STATUS_3->setFont(font);
        LE_WAIT_STATUS_3->setPixmap(QPixmap(QString::fromUtf8(":/build/image/waiting.png")));
        LE_WAIT_STATUS_3->setScaledContents(true);
        LE_WAIT_STATUS_3->setAlignment(Qt::AlignCenter);
        BACKGROUND_READY = new QLabel(DisplayDialog);
        BACKGROUND_READY->setObjectName(QString::fromUtf8("BACKGROUND_READY"));
        BACKGROUND_READY->setEnabled(true);
        BACKGROUND_READY->setGeometry(QRect(0, 0, 1920, 1080));
        BACKGROUND_READY->setPixmap(QPixmap(QString::fromUtf8(":/build/image/background_prepare.png")));
        BACKGROUND_READY->setScaledContents(true);
        BACKGROUND_1 = new QLabel(DisplayDialog);
        BACKGROUND_1->setObjectName(QString::fromUtf8("BACKGROUND_1"));
        BACKGROUND_1->setGeometry(QRect(1920, 0, 1920, 1080));
        BACKGROUND_1->setPixmap(QPixmap(QString::fromUtf8(":/build/image/display_page1.png")));
        BACKGROUND_1->setScaledContents(true);
        BACKGROUND_2 = new QLabel(DisplayDialog);
        BACKGROUND_2->setObjectName(QString::fromUtf8("BACKGROUND_2"));
        BACKGROUND_2->setGeometry(QRect(1920, 0, 1920, 1080));
        BACKGROUND_2->setPixmap(QPixmap(QString::fromUtf8(":/build/image/display_page2.png")));
        BACKGROUND_2->setScaledContents(true);
        BACKGROUND_3 = new QLabel(DisplayDialog);
        BACKGROUND_3->setObjectName(QString::fromUtf8("BACKGROUND_3"));
        BACKGROUND_3->setEnabled(true);
        BACKGROUND_3->setGeometry(QRect(1920, 0, 1920, 1080));
        BACKGROUND_3->setPixmap(QPixmap(QString::fromUtf8(":/build/image/display_page3.png")));
        BACKGROUND_3->setScaledContents(true);
        LE_CALL = new QLabel(DisplayDialog);
        LE_CALL->setObjectName(QString::fromUtf8("LE_CALL"));
        LE_CALL->setGeometry(QRect(360, 55, 431, 71));
        QFont font5;
        font5.setFamily(QString::fromUtf8("Yrsa SemiBold"));
        font5.setPointSize(30);
        font5.setBold(true);
        font5.setWeight(75);
        LE_CALL->setFont(font5);
        LE_CALL->setAlignment(Qt::AlignCenter);
        LE_TIME = new QLabel(DisplayDialog);
        LE_TIME->setObjectName(QString::fromUtf8("LE_TIME"));
        LE_TIME->setGeometry(QRect(710, 970, 71, 71));
        LE_TIME->setFont(font2);
        LE_TIME->setAlignment(Qt::AlignCenter);
        FR_NOTICE = new QFrame(DisplayDialog);
        FR_NOTICE->setObjectName(QString::fromUtf8("FR_NOTICE"));
        FR_NOTICE->setGeometry(QRect(0, 134, 1920, 200));
        FR_NOTICE->setAutoFillBackground(false);
        FR_NOTICE->setStyleSheet(QString::fromUtf8("QFrame{\n"
"	background-color: rgb(239, 41, 41);\n"
"}\n"
"QLabel{\n"
"	color: white;\n"
"	font: 70pt \"\355\225\250\354\264\210\353\241\254\353\217\213\354\233\200\";\n"
"}"));
        FR_NOTICE->setFrameShape(QFrame::NoFrame);
        FR_NOTICE->setFrameShadow(QFrame::Raised);
        LB_NOTICE = new QLabel(FR_NOTICE);
        LB_NOTICE->setObjectName(QString::fromUtf8("LB_NOTICE"));
        LB_NOTICE->setGeometry(QRect(0, 0, 1921, 200));
        LB_NOTICE->setToolTipDuration(0);
        LB_NOTICE->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	border:2px solid #D1BCED;\n"
"	font: 30pt \"\355\225\250\354\264\210\353\241\254\353\217\213\354\233\200\"; \n"
" 	color: white;\\n}"));
        LB_NOTICE->setAlignment(Qt::AlignCenter);
        LE_OUTLET_MENU_2 = new QLabel(DisplayDialog);
        LE_OUTLET_MENU_2->setObjectName(QString::fromUtf8("LE_OUTLET_MENU_2"));
        LE_OUTLET_MENU_2->setGeometry(QRect(1110, 840, 251, 61));
        LE_OUTLET_MENU_2->setFont(font4);
        LE_OUTLET_MENU_2->setAlignment(Qt::AlignCenter);
        LE_OUTLET_PIN_2 = new QLabel(DisplayDialog);
        LE_OUTLET_PIN_2->setObjectName(QString::fromUtf8("LE_OUTLET_PIN_2"));
        LE_OUTLET_PIN_2->setGeometry(QRect(1110, 770, 251, 71));
        LE_OUTLET_PIN_2->setFont(font3);
        LE_OUTLET_PIN_2->setAlignment(Qt::AlignCenter);
        LE_OUTLET_MENU_3 = new QLabel(DisplayDialog);
        LE_OUTLET_MENU_3->setObjectName(QString::fromUtf8("LE_OUTLET_MENU_3"));
        LE_OUTLET_MENU_3->setGeometry(QRect(1380, 840, 251, 61));
        LE_OUTLET_MENU_3->setFont(font4);
        LE_OUTLET_MENU_3->setAlignment(Qt::AlignCenter);
        LE_OUTLET_PIN_3 = new QLabel(DisplayDialog);
        LE_OUTLET_PIN_3->setObjectName(QString::fromUtf8("LE_OUTLET_PIN_3"));
        LE_OUTLET_PIN_3->setGeometry(QRect(1380, 770, 251, 71));
        LE_OUTLET_PIN_3->setFont(font3);
        LE_OUTLET_PIN_3->setAlignment(Qt::AlignCenter);
        LE_OUTLET_MENU_4 = new QLabel(DisplayDialog);
        LE_OUTLET_MENU_4->setObjectName(QString::fromUtf8("LE_OUTLET_MENU_4"));
        LE_OUTLET_MENU_4->setGeometry(QRect(1650, 840, 251, 61));
        LE_OUTLET_MENU_4->setFont(font4);
        LE_OUTLET_MENU_4->setAlignment(Qt::AlignCenter);
        LE_OUTLET_PIN_4 = new QLabel(DisplayDialog);
        LE_OUTLET_PIN_4->setObjectName(QString::fromUtf8("LE_OUTLET_PIN_4"));
        LE_OUTLET_PIN_4->setGeometry(QRect(1650, 770, 251, 71));
        LE_OUTLET_PIN_4->setFont(font3);
        LE_OUTLET_PIN_4->setAlignment(Qt::AlignCenter);
        LE_OUTLET_MENU_5 = new QLabel(DisplayDialog);
        LE_OUTLET_MENU_5->setObjectName(QString::fromUtf8("LE_OUTLET_MENU_5"));
        LE_OUTLET_MENU_5->setGeometry(QRect(1650, 540, 251, 61));
        LE_OUTLET_MENU_5->setFont(font4);
        LE_OUTLET_MENU_5->setAlignment(Qt::AlignCenter);
        LE_OUTLET_PIN_5 = new QLabel(DisplayDialog);
        LE_OUTLET_PIN_5->setObjectName(QString::fromUtf8("LE_OUTLET_PIN_5"));
        LE_OUTLET_PIN_5->setGeometry(QRect(1650, 470, 251, 71));
        LE_OUTLET_PIN_5->setFont(font3);
        LE_OUTLET_PIN_5->setAlignment(Qt::AlignCenter);
        LE_OUTLET_STATUS_2 = new QLabel(DisplayDialog);
        LE_OUTLET_STATUS_2->setObjectName(QString::fromUtf8("LE_OUTLET_STATUS_2"));
        LE_OUTLET_STATUS_2->setGeometry(QRect(1107, 749, 257, 181));
        LE_OUTLET_STATUS_2->setPixmap(QPixmap(QString::fromUtf8(":/build/image/outlet.png")));
        LE_OUTLET_STATUS_2->setScaledContents(true);
        LE_OUTLET_STATUS_3 = new QLabel(DisplayDialog);
        LE_OUTLET_STATUS_3->setObjectName(QString::fromUtf8("LE_OUTLET_STATUS_3"));
        LE_OUTLET_STATUS_3->setGeometry(QRect(1379, 748, 257, 181));
        LE_OUTLET_STATUS_3->setPixmap(QPixmap(QString::fromUtf8(":/build/image/outlet.png")));
        LE_OUTLET_STATUS_3->setScaledContents(true);
        LE_OUTLET_STATUS_4 = new QLabel(DisplayDialog);
        LE_OUTLET_STATUS_4->setObjectName(QString::fromUtf8("LE_OUTLET_STATUS_4"));
        LE_OUTLET_STATUS_4->setGeometry(QRect(1650, 748, 257, 181));
        LE_OUTLET_STATUS_4->setPixmap(QPixmap(QString::fromUtf8(":/build/image/outlet.png")));
        LE_OUTLET_STATUS_4->setScaledContents(true);
        LE_OUTLET_STATUS_5 = new QLabel(DisplayDialog);
        LE_OUTLET_STATUS_5->setObjectName(QString::fromUtf8("LE_OUTLET_STATUS_5"));
        LE_OUTLET_STATUS_5->setGeometry(QRect(1650, 448, 257, 181));
        LE_OUTLET_STATUS_5->setPixmap(QPixmap(QString::fromUtf8(":/build/image/outlet.png")));
        LE_OUTLET_STATUS_5->setScaledContents(true);
        BACKGROUND_READY->raise();
        label->raise();
        LE_WAIT_STATUS_2->raise();
        LB_WAIT_PIN_4->raise();
        LB_WAIT_PIN_6->raise();
        LE_WAIT_STATUS_7->raise();
        LB_WAIT_PIN->raise();
        LE_WAIT_NAME_5->raise();
        LB_WAIT_PIN_5->raise();
        LE_WAIT_STATUS_5->raise();
        LE_WAIT_STATUS->raise();
        LE_WAIT_NAME_3->raise();
        LE_WAIT_NAME_6->raise();
        LE_WAIT_NAME_4->raise();
        LE_OUTLET_PIN_1->raise();
        LE_WAIT_NAME_7->raise();
        LE_WAIT_STATUS_4->raise();
        LE_WAIT_NAME_2->raise();
        LE_WAIT_NAME->raise();
        LE_WAIT_STATUS_6->raise();
        LB_WAIT_PIN_7->raise();
        LE_OUTLET_MENU_1->raise();
        LE_WAIT_STATUS_3->raise();
        LB_WAIT_PIN_2->raise();
        LB_WAIT_PIN_3->raise();
        LE_OUTLET_STATUS_1->raise();
        BACKGROUND_1->raise();
        BACKGROUND_2->raise();
        BACKGROUND_3->raise();
        LE_CALL->raise();
        LE_TIME->raise();
        FR_NOTICE->raise();
        LE_OUTLET_MENU_2->raise();
        LE_OUTLET_PIN_2->raise();
        LE_OUTLET_MENU_3->raise();
        LE_OUTLET_PIN_3->raise();
        LE_OUTLET_MENU_4->raise();
        LE_OUTLET_PIN_4->raise();
        LE_OUTLET_MENU_5->raise();
        LE_OUTLET_PIN_5->raise();
        LE_OUTLET_STATUS_2->raise();
        LE_OUTLET_STATUS_3->raise();
        LE_OUTLET_STATUS_4->raise();
        LE_OUTLET_STATUS_5->raise();

        retranslateUi(DisplayDialog);

        QMetaObject::connectSlotsByName(DisplayDialog);
    } // setupUi

    void retranslateUi(QDialog *DisplayDialog)
    {
        DisplayDialog->setWindowTitle(QApplication::translate("DisplayDialog", "Dialog", nullptr));
        LE_WAIT_STATUS_2->setText(QString());
        LB_WAIT_PIN_4->setText(QApplication::translate("DisplayDialog", "22222", nullptr));
        LB_WAIT_PIN_6->setText(QApplication::translate("DisplayDialog", "22222", nullptr));
        LE_WAIT_STATUS_7->setText(QString());
        LB_WAIT_PIN->setText(QApplication::translate("DisplayDialog", "22222", nullptr));
        LE_OUTLET_STATUS_1->setText(QString());
        LE_WAIT_NAME_5->setText(QApplication::translate("DisplayDialog", "ICE AMERICANO", nullptr));
        LB_WAIT_PIN_2->setText(QApplication::translate("DisplayDialog", "22222", nullptr));
        LB_WAIT_PIN_5->setText(QApplication::translate("DisplayDialog", "22222", nullptr));
        LE_WAIT_STATUS_5->setText(QString());
        LE_WAIT_STATUS->setText(QString());
        LE_WAIT_NAME_3->setText(QApplication::translate("DisplayDialog", "ICE AMERICANO", nullptr));
        LE_WAIT_NAME_6->setText(QApplication::translate("DisplayDialog", "ICE AMERICANO", nullptr));
        LE_WAIT_NAME_4->setText(QApplication::translate("DisplayDialog", "ICE AMERICANO", nullptr));
        LB_WAIT_PIN_3->setText(QApplication::translate("DisplayDialog", "22222", nullptr));
        LE_OUTLET_PIN_1->setText(QApplication::translate("DisplayDialog", "22222", nullptr));
        LE_WAIT_NAME_7->setText(QApplication::translate("DisplayDialog", "ICE AMERICANO", nullptr));
        LE_WAIT_STATUS_4->setText(QString());
        label->setText(QString());
        LE_WAIT_NAME_2->setText(QApplication::translate("DisplayDialog", "ICE AMERICANO", nullptr));
        LE_WAIT_NAME->setText(QApplication::translate("DisplayDialog", "ICE AMERICANO", nullptr));
        LE_WAIT_STATUS_6->setText(QString());
        LB_WAIT_PIN_7->setText(QApplication::translate("DisplayDialog", "22222", nullptr));
        LE_OUTLET_MENU_1->setText(QApplication::translate("DisplayDialog", "ICE AMERICANO", nullptr));
        LE_WAIT_STATUS_3->setText(QString());
        BACKGROUND_READY->setText(QString());
        BACKGROUND_1->setText(QString());
        BACKGROUND_2->setText(QString());
        BACKGROUND_3->setText(QString());
        LE_CALL->setText(QApplication::translate("DisplayDialog", "\354\227\260\352\262\260\353\220\230\354\247\200 \354\225\212\354\235\214", nullptr));
        LE_TIME->setText(QApplication::translate("DisplayDialog", "0", nullptr));
        LB_NOTICE->setText(QApplication::translate("DisplayDialog", "hello", nullptr));
        LE_OUTLET_MENU_2->setText(QApplication::translate("DisplayDialog", "ICE AMERICANO", nullptr));
        LE_OUTLET_PIN_2->setText(QApplication::translate("DisplayDialog", "22222", nullptr));
        LE_OUTLET_MENU_3->setText(QApplication::translate("DisplayDialog", "ICE AMERICANO", nullptr));
        LE_OUTLET_PIN_3->setText(QApplication::translate("DisplayDialog", "22222", nullptr));
        LE_OUTLET_MENU_4->setText(QApplication::translate("DisplayDialog", "ICE AMERICANO", nullptr));
        LE_OUTLET_PIN_4->setText(QApplication::translate("DisplayDialog", "22222", nullptr));
        LE_OUTLET_MENU_5->setText(QApplication::translate("DisplayDialog", "ICE AMERICANO", nullptr));
        LE_OUTLET_PIN_5->setText(QApplication::translate("DisplayDialog", "22222", nullptr));
        LE_OUTLET_STATUS_2->setText(QString());
        LE_OUTLET_STATUS_3->setText(QString());
        LE_OUTLET_STATUS_4->setText(QString());
        LE_OUTLET_STATUS_5->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class DisplayDialog: public Ui_DisplayDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DISPLAYDIALOG_H
