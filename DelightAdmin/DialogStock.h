#ifndef DIALOGSTOCK_H
#define DIALOGSTOCK_H

#include <QDialog>
#include <QTimer>

#include <QtSql/QSql>
#include <QtSql/QSqlDatabase>
#include <QtSql/QSqlQuery>

#include <QDebug>
#include "GlobalHeader.h"



#define DB_NAME_RECIPE  "DB/recipe"

#define MILK_APPROXIMATION_USE_AMOUNT       200


namespace Ui {
class DialogStock;
}

class DialogStock : public QDialog
{
    Q_OBJECT

public:
    explicit DialogStock(QWidget *parent = nullptr);
    ~DialogStock();

    void LoadDatabase();
    void SetUIForm();
    void UpdateUI();


    void UseStock(QString stock_name, int amount);
    void UpdateStock(QString stock_name);
    void SetStock(QString stock_name, int amount);

    int GetStock(QString stock_name);
    void FillFull(QString stock_name);
    void FillHalf(QString stock_name);

    void SetDeviceError(QString stock_name);
    void ClearDeviceError(QString stock_name);
    int IsDeviceError(QString stock_name);

    void UpdateWaitingTime();
    void UpdateStockReserved();
    void UpdateMenuAvailable();

    bool IsMenuOptionAvailable(QString menu_id);


    QMap<QString, QString> coffee_key_btn;
    QMap<QString, QString> coffee_desc_btn;

    QMap<QString, ST_STOCK> stock;
    QMap<QString, ST_MENU>  menu;
    QMap<QString, V_RECIPE> recipe;


    int ApproximateWaitingTime;


    int MILK_DISABLE;
    int ICE_1_DISABLE;
    int ICE_2_DISABLE;
    int HOT_1_DISABLE;
    int HOT_2_DISABLE;
    int SODA_1_DISABLE;
    int SODA_2_DISABLE;
    int COFFEE_DISABLE;

public slots:
    void onTimer();

private slots:
    void on_BTN_CUP_HALF_1_clicked();

    void on_BTN_CUP_FULL_1_clicked();

    void on_BTN_CUP_HALF_2_clicked();

    void on_BTN_CUP_FULL_2_clicked();

    void on_BTN_CUP_HALF_3_clicked();

    void on_BTN_CUP_FULL_3_clicked();

    void on_BTN_CUP_HALF_4_clicked();

    void on_BTN_CUP_FULL_4_clicked();


    void on_BTN_SAUCE_REPLACE_1_clicked();

    void on_BTN_SAUCE_REPLACE_2_clicked();

    void on_BTN_SAUCE_REPLACE_3_clicked();

    void on_BTN_SAUCE_REPLACE_4_clicked();

    void on_BTN_SAUCE_REPLACE_5_clicked();

    void on_BTN_SAUCE_REPLACE_6_clicked();

    void on_BTN_SAUCE_REPLACE_7_clicked();

    void on_BTN_SAUCE_REPLACE_8_clicked();

    void on_BTN_SAUCE_REPLACE_9_clicked();

    void on_BTN_SAUCE_REPLACE_10_clicked();

    void on_BTN_SET_STOCK_MANUAL_clicked();

    void on_BTN_DB_RELOAD_clicked();

    void on_BTN_MILK_USE_clicked();

    void on_BTN_MILK_NO_USE_clicked();

    void on_PB_SAUCE_5_valueChanged(int value);

    void on_BTN_ENABLE_MILK_clicked();

    void on_BTN_ENABLE_ICE_1_clicked();

    void on_BTN_ENABLE_ICE_2_clicked();

    void on_BTN_ENABLE_HOT_1_clicked();

    void on_BTN_ENABLE_HOT_2_clicked();

    void on_BTN_ENABLE_COFFEE_clicked();

    void on_BTN_ENABLE_SODA_1_clicked();

    void on_BTN_ENABLE_SODA_2_clicked();

private:
    Ui::DialogStock *ui;
    QTimer   timer;

    QSqlDatabase    db;

};

#endif // DIALOGSTOCK_H
