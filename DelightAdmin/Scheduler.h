#ifndef SCHEDULER_H
#define SCHEDULER_H

#include <QObject>
#include <QTimer>

#include "DialogCupDispenser.h"
#include "DialogIceDispenser.h"
#include "DialogCoffee.h"
#include "DialogRobot.h"
#include "DialogMonitor.h"
#include "DialogDoor.h"
#include "DialogBarcode.h"
#include "DialogOutlet.h"
#include "DialogHotDispenser.h"
#include "displaydialog.h"
#include "DialogKiosk.h"
#include "DialogStock.h"


#include "GlobalHeader.h"

enum{
    ACTION_STATE_IDLE = 0,
    ACTION_STATE_INIT,

    ACTION_STATE_GET_ORDER,
    ACTION_STATE_MAKING_PROCESS,


    ACTION_STATE_CUP_READY,
    ACTION_STATE_CUP_PLACE,
    ACTION_STATE_CUP_DISPENSE,
    ACTION_STATE_CUP_CHECK_IF_DISPENSED,
    ACTION_STATE_CUP_BACK_TO_READY,
    ACTION_STATE_CUP_REPOSITIONING,
    ACTION_STATE_CUP_ISSUE_CALL_MANAGER,
    ACTION_STATE_CUP_ISSUE_CALL_MANAGER_MOTION_WAIT,
    ACTION_STATE_CUP_GET,
    ACTION_STATE_CUP_ERROR,
    ACTION_STATE_CUP_RECOVER,



    ACTION_STATE_ICE_READY,
    ACTION_STATE_ICE_PLACE,
    ACTION_STATE_ICE_DISPENSE,
    ACTION_STATE_ICE_WAIT_DISPENSE_DONE,
    ACTION_STATE_ICE_GET,




    ACTION_STATE_MILK_READY,

    ACTION_STATE_COFFEE_READY,
    ACTION_STATE_COFFEE_RINSE,
    ACTION_STATE_COFFEE_RINSE_WAIT,
    ACTION_STATE_COFFEE_PLACE,
    ACTION_STATE_COFFEE_DISPENSE,
    ACTION_STATE_COFFEE_WAIT_DISPENSE_DONE,
    ACTION_STATE_COFFEE_SHOT_OPTION_DISPENSE,
    ACTION_STATE_COFFEE_GET,



    ACTION_STATE_HOT_READY,
    ACTION_STATE_HOT_PLACE,
    ACTION_STATE_HOT_DISPENSE,
    ACTION_STATE_HOT_WAIT_DISPENSE_DONE,
    ACTION_STATE_HOT_GET,




    ACTION_STATE_SAUCE_READY,
    ACTION_STATE_SAUCE_PLACE,
    ACTION_STATE_SAUCE_DISPENSE,
    ACTION_STATE_SAUCE_GET,




    ACTION_STATE_OUTLET_READY,
    ACTION_STATE_OUTLET_MOVE_TO_MODULE,
    ACTION_STATE_OUTLET_CUP_PLACE,
    ACTION_STATE_OUTLET_DISPENSE_COMPLETED,
    ACTION_STATE_OUTLET_GET,

    ACTION_STATE_DRINK_DISPOSAL_READY,
    ACTION_STATE_DRINK_DISPOSAL_TAKE_BACK,
    ACTION_STATE_DRINK_DISPOSAL_PLACEMENT,
    ACTION_STATE_DRINK_DISPOSAL_DONE,

    ACTION_STATE_MOTION_READY,
    ACTION_STATE_MOTION_START,
    ACTION_STATE_MOTION_DONE,


    // 대기시간 중 인사 모션 관련
    ACTION_STATE_GREETING_READY,
    ACTION_STATE_GREETING_START,
    ACTION_STATE_GREETING_DONE,

};

enum{
    OUTLET_MODULE_IDLE = 0,
    OUTLET_MODULE_READY,
    OUTLET_MODULE_DOOR_OPEN,
    OUTLET_MODULE_DOOR_WAIT_IN_OPEN,
    OUTLET_MODULE_WAIT_DRINK_REMOVED,
    OUTLET_MODULE_TRY_DOOR_CLOSE,
    OUTLET_MODULE_CHECK_DOOR_CLOSED,
    OUTLET_MODULE_CHECK_CELL_OCC,
    OUTLET_MODULE_COMPLETED,
};



class Scheduler : QObject
{
    Q_OBJECT
public:
    Scheduler(DialogStock *_stock, DialogRobot *_robot, DialogCupDispenser *_cup, DialogHotDispenser *_hot,
              DialogCoffee *_coffee, DialogIceDispenser *_ice,
              DialogOutlet *_outlet,
              DialogBarcode *_barcode, DisplayDialog *display);


    int action_state;
    int outlet_state[NUMBER_OF_OUTLET];

    QString keymotion;

    QVector<ST_RECIPE_INFO> list_waiting;
    QVector<ST_RECIPE_INFO> list_inprogress;
    V_RECIPE                recipe_inprogress;
    ST_RECIPE_STEP          current_recipe_step;
    ST_RECIPE_INFO          prev_made_drink;



    QVector<ST_COMPLETED_DRINK_INFO>    list_completed;
    ST_COMPLETED_DRINK_INFO             list_dispensing[NUMBER_OF_OUTLET];
    int     outlet_cell_info;

    int get_waiting_size();
    int get_complete_size();

    int last_order_flag;
    int recall_order_flag;
    int recall_inprogressing_order_flag;

    int IsIdle();
    void SetForcedDispensing(int id_cell);

    void ClearWaitingList();
    void ClearCompletedList();

    void remove_inprogress_list();
    void remove_waiting_list(int index);


    void SetRecallOrderFlag();
    void SetRecallInprogressingOrderFlag();


public slots:
    void onTimer();

private:
    QTimer  timer;

    DialogStock         *stock;
    DialogRobot         *robot;
    DialogCupDispenser  *cup;
    DialogHotDispenser  *hot;
    DialogCoffee        *coffee;
    DialogIceDispenser  *ice;
    DialogOutlet        *outlet;
    DialogBarcode       *barcode;
    DialogMonitor       *monitor;
    DisplayDialog       *display;


};

#endif // SCHEDULER_H
