#ifndef DIALOGOUTLET_H
#define DIALOGOUTLET_H

#include <QDialog>
#include <QTimer>

#include <QtSql/QSql>
#include <QtSql/QSqlDatabase>
#include <QtSql/QSqlQuery>

#include "GlobalHeader.h"


#define OUTLET_SPIN     0
#define OUTLET_DOOR     1

#define OUTLET_SONAR_SENSOR_THRESHOLD   12


#define POSITION_ERROR_PULSE_SPIN   300
#define POSITION_ERROR_PULSE_DOOR   300


#define MOTOR_JAM_ERROR(x)      ((x>>2)&0x01)
#define MOTOR_CUR_ERROR(x)      ((x>>3)&0x01)
#define MOTOR_BIG_ERROR(x)      ((x>>4)&0x01)
#define MOTOR_INP_ERROR(x)      ((x>>5)&0x01)
#define MOTOR_COL_ERROR(x)      ((x>>7)&0x01)

#define DOOR_HANDLER_LOOP_TIME      100


enum{
    OUTLET_INIT_IDLE = 0,
    OUTLET_INIT_START,
    OUTLET_INIT_CHECK_DOOR_SHUT,
    OUTLET_INIT_CHECK_DRINK_EXIST,
    OUTLET_INIT_DONE,
};



namespace Ui {
class DialogOutlet;
}

class DialogOutlet : public QDialog
{
    Q_OBJECT

public:
    explicit DialogOutlet(QWidget *parent = nullptr);
    ~DialogOutlet();



    void InitOutletHandler();

    bool isError(int id_cell);
    void ErrorClear();



    int OUTLET_DISABLE[NUMBER_OF_OUTLET];
    int init_state[NUMBER_OF_OUTLET];
    int is_ready[NUMBER_OF_OUTLET];

    int     GetFreeCellInfo();

    void    SetCellWorking(int id_cell, bool is_working);
    bool    IsCellWorking(int id_cell);
    void    SetCellOccupancy(int id_cell, int occupancy, QString pin);


    int IsDrinkExist(int id_cell);
    int IsDoorClosed(int id_cell);
    int IsDoorLocked(int id_cell);

    void UnlockDoor(int id_cell);
    void LockDoor(int id_cell);

    void OpenOutlet(int id_cell);


    int IsOutletFull();

    void CheckFatalError();

    int FATAL_INFO_CONNECTION_ERROR;
    int SUPER_FATAL_ERROR_OUTLET_CONNECTION;


public slots:
    void onTimer();

private slots:
    void on_BTN_ENABLE_MODULE_1_clicked();
    void on_BTN_ENABLE_MODULE_2_clicked();
    void on_BTN_ENABLE_MODULE_3_clicked();
    void on_BTN_ENABLE_MODULE_4_clicked();
    void on_BTN_ENABLE_MODULE_5_clicked();

    void on_BTN_OUTLET_DISPENSE_1_clicked();
    void on_BTN_OUTLET_DISPENSE_2_clicked();
    void on_BTN_OUTLET_DISPENSE_3_clicked();
    void on_BTN_OUTLET_DISPENSE_4_clicked();
    void on_BTN_OUTLET_DISPENSE_5_clicked();



private:
    Ui::DialogOutlet *ui;
    QTimer timer;

    QSqlDatabase    db;

};

#endif // DIALOGOUTLET_H
