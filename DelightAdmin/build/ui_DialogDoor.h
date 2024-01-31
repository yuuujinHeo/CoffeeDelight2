/********************************************************************************
** Form generated from reading UI file 'DialogDoor.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOGDOOR_H
#define UI_DIALOGDOOR_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>

QT_BEGIN_NAMESPACE

class Ui_DialogDoor
{
public:
    QGroupBox *GB_DOOR;
    QLineEdit *LE_DOOR_CONNECTION;
    QLineEdit *LE_DOOR_OPENED;
    QLabel *label_111;
    QLineEdit *LE_DOOR_CLOSED;
    QLabel *label_112;
    QLabel *label;
    QLabel *label_2;
    QLabel *LB_SENSOR_A;
    QLabel *LB_SENSOR_B;
    QLabel *label_113;

    void setupUi(QDialog *DialogDoor)
    {
        if (DialogDoor->objectName().isEmpty())
            DialogDoor->setObjectName(QString::fromUtf8("DialogDoor"));
        DialogDoor->resize(601, 931);
        GB_DOOR = new QGroupBox(DialogDoor);
        GB_DOOR->setObjectName(QString::fromUtf8("GB_DOOR"));
        GB_DOOR->setGeometry(QRect(0, 0, 611, 971));
        QFont font;
        font.setFamily(QString::fromUtf8("\355\225\250\354\264\210\353\241\254\353\217\213\354\233\200"));
        font.setPointSize(20);
        font.setBold(false);
        font.setItalic(false);
        font.setWeight(50);
        GB_DOOR->setFont(font);
        GB_DOOR->setStyleSheet(QString::fromUtf8("QGroupBox  {\n"
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
"	font: 10pt \"\355\225\250\354\264\210\353\241\254\353\217\213\354\233\200\";\n"
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
"\n"
"\n"
""));
        LE_DOOR_CONNECTION = new QLineEdit(GB_DOOR);
        LE_DOOR_CONNECTION->setObjectName(QString::fromUtf8("LE_DOOR_CONNECTION"));
        LE_DOOR_CONNECTION->setGeometry(QRect(170, 70, 411, 31));
        QFont font1;
        font1.setFamily(QString::fromUtf8("\355\225\250\354\264\210\353\241\254\353\217\213\354\233\200"));
        font1.setPointSize(10);
        font1.setBold(false);
        font1.setItalic(false);
        font1.setWeight(50);
        LE_DOOR_CONNECTION->setFont(font1);
        LE_DOOR_CONNECTION->setReadOnly(true);
        LE_DOOR_OPENED = new QLineEdit(GB_DOOR);
        LE_DOOR_OPENED->setObjectName(QString::fromUtf8("LE_DOOR_OPENED"));
        LE_DOOR_OPENED->setGeometry(QRect(20, 160, 111, 91));
        LE_DOOR_OPENED->setFont(font1);
        LE_DOOR_OPENED->setReadOnly(true);
        label_111 = new QLabel(GB_DOOR);
        label_111->setObjectName(QString::fromUtf8("label_111"));
        label_111->setGeometry(QRect(20, 130, 111, 21));
        QFont font2;
        font2.setFamily(QString::fromUtf8("\355\225\250\354\264\210\353\241\254\353\217\213\354\233\200"));
        font2.setPointSize(15);
        font2.setBold(false);
        font2.setItalic(false);
        font2.setWeight(50);
        label_111->setFont(font2);
        label_111->setAlignment(Qt::AlignCenter);
        LE_DOOR_CLOSED = new QLineEdit(GB_DOOR);
        LE_DOOR_CLOSED->setObjectName(QString::fromUtf8("LE_DOOR_CLOSED"));
        LE_DOOR_CLOSED->setGeometry(QRect(150, 160, 111, 91));
        LE_DOOR_CLOSED->setFont(font1);
        LE_DOOR_CLOSED->setReadOnly(true);
        label_112 = new QLabel(GB_DOOR);
        label_112->setObjectName(QString::fromUtf8("label_112"));
        label_112->setGeometry(QRect(150, 130, 111, 21));
        label_112->setFont(font2);
        label_112->setAlignment(Qt::AlignCenter);
        label = new QLabel(GB_DOOR);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(280, 160, 71, 31));
        label_2 = new QLabel(GB_DOOR);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(280, 210, 71, 31));
        LB_SENSOR_A = new QLabel(GB_DOOR);
        LB_SENSOR_A->setObjectName(QString::fromUtf8("LB_SENSOR_A"));
        LB_SENSOR_A->setGeometry(QRect(360, 160, 71, 31));
        LB_SENSOR_B = new QLabel(GB_DOOR);
        LB_SENSOR_B->setObjectName(QString::fromUtf8("LB_SENSOR_B"));
        LB_SENSOR_B->setGeometry(QRect(360, 210, 71, 31));
        label_113 = new QLabel(GB_DOOR);
        label_113->setObjectName(QString::fromUtf8("label_113"));
        label_113->setGeometry(QRect(20, 70, 141, 31));
        label_113->setFont(font2);
        label_113->setAlignment(Qt::AlignCenter);

        retranslateUi(DialogDoor);

        QMetaObject::connectSlotsByName(DialogDoor);
    } // setupUi

    void retranslateUi(QDialog *DialogDoor)
    {
        DialogDoor->setWindowTitle(QApplication::translate("DialogDoor", "Dialog", nullptr));
        GB_DOOR->setTitle(QApplication::translate("DialogDoor", "\354\266\234\354\236\205\352\265\254", nullptr));
        label_111->setText(QApplication::translate("DialogDoor", "\353\254\270\354\227\264\353\246\274", nullptr));
        label_112->setText(QApplication::translate("DialogDoor", "\353\254\270\353\213\253\355\236\230", nullptr));
        label->setText(QApplication::translate("DialogDoor", "\354\204\274\354\204\234 A:", nullptr));
        label_2->setText(QApplication::translate("DialogDoor", "\354\204\274\354\204\234 B:", nullptr));
        LB_SENSOR_A->setText(QApplication::translate("DialogDoor", "\354\227\264\353\246\274", nullptr));
        LB_SENSOR_B->setText(QApplication::translate("DialogDoor", "\354\227\264\353\246\274", nullptr));
        label_113->setText(QApplication::translate("DialogDoor", "\354\236\245\354\271\230 \354\227\260\352\262\260 \354\203\201\355\203\234", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DialogDoor: public Ui_DialogDoor {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOGDOOR_H
