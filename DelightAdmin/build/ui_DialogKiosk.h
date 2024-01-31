/********************************************************************************
** Form generated from reading UI file 'DialogKiosk.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOGKIOSK_H
#define UI_DIALOGKIOSK_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_DialogKiosk
{
public:
    QGroupBox *GB_KIOSK;
    QLineEdit *LE_KIOSK_CONNECTION;
    QFrame *line_37;
    QListWidget *LW_ORDERS;
    QCheckBox *CB_FORCE_KIOSK;
    QPushButton *BTN_FORCE_ORDER_PASS;
    QPushButton *BTN_FORCE_ORDER_BLOCK;
    QLabel *label_111;

    void setupUi(QDialog *DialogKiosk)
    {
        if (DialogKiosk->objectName().isEmpty())
            DialogKiosk->setObjectName(QString::fromUtf8("DialogKiosk"));
        DialogKiosk->resize(601, 931);
        GB_KIOSK = new QGroupBox(DialogKiosk);
        GB_KIOSK->setObjectName(QString::fromUtf8("GB_KIOSK"));
        GB_KIOSK->setGeometry(QRect(0, 0, 601, 971));
        QFont font;
        font.setFamily(QString::fromUtf8("\355\225\250\354\264\210\353\241\254\353\217\213\354\233\200"));
        font.setPointSize(20);
        font.setBold(false);
        font.setItalic(false);
        font.setWeight(50);
        GB_KIOSK->setFont(font);
        GB_KIOSK->setStyleSheet(QString::fromUtf8("QGroupBox  {\n"
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
        LE_KIOSK_CONNECTION = new QLineEdit(GB_KIOSK);
        LE_KIOSK_CONNECTION->setObjectName(QString::fromUtf8("LE_KIOSK_CONNECTION"));
        LE_KIOSK_CONNECTION->setGeometry(QRect(170, 70, 411, 31));
        QFont font1;
        font1.setFamily(QString::fromUtf8("\355\225\250\354\264\210\353\241\254\353\217\213\354\233\200"));
        font1.setPointSize(10);
        font1.setBold(false);
        font1.setItalic(false);
        font1.setWeight(50);
        LE_KIOSK_CONNECTION->setFont(font1);
        LE_KIOSK_CONNECTION->setReadOnly(true);
        line_37 = new QFrame(GB_KIOSK);
        line_37->setObjectName(QString::fromUtf8("line_37"));
        line_37->setGeometry(QRect(20, 120, 361, 16));
        QFont font2;
        font2.setPointSize(11);
        line_37->setFont(font2);
        line_37->setFrameShape(QFrame::HLine);
        line_37->setFrameShadow(QFrame::Sunken);
        LW_ORDERS = new QListWidget(GB_KIOSK);
        LW_ORDERS->setObjectName(QString::fromUtf8("LW_ORDERS"));
        LW_ORDERS->setGeometry(QRect(20, 150, 361, 481));
        QFont font3;
        font3.setPointSize(12);
        LW_ORDERS->setFont(font3);
        CB_FORCE_KIOSK = new QCheckBox(GB_KIOSK);
        CB_FORCE_KIOSK->setObjectName(QString::fromUtf8("CB_FORCE_KIOSK"));
        CB_FORCE_KIOSK->setGeometry(QRect(30, 660, 251, 31));
        CB_FORCE_KIOSK->setFont(font3);
        BTN_FORCE_ORDER_PASS = new QPushButton(GB_KIOSK);
        BTN_FORCE_ORDER_PASS->setObjectName(QString::fromUtf8("BTN_FORCE_ORDER_PASS"));
        BTN_FORCE_ORDER_PASS->setGeometry(QRect(170, 700, 111, 81));
        BTN_FORCE_ORDER_BLOCK = new QPushButton(GB_KIOSK);
        BTN_FORCE_ORDER_BLOCK->setObjectName(QString::fromUtf8("BTN_FORCE_ORDER_BLOCK"));
        BTN_FORCE_ORDER_BLOCK->setGeometry(QRect(30, 700, 111, 81));
        label_111 = new QLabel(GB_KIOSK);
        label_111->setObjectName(QString::fromUtf8("label_111"));
        label_111->setGeometry(QRect(20, 70, 141, 31));
        QFont font4;
        font4.setFamily(QString::fromUtf8("\355\225\250\354\264\210\353\241\254\353\217\213\354\233\200"));
        font4.setPointSize(15);
        font4.setBold(false);
        font4.setItalic(false);
        font4.setWeight(50);
        label_111->setFont(font4);
        label_111->setAlignment(Qt::AlignCenter);

        retranslateUi(DialogKiosk);

        QMetaObject::connectSlotsByName(DialogKiosk);
    } // setupUi

    void retranslateUi(QDialog *DialogKiosk)
    {
        DialogKiosk->setWindowTitle(QApplication::translate("DialogKiosk", "Dialog", nullptr));
        GB_KIOSK->setTitle(QApplication::translate("DialogKiosk", "\355\202\244\354\230\244\354\212\244\355\201\254", nullptr));
        CB_FORCE_KIOSK->setText(QApplication::translate("DialogKiosk", "\355\202\244\354\230\244\354\212\244\355\201\254 \352\260\225\354\240\234 \354\240\201\354\232\251", nullptr));
        BTN_FORCE_ORDER_PASS->setText(QApplication::translate("DialogKiosk", "\354\243\274\353\254\270\355\227\210\354\232\251", nullptr));
        BTN_FORCE_ORDER_BLOCK->setText(QApplication::translate("DialogKiosk", "\354\243\274\353\254\270\354\260\250\353\213\250", nullptr));
        label_111->setText(QApplication::translate("DialogKiosk", "\354\236\245\354\271\230 \354\227\260\352\262\260 \354\203\201\355\203\234", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DialogKiosk: public Ui_DialogKiosk {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOGKIOSK_H
