/********************************************************************************
** Form generated from reading UI file 'DialogBarcode.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOGBARCODE_H
#define UI_DIALOGBARCODE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>

QT_BEGIN_NAMESPACE

class Ui_DialogBarcode
{
public:
    QGroupBox *GB_BARCODE;
    QLineEdit *LE_BARCODE_CONNECTION;
    QFrame *line_37;
    QLabel *label_116;
    QLabel *label_117;
    QLineEdit *LE_BARCODE_COUNT;
    QLineEdit *LE_BARCODE_DATA;
    QLabel *label_112;

    void setupUi(QDialog *DialogBarcode)
    {
        if (DialogBarcode->objectName().isEmpty())
            DialogBarcode->setObjectName(QString::fromUtf8("DialogBarcode"));
        DialogBarcode->resize(601, 931);
        GB_BARCODE = new QGroupBox(DialogBarcode);
        GB_BARCODE->setObjectName(QString::fromUtf8("GB_BARCODE"));
        GB_BARCODE->setGeometry(QRect(0, 0, 601, 971));
        QFont font;
        font.setFamily(QString::fromUtf8("\355\225\250\354\264\210\353\241\254\353\217\213\354\233\200"));
        font.setPointSize(20);
        font.setBold(false);
        font.setItalic(false);
        font.setWeight(50);
        GB_BARCODE->setFont(font);
        GB_BARCODE->setStyleSheet(QString::fromUtf8("QGroupBox  {\n"
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
"	font: 11pt \"\355\225\250\354\264\210\353\241\254\353\217\213\354\233\200\";\n"
"	background-color: #ffffff\n"
"}\n"
"\n"
"\n"
"\n"
""));
        LE_BARCODE_CONNECTION = new QLineEdit(GB_BARCODE);
        LE_BARCODE_CONNECTION->setObjectName(QString::fromUtf8("LE_BARCODE_CONNECTION"));
        LE_BARCODE_CONNECTION->setGeometry(QRect(170, 70, 411, 31));
        QFont font1;
        font1.setFamily(QString::fromUtf8("\355\225\250\354\264\210\353\241\254\353\217\213\354\233\200"));
        font1.setPointSize(11);
        font1.setBold(false);
        font1.setItalic(false);
        font1.setWeight(50);
        LE_BARCODE_CONNECTION->setFont(font1);
        LE_BARCODE_CONNECTION->setReadOnly(true);
        line_37 = new QFrame(GB_BARCODE);
        line_37->setObjectName(QString::fromUtf8("line_37"));
        line_37->setGeometry(QRect(10, 110, 571, 16));
        QFont font2;
        font2.setPointSize(11);
        line_37->setFont(font2);
        line_37->setFrameShape(QFrame::HLine);
        line_37->setFrameShadow(QFrame::Sunken);
        label_116 = new QLabel(GB_BARCODE);
        label_116->setObjectName(QString::fromUtf8("label_116"));
        label_116->setGeometry(QRect(10, 130, 81, 31));
        QFont font3;
        font3.setFamily(QString::fromUtf8("\355\225\250\354\264\210\353\241\254\353\217\213\354\233\200"));
        font3.setPointSize(15);
        font3.setBold(false);
        font3.setItalic(false);
        font3.setWeight(50);
        label_116->setFont(font3);
        label_116->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        label_117 = new QLabel(GB_BARCODE);
        label_117->setObjectName(QString::fromUtf8("label_117"));
        label_117->setGeometry(QRect(10, 170, 81, 31));
        label_117->setFont(font3);
        label_117->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        LE_BARCODE_COUNT = new QLineEdit(GB_BARCODE);
        LE_BARCODE_COUNT->setObjectName(QString::fromUtf8("LE_BARCODE_COUNT"));
        LE_BARCODE_COUNT->setGeometry(QRect(110, 130, 61, 31));
        LE_BARCODE_COUNT->setFont(font1);
        LE_BARCODE_COUNT->setReadOnly(true);
        LE_BARCODE_DATA = new QLineEdit(GB_BARCODE);
        LE_BARCODE_DATA->setObjectName(QString::fromUtf8("LE_BARCODE_DATA"));
        LE_BARCODE_DATA->setGeometry(QRect(110, 170, 471, 31));
        LE_BARCODE_DATA->setFont(font1);
        LE_BARCODE_DATA->setReadOnly(true);
        label_112 = new QLabel(GB_BARCODE);
        label_112->setObjectName(QString::fromUtf8("label_112"));
        label_112->setGeometry(QRect(20, 70, 141, 31));
        label_112->setFont(font3);
        label_112->setAlignment(Qt::AlignCenter);

        retranslateUi(DialogBarcode);

        QMetaObject::connectSlotsByName(DialogBarcode);
    } // setupUi

    void retranslateUi(QDialog *DialogBarcode)
    {
        DialogBarcode->setWindowTitle(QApplication::translate("DialogBarcode", "Dialog", nullptr));
        GB_BARCODE->setTitle(QApplication::translate("DialogBarcode", "\353\260\224\354\275\224\353\223\234 \353\246\254\353\215\224\352\270\260", nullptr));
        label_116->setText(QApplication::translate("DialogBarcode", "\354\271\264\354\232\264\355\212\270", nullptr));
        label_117->setText(QApplication::translate("DialogBarcode", "\353\215\260\354\235\264\355\204\260", nullptr));
        label_112->setText(QApplication::translate("DialogBarcode", "\354\236\245\354\271\230 \354\227\260\352\262\260 \354\203\201\355\203\234", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DialogBarcode: public Ui_DialogBarcode {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOGBARCODE_H
