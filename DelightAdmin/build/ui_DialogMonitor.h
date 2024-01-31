/********************************************************************************
** Form generated from reading UI file 'DialogMonitor.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOGMONITOR_H
#define UI_DIALOGMONITOR_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_DialogMonitor
{
public:
    QGroupBox *GB_MONITOR;
    QLineEdit *LE_MONITOR_CONNECTION;
    QListWidget *LW_WAITING;
    QListWidget *LW_COMPLETED;
    QLabel *label_111;
    QLabel *label_112;
    QCheckBox *CB_FORCE_MONITOR_STATUS;
    QPushButton *BTN_FORCE_OPERATION;
    QPushButton *BTN_FORCE_MAINTENANCE;
    QPushButton *BTN_FORCE_PREPARATION;
    QPushButton *BTN_FORCE_ERROR;
    QLineEdit *LE_FORCE_MSG;
    QPushButton *BTN_FORCE_CLEAR_WAITING_LIST;
    QPushButton *BTN_FORCE_CLEAR_COMPLETED_LIST;
    QCheckBox *CB_FORCE_CLEAR_DRINKS;
    QLineEdit *LE_MONITOR_STATUS_OPERATION;
    QLineEdit *LE_MONITOR_STATUS_PREPARATION;
    QLineEdit *LE_MONITOR_STATUS_MAINTENANCE;
    QLineEdit *LE_MONITOR_STATUS_ERROR;
    QLineEdit *LE_MONITOR_STATUS_MESSAGE;
    QLabel *label_113;

    void setupUi(QDialog *DialogMonitor)
    {
        if (DialogMonitor->objectName().isEmpty())
            DialogMonitor->setObjectName(QString::fromUtf8("DialogMonitor"));
        DialogMonitor->resize(601, 931);
        GB_MONITOR = new QGroupBox(DialogMonitor);
        GB_MONITOR->setObjectName(QString::fromUtf8("GB_MONITOR"));
        GB_MONITOR->setGeometry(QRect(0, 0, 611, 971));
        QFont font;
        font.setFamily(QString::fromUtf8("\355\225\250\354\264\210\353\241\254\353\217\213\354\233\200"));
        font.setPointSize(20);
        font.setBold(false);
        font.setItalic(false);
        font.setWeight(50);
        GB_MONITOR->setFont(font);
        GB_MONITOR->setStyleSheet(QString::fromUtf8("QGroupBox  {\n"
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
        LE_MONITOR_CONNECTION = new QLineEdit(GB_MONITOR);
        LE_MONITOR_CONNECTION->setObjectName(QString::fromUtf8("LE_MONITOR_CONNECTION"));
        LE_MONITOR_CONNECTION->setGeometry(QRect(170, 70, 411, 31));
        QFont font1;
        font1.setFamily(QString::fromUtf8("\355\225\250\354\264\210\353\241\254\353\217\213\354\233\200"));
        font1.setPointSize(10);
        font1.setBold(false);
        font1.setItalic(false);
        font1.setWeight(50);
        LE_MONITOR_CONNECTION->setFont(font1);
        LE_MONITOR_CONNECTION->setReadOnly(true);
        LW_WAITING = new QListWidget(GB_MONITOR);
        LW_WAITING->setObjectName(QString::fromUtf8("LW_WAITING"));
        LW_WAITING->setGeometry(QRect(20, 170, 261, 201));
        LW_COMPLETED = new QListWidget(GB_MONITOR);
        LW_COMPLETED->setObjectName(QString::fromUtf8("LW_COMPLETED"));
        LW_COMPLETED->setGeometry(QRect(320, 170, 261, 201));
        label_111 = new QLabel(GB_MONITOR);
        label_111->setObjectName(QString::fromUtf8("label_111"));
        label_111->setGeometry(QRect(20, 130, 191, 31));
        QFont font2;
        font2.setFamily(QString::fromUtf8("\355\225\250\354\264\210\353\241\254\353\217\213\354\233\200"));
        font2.setPointSize(15);
        font2.setBold(false);
        font2.setItalic(false);
        font2.setWeight(50);
        label_111->setFont(font2);
        label_111->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        label_112 = new QLabel(GB_MONITOR);
        label_112->setObjectName(QString::fromUtf8("label_112"));
        label_112->setGeometry(QRect(320, 130, 211, 31));
        label_112->setFont(font2);
        label_112->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        CB_FORCE_MONITOR_STATUS = new QCheckBox(GB_MONITOR);
        CB_FORCE_MONITOR_STATUS->setObjectName(QString::fromUtf8("CB_FORCE_MONITOR_STATUS"));
        CB_FORCE_MONITOR_STATUS->setGeometry(QRect(20, 770, 131, 23));
        BTN_FORCE_OPERATION = new QPushButton(GB_MONITOR);
        BTN_FORCE_OPERATION->setObjectName(QString::fromUtf8("BTN_FORCE_OPERATION"));
        BTN_FORCE_OPERATION->setGeometry(QRect(20, 810, 101, 51));
        BTN_FORCE_MAINTENANCE = new QPushButton(GB_MONITOR);
        BTN_FORCE_MAINTENANCE->setObjectName(QString::fromUtf8("BTN_FORCE_MAINTENANCE"));
        BTN_FORCE_MAINTENANCE->setGeometry(QRect(260, 810, 101, 51));
        BTN_FORCE_PREPARATION = new QPushButton(GB_MONITOR);
        BTN_FORCE_PREPARATION->setObjectName(QString::fromUtf8("BTN_FORCE_PREPARATION"));
        BTN_FORCE_PREPARATION->setGeometry(QRect(140, 810, 101, 51));
        BTN_FORCE_ERROR = new QPushButton(GB_MONITOR);
        BTN_FORCE_ERROR->setObjectName(QString::fromUtf8("BTN_FORCE_ERROR"));
        BTN_FORCE_ERROR->setGeometry(QRect(380, 810, 101, 51));
        LE_FORCE_MSG = new QLineEdit(GB_MONITOR);
        LE_FORCE_MSG->setObjectName(QString::fromUtf8("LE_FORCE_MSG"));
        LE_FORCE_MSG->setGeometry(QRect(20, 880, 561, 31));
        BTN_FORCE_CLEAR_WAITING_LIST = new QPushButton(GB_MONITOR);
        BTN_FORCE_CLEAR_WAITING_LIST->setObjectName(QString::fromUtf8("BTN_FORCE_CLEAR_WAITING_LIST"));
        BTN_FORCE_CLEAR_WAITING_LIST->setGeometry(QRect(20, 670, 201, 41));
        BTN_FORCE_CLEAR_COMPLETED_LIST = new QPushButton(GB_MONITOR);
        BTN_FORCE_CLEAR_COMPLETED_LIST->setObjectName(QString::fromUtf8("BTN_FORCE_CLEAR_COMPLETED_LIST"));
        BTN_FORCE_CLEAR_COMPLETED_LIST->setGeometry(QRect(260, 670, 201, 41));
        CB_FORCE_CLEAR_DRINKS = new QCheckBox(GB_MONITOR);
        CB_FORCE_CLEAR_DRINKS->setObjectName(QString::fromUtf8("CB_FORCE_CLEAR_DRINKS"));
        CB_FORCE_CLEAR_DRINKS->setGeometry(QRect(20, 630, 161, 23));
        LE_MONITOR_STATUS_OPERATION = new QLineEdit(GB_MONITOR);
        LE_MONITOR_STATUS_OPERATION->setObjectName(QString::fromUtf8("LE_MONITOR_STATUS_OPERATION"));
        LE_MONITOR_STATUS_OPERATION->setGeometry(QRect(20, 470, 101, 51));
        LE_MONITOR_STATUS_OPERATION->setAlignment(Qt::AlignCenter);
        LE_MONITOR_STATUS_OPERATION->setReadOnly(true);
        LE_MONITOR_STATUS_PREPARATION = new QLineEdit(GB_MONITOR);
        LE_MONITOR_STATUS_PREPARATION->setObjectName(QString::fromUtf8("LE_MONITOR_STATUS_PREPARATION"));
        LE_MONITOR_STATUS_PREPARATION->setGeometry(QRect(140, 470, 101, 51));
        LE_MONITOR_STATUS_PREPARATION->setAlignment(Qt::AlignCenter);
        LE_MONITOR_STATUS_PREPARATION->setReadOnly(true);
        LE_MONITOR_STATUS_MAINTENANCE = new QLineEdit(GB_MONITOR);
        LE_MONITOR_STATUS_MAINTENANCE->setObjectName(QString::fromUtf8("LE_MONITOR_STATUS_MAINTENANCE"));
        LE_MONITOR_STATUS_MAINTENANCE->setGeometry(QRect(260, 470, 101, 51));
        LE_MONITOR_STATUS_MAINTENANCE->setAlignment(Qt::AlignCenter);
        LE_MONITOR_STATUS_MAINTENANCE->setReadOnly(true);
        LE_MONITOR_STATUS_ERROR = new QLineEdit(GB_MONITOR);
        LE_MONITOR_STATUS_ERROR->setObjectName(QString::fromUtf8("LE_MONITOR_STATUS_ERROR"));
        LE_MONITOR_STATUS_ERROR->setGeometry(QRect(480, 470, 101, 51));
        LE_MONITOR_STATUS_ERROR->setAlignment(Qt::AlignCenter);
        LE_MONITOR_STATUS_ERROR->setReadOnly(true);
        LE_MONITOR_STATUS_MESSAGE = new QLineEdit(GB_MONITOR);
        LE_MONITOR_STATUS_MESSAGE->setObjectName(QString::fromUtf8("LE_MONITOR_STATUS_MESSAGE"));
        LE_MONITOR_STATUS_MESSAGE->setGeometry(QRect(20, 540, 561, 31));
        LE_MONITOR_STATUS_MESSAGE->setFont(font1);
        LE_MONITOR_STATUS_MESSAGE->setAlignment(Qt::AlignCenter);
        LE_MONITOR_STATUS_MESSAGE->setReadOnly(true);
        label_113 = new QLabel(GB_MONITOR);
        label_113->setObjectName(QString::fromUtf8("label_113"));
        label_113->setGeometry(QRect(20, 70, 141, 31));
        label_113->setFont(font2);
        label_113->setAlignment(Qt::AlignCenter);

        retranslateUi(DialogMonitor);

        QMetaObject::connectSlotsByName(DialogMonitor);
    } // setupUi

    void retranslateUi(QDialog *DialogMonitor)
    {
        DialogMonitor->setWindowTitle(QApplication::translate("DialogMonitor", "Dialog", nullptr));
        GB_MONITOR->setTitle(QApplication::translate("DialogMonitor", "\355\230\204\355\231\251\355\214\220", nullptr));
        label_111->setText(QApplication::translate("DialogMonitor", "\353\214\200\352\270\260\354\244\221 \354\235\214\353\243\214 \353\246\254\354\212\244\355\212\270", nullptr));
        label_112->setText(QApplication::translate("DialogMonitor", "\354\240\234\354\241\260\354\231\204\353\243\214 \354\235\214\353\243\214 \353\246\254\354\212\244\355\212\270", nullptr));
        CB_FORCE_MONITOR_STATUS->setText(QApplication::translate("DialogMonitor", "\355\230\204\355\231\251\355\214\220 \352\260\225\354\240\234 \354\240\201\354\232\251", nullptr));
        BTN_FORCE_OPERATION->setText(QApplication::translate("DialogMonitor", "\354\232\264\354\230\201\354\244\221", nullptr));
        BTN_FORCE_MAINTENANCE->setText(QApplication::translate("DialogMonitor", "\354\240\225\353\271\204\354\244\221", nullptr));
        BTN_FORCE_PREPARATION->setText(QApplication::translate("DialogMonitor", "\354\244\200\353\271\204\354\244\221", nullptr));
        BTN_FORCE_ERROR->setText(QApplication::translate("DialogMonitor", "\354\227\220\353\237\254\353\260\234\354\203\235", nullptr));
        LE_FORCE_MSG->setText(QApplication::translate("DialogMonitor", "\354\225\210\353\205\225\355\225\230\354\204\270\354\232\224", nullptr));
        BTN_FORCE_CLEAR_WAITING_LIST->setText(QApplication::translate("DialogMonitor", "\353\214\200\352\270\260 \354\235\214\353\243\214 \353\246\254\354\212\244\355\212\270 \355\201\264\353\246\254\354\226\264", nullptr));
        BTN_FORCE_CLEAR_COMPLETED_LIST->setText(QApplication::translate("DialogMonitor", "\354\231\204\353\243\214 \354\235\214\353\243\214 \353\246\254\354\212\244\355\212\270 \355\201\264\353\246\254\354\226\264", nullptr));
        CB_FORCE_CLEAR_DRINKS->setText(QApplication::translate("DialogMonitor", "\354\243\274\353\254\270 \354\235\214\353\243\214 \355\201\264\353\246\254\354\226\264 \355\227\210\354\232\251", nullptr));
        LE_MONITOR_STATUS_OPERATION->setText(QApplication::translate("DialogMonitor", "\354\232\264\354\230\201\354\244\221", nullptr));
        LE_MONITOR_STATUS_PREPARATION->setText(QApplication::translate("DialogMonitor", "\354\244\200\353\271\204\354\244\221", nullptr));
        LE_MONITOR_STATUS_MAINTENANCE->setText(QApplication::translate("DialogMonitor", "\354\240\225\353\271\204\354\244\221", nullptr));
        LE_MONITOR_STATUS_ERROR->setText(QApplication::translate("DialogMonitor", "\354\227\220\353\237\254\353\260\234\354\203\235", nullptr));
        LE_MONITOR_STATUS_MESSAGE->setText(QApplication::translate("DialogMonitor", "aa", nullptr));
        label_113->setText(QApplication::translate("DialogMonitor", "\354\236\245\354\271\230 \354\227\260\352\262\260 \354\203\201\355\203\234", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DialogMonitor: public Ui_DialogMonitor {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOGMONITOR_H
