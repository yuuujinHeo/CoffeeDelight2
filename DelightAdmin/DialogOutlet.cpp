#include "DialogOutlet.h"
#include "ui_DialogOutlet.h"
#include "RBLAN2CAN.h"
#include <QMessageBox>
#include "Scheduler.h"

extern Scheduler *pschedule;
extern Logger *plog;
extern RBLAN2CAN *plan;

DialogOutlet::DialogOutlet(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::DialogOutlet)
{
    ui->setupUi(this);


    for(int i=0; i<NUMBER_OF_OUTLET; i++){
        OUTLET_DISABLE[i] = 0;
    }


    FATAL_INFO_CONNECTION_ERROR = 0;
    SUPER_FATAL_ERROR_OUTLET_CONNECTION = 0;


    connect(&timer, SIGNAL(timeout()), this, SLOT(onTimer()));
    timer.start(DOOR_HANDLER_LOOP_TIME);
}

DialogOutlet::~DialogOutlet()
{
    delete ui;
}

void DialogOutlet::CheckFatalError(){

    // FATAL INFORMATION=============================================
    // connection error
    if(OUTLET_DATA.connection_status == 0){
        if(FATAL_INFO_CONNECTION_ERROR == 0)
            plog->write("[OUTLET] ERROR : Disconnected 1");
        FATAL_INFO_CONNECTION_ERROR = 1;
    }else{
        FATAL_INFO_CONNECTION_ERROR = 0;
    }



    // FATAL ERROR ===================================================
    if(OP_STATUS_OPERATING == PLATFORM_OPERATION_ON_OPERATING_STATE){
        if(FATAL_INFO_CONNECTION_ERROR == 1){
            SUPER_FATAL_ERROR_OUTLET_CONNECTION = 1;
        }
    }
}



void DialogOutlet::onTimer(){
    if(IS_UI_LOCK){
        ui->GB_OUTLET->setEnabled(false);
    }else{
        ui->GB_OUTLET->setEnabled(true);
    }

    InitOutletHandler();


    if(plan->sockConnectionStatus == false){
        SetLEColor(ui->LE_OUTLET_CONNECTION, COLOR_UNDETERMINED);

        SetLEColor(ui->LE_OUTLET_DOOR_OPEN_1, COLOR_UNDETERMINED);
        SetLEColor(ui->LE_OUTLET_DOOR_OPEN_2, COLOR_UNDETERMINED);
        SetLEColor(ui->LE_OUTLET_DOOR_OPEN_3, COLOR_UNDETERMINED);
        SetLEColor(ui->LE_OUTLET_DOOR_OPEN_4, COLOR_UNDETERMINED);
        SetLEColor(ui->LE_OUTLET_DOOR_OPEN_5, COLOR_UNDETERMINED);
        SetLEColor(ui->LE_OUTLET_DOOR_LOCK_1, COLOR_UNDETERMINED);
        SetLEColor(ui->LE_OUTLET_DOOR_LOCK_2, COLOR_UNDETERMINED);
        SetLEColor(ui->LE_OUTLET_DOOR_LOCK_3, COLOR_UNDETERMINED);
        SetLEColor(ui->LE_OUTLET_DOOR_LOCK_4, COLOR_UNDETERMINED);
        SetLEColor(ui->LE_OUTLET_DOOR_LOCK_5, COLOR_UNDETERMINED);
        SetLEColor(ui->LE_OUTLET_CUP_DETECT_1, COLOR_UNDETERMINED);
        SetLEColor(ui->LE_OUTLET_CUP_DETECT_2, COLOR_UNDETERMINED);
        SetLEColor(ui->LE_OUTLET_CUP_DETECT_3, COLOR_UNDETERMINED);
        SetLEColor(ui->LE_OUTLET_CUP_DETECT_4, COLOR_UNDETERMINED);
        SetLEColor(ui->LE_OUTLET_CUP_DETECT_5, COLOR_UNDETERMINED);
        ui->LE_OUTLET_PIN_1->setText("-");
        ui->LE_OUTLET_PIN_2->setText("-");
        ui->LE_OUTLET_PIN_3->setText("-");
        ui->LE_OUTLET_PIN_4->setText("-");
        ui->LE_OUTLET_PIN_5->setText("-");
    }else{
        CheckFatalError();

        if(OUTLET_DATA.connection_status == 1){
            SetLEColor(ui->LE_OUTLET_CONNECTION, COLOR_GOOD);

            if(OUTLET_DATA.is_drink_sensor_on[0] == true){
                SetLEColor(ui->LE_OUTLET_CUP_DETECT_1, COLOR_BLUE);
            }else{
                SetLEColor(ui->LE_OUTLET_CUP_DETECT_1, COLOR_NONE);
            }
            if(OUTLET_DATA.is_drink_sensor_on[1] == true){
                SetLEColor(ui->LE_OUTLET_CUP_DETECT_2, COLOR_BLUE);
            }else{
                SetLEColor(ui->LE_OUTLET_CUP_DETECT_2, COLOR_NONE);
            }
            if(OUTLET_DATA.is_drink_sensor_on[2] == true){
                SetLEColor(ui->LE_OUTLET_CUP_DETECT_3, COLOR_BLUE);
            }else{
                SetLEColor(ui->LE_OUTLET_CUP_DETECT_3, COLOR_NONE);
            }
            if(OUTLET_DATA.is_drink_sensor_on[3] == true){
                SetLEColor(ui->LE_OUTLET_CUP_DETECT_4, COLOR_BLUE);
            }else{
                SetLEColor(ui->LE_OUTLET_CUP_DETECT_4, COLOR_NONE);
            }
            if(OUTLET_DATA.is_drink_sensor_on[4] == true){
                SetLEColor(ui->LE_OUTLET_CUP_DETECT_5, COLOR_BLUE);
            }else{
                SetLEColor(ui->LE_OUTLET_CUP_DETECT_5, COLOR_NONE);
            }

            if(OUTLET_DATA.state[0] != ODS_IDLE){
                SetLEColor(ui->LE_OUTLET_DOOR_OPEN_1, COLOR_BLUE);
            }else{
                SetLEColor(ui->LE_OUTLET_DOOR_OPEN_1, COLOR_NONE);
            }
            if(OUTLET_DATA.state[1] != ODS_IDLE){
                SetLEColor(ui->LE_OUTLET_DOOR_OPEN_2, COLOR_BLUE);
            }else{
                SetLEColor(ui->LE_OUTLET_DOOR_OPEN_2, COLOR_NONE);
            }
            if(OUTLET_DATA.state[2] != ODS_IDLE){
                SetLEColor(ui->LE_OUTLET_DOOR_OPEN_3, COLOR_BLUE);
            }else{
                SetLEColor(ui->LE_OUTLET_DOOR_OPEN_3, COLOR_NONE);
            }
            if(OUTLET_DATA.state[3] != ODS_IDLE){
                SetLEColor(ui->LE_OUTLET_DOOR_OPEN_4, COLOR_BLUE);
            }else{
                SetLEColor(ui->LE_OUTLET_DOOR_OPEN_4, COLOR_NONE);
            }
            if(OUTLET_DATA.state[4] != ODS_IDLE){
                SetLEColor(ui->LE_OUTLET_DOOR_OPEN_5, COLOR_BLUE);
            }else{
                SetLEColor(ui->LE_OUTLET_DOOR_OPEN_5, COLOR_NONE);
            }

            if(OUTLET_DATA.is_locked[0] == true){
                SetLEColor(ui->LE_OUTLET_DOOR_LOCK_1, COLOR_BLUE);
            }else{
                SetLEColor(ui->LE_OUTLET_DOOR_LOCK_1, COLOR_NONE);
            }
            if(OUTLET_DATA.is_locked[1] == true){
                SetLEColor(ui->LE_OUTLET_DOOR_LOCK_2, COLOR_BLUE);
            }else{
                SetLEColor(ui->LE_OUTLET_DOOR_LOCK_2, COLOR_NONE);
            }
            if(OUTLET_DATA.is_locked[2] == true){
                SetLEColor(ui->LE_OUTLET_DOOR_LOCK_3, COLOR_BLUE);
            }else{
                SetLEColor(ui->LE_OUTLET_DOOR_LOCK_3, COLOR_NONE);
            }
            if(OUTLET_DATA.is_locked[3] == true){
                SetLEColor(ui->LE_OUTLET_DOOR_LOCK_4, COLOR_BLUE);
            }else{
                SetLEColor(ui->LE_OUTLET_DOOR_LOCK_4, COLOR_NONE);
            }
            if(OUTLET_DATA.is_locked[4] == true){
                SetLEColor(ui->LE_OUTLET_DOOR_LOCK_5, COLOR_BLUE);
            }else{
                SetLEColor(ui->LE_OUTLET_DOOR_LOCK_5, COLOR_NONE);
            }

            if(OUTLET_DATA.cell_state[0] == CELL_OCC){
                ui->LE_OUTLET_PIN_1->setText(OUTLET_DATA.cell_occupy_pin[0]);
            }else{
                ui->LE_OUTLET_PIN_1->setText("-");
            }
            if(OUTLET_DATA.cell_state[1] == CELL_OCC){
                ui->LE_OUTLET_PIN_2->setText(OUTLET_DATA.cell_occupy_pin[1]);
            }else{
                ui->LE_OUTLET_PIN_2->setText("-");
            }
            if(OUTLET_DATA.cell_state[2] == CELL_OCC){
                ui->LE_OUTLET_PIN_3->setText(OUTLET_DATA.cell_occupy_pin[2]);
            }else{
                ui->LE_OUTLET_PIN_3->setText("-");
            }
            if(OUTLET_DATA.cell_state[3] == CELL_OCC){
                ui->LE_OUTLET_PIN_4->setText(OUTLET_DATA.cell_occupy_pin[3]);
            }else{
                ui->LE_OUTLET_PIN_4->setText("-");
            }
            if(OUTLET_DATA.cell_state[4] == CELL_OCC){
                ui->LE_OUTLET_PIN_5->setText(OUTLET_DATA.cell_occupy_pin[4]);
            }else{
                ui->LE_OUTLET_PIN_5->setText("-");
            }
        }else{
            SetLEColor(ui->LE_OUTLET_CONNECTION, COLOR_BAD);

            SetLEColor(ui->LE_OUTLET_DOOR_OPEN_1, COLOR_UNDETERMINED);
            SetLEColor(ui->LE_OUTLET_DOOR_OPEN_2, COLOR_UNDETERMINED);
            SetLEColor(ui->LE_OUTLET_DOOR_OPEN_3, COLOR_UNDETERMINED);
            SetLEColor(ui->LE_OUTLET_DOOR_OPEN_4, COLOR_UNDETERMINED);
            SetLEColor(ui->LE_OUTLET_DOOR_OPEN_5, COLOR_UNDETERMINED);
            SetLEColor(ui->LE_OUTLET_DOOR_LOCK_1, COLOR_UNDETERMINED);
            SetLEColor(ui->LE_OUTLET_DOOR_LOCK_2, COLOR_UNDETERMINED);
            SetLEColor(ui->LE_OUTLET_DOOR_LOCK_3, COLOR_UNDETERMINED);
            SetLEColor(ui->LE_OUTLET_DOOR_LOCK_4, COLOR_UNDETERMINED);
            SetLEColor(ui->LE_OUTLET_DOOR_LOCK_5, COLOR_UNDETERMINED);
            SetLEColor(ui->LE_OUTLET_CUP_DETECT_1, COLOR_UNDETERMINED);
            SetLEColor(ui->LE_OUTLET_CUP_DETECT_2, COLOR_UNDETERMINED);
            SetLEColor(ui->LE_OUTLET_CUP_DETECT_3, COLOR_UNDETERMINED);
            SetLEColor(ui->LE_OUTLET_CUP_DETECT_4, COLOR_UNDETERMINED);
            SetLEColor(ui->LE_OUTLET_CUP_DETECT_5, COLOR_UNDETERMINED);
            ui->LE_OUTLET_PIN_1->setText("-");
            ui->LE_OUTLET_PIN_2->setText("-");
            ui->LE_OUTLET_PIN_3->setText("-");
            ui->LE_OUTLET_PIN_4->setText("-");
            ui->LE_OUTLET_PIN_5->setText("-");
        }

    }

    if(OUTLET_DISABLE[0] == 1){
        SetBTNColor(ui->BTN_ENABLE_MODULE_1,COLOR_BAD);
        ui->BTN_ENABLE_MODULE_1->setText("사용안함");
    }else{
        SetBTNColor(ui->BTN_ENABLE_MODULE_1,COLOR_GOOD);
        ui->BTN_ENABLE_MODULE_1->setText("사용중");
    }

    if(OUTLET_DISABLE[1] == 1){
        SetBTNColor(ui->BTN_ENABLE_MODULE_2,COLOR_BAD);
        ui->BTN_ENABLE_MODULE_2->setText("사용안함");
    }else{
        SetBTNColor(ui->BTN_ENABLE_MODULE_2,COLOR_GOOD);
        ui->BTN_ENABLE_MODULE_2->setText("사용중");
    }

    if(OUTLET_DISABLE[2] == 1){
        SetBTNColor(ui->BTN_ENABLE_MODULE_3,COLOR_BAD);
        ui->BTN_ENABLE_MODULE_3->setText("사용안함");
    }else{
        SetBTNColor(ui->BTN_ENABLE_MODULE_3,COLOR_GOOD);
        ui->BTN_ENABLE_MODULE_3->setText("사용중");
    }

    if(OUTLET_DISABLE[3] == 1){
        SetBTNColor(ui->BTN_ENABLE_MODULE_4,COLOR_BAD);
        ui->BTN_ENABLE_MODULE_4->setText("사용안함");
    }else{
        SetBTNColor(ui->BTN_ENABLE_MODULE_4,COLOR_GOOD);
        ui->BTN_ENABLE_MODULE_4->setText("사용중");
    }

    if(OUTLET_DISABLE[4] == 1){
        SetBTNColor(ui->BTN_ENABLE_MODULE_5,COLOR_BAD);
        ui->BTN_ENABLE_MODULE_5->setText("사용안함");
    }else{
        SetBTNColor(ui->BTN_ENABLE_MODULE_5,COLOR_GOOD);
        ui->BTN_ENABLE_MODULE_5->setText("사용중");
    }
}



void DialogOutlet::InitOutletHandler(){
    static int try_num[NUMBER_OF_OUTLET] = {0,};

    for(int i=0; i<NUMBER_OF_OUTLET; i++){
        if(OUTLET_DISABLE[i] == 1){
            continue;
        }

        switch(init_state[i]){
        case OUTLET_INIT_IDLE:
            break;

        case OUTLET_INIT_START:
            plog->write("[OUTLET] INIT PROCESS : START");
            is_ready[i] = 0;
            try_num[i] = 10;
            OpenOutlet(i);
            init_state[i] = OUTLET_INIT_CHECK_DOOR_SHUT;
            break;

        case OUTLET_INIT_CHECK_DOOR_SHUT:
            if(try_num[i]-- > 0)
                break;
//            plog->write("[OUTLET] INIT PROCESS : CHECK DOOR SHUT");
            if(IsDoorLocked(i) == true && IsDoorClosed(i) == true){
                init_state[i] = OUTLET_INIT_CHECK_DRINK_EXIST;
            }
            break;

        case OUTLET_INIT_CHECK_DRINK_EXIST:
            plog->write("[OUTLET] INIT PROCESS : CHECK DRINK EXIST");
            if(IsDrinkExist(i) == true){
                SetCellOccupancy(i, CELL_OCC, "???");
            }
            init_state[i] = OUTLET_INIT_DONE;
            break;

        case OUTLET_INIT_DONE:
            plog->write("[OUTLET] INIT PROCESS : SUCCESS "+QString().sprintf("%d",i));
            init_state[i] = OUTLET_INIT_IDLE;
            is_ready[i] = 1;
            break;

        default:
            break;
        }
    }
}

bool DialogOutlet::isError(int id_cell){
    return false;
}

void DialogOutlet::ErrorClear(){
    SUPER_FATAL_ERROR_OUTLET_CONNECTION = 0;
}


int DialogOutlet::IsOutletFull(){
    int count = 0;
    for(int i=0; i<NUMBER_OF_OUTLET; i++){
        if(OUTLET_DATA.cell_state[i] == CELL_OCC){
            count++;
        }
    }
    if(count >= (NUMBER_OF_OUTLET-1)){ // one cell for shelve drink out
        return true;
    }else{
        return false;
    }
}

int DialogOutlet::GetFreeCellInfo(){
    static unsigned int cnt = 0;

    int outlet_cell_info = -1;

    for(int i=0; i<NUMBER_OF_OUTLET; i++){
        int index = (cnt+i)%NUMBER_OF_OUTLET;
        if(OUTLET_DISABLE[index] == 0 && OUTLET_DATA.is_working[index] == false){
            if(OUTLET_DATA.cell_state[index] == CELL_EMP){
                outlet_cell_info = index;
                cnt++;
                return outlet_cell_info;
            }
        }
    }
    return outlet_cell_info;
}

void DialogOutlet::SetCellWorking(int id_cell, bool is_working){
    OUTLET_DATA.is_working[id_cell] = is_working;
}
bool DialogOutlet::IsCellWorking(int id_cell){
    return OUTLET_DATA.is_working[id_cell];
}

void DialogOutlet::SetCellOccupancy(int id_cell, int occupancy, QString pin){
    OUTLET_DATA.cell_state[id_cell] = occupancy;
    OUTLET_DATA.cell_occupy_pin[id_cell] = pin;
}


int DialogOutlet::IsDrinkExist(int id_cell){
    return OUTLET_DATA.is_drink_sensor_on[id_cell];
}
int DialogOutlet::IsDoorClosed(int id_cell){
    return (OUTLET_DATA.state[id_cell] == ODS_IDLE);
}
int DialogOutlet::IsDoorLocked(int id_cell){
    return OUTLET_DATA.is_locked[id_cell];
}

void DialogOutlet::UnlockDoor(int id_cell){
    // DO OPEN DOOR
}
void DialogOutlet::LockDoor(int id_cell){

}

void DialogOutlet::OpenOutlet(int id_cell){
    plan->SendControlData(DEV_SEND_ID_OUTLET, id_cell, 0x00, 0, 0);
}



void DialogOutlet::on_BTN_OUTLET_DISPENSE_1_clicked(){
    if(IsCellWorking(0)){
        qDebug()<<"Module is reserved";
    }else{
        pschedule->SetForcedDispensing(0);
    }
    plog->write("[UI OPERATION - OUTLET] 음료 배출 1");
}

void DialogOutlet::on_BTN_OUTLET_DISPENSE_2_clicked(){
    if(IsCellWorking(1)){
        qDebug()<<"Module is reserved";
    }else{
        pschedule->SetForcedDispensing(1);
    }
    plog->write("[UI OPERATION - OUTLET] 음료 배출 2");
}

void DialogOutlet::on_BTN_OUTLET_DISPENSE_3_clicked(){
    if(IsCellWorking(2)){
        qDebug()<<"Module is reserved";
    }else{
        pschedule->SetForcedDispensing(2);
    }
    plog->write("[UI OPERATION - OUTLET] 음료 배출 3");
}

void DialogOutlet::on_BTN_OUTLET_DISPENSE_4_clicked(){
    if(IsCellWorking(3)){
        qDebug()<<"Module is reserved";
    }else{
        pschedule->SetForcedDispensing(3);
    }
    plog->write("[UI OPERATION - OUTLET] 음료 배출 4");
}

void DialogOutlet::on_BTN_OUTLET_DISPENSE_5_clicked(){
    if(IsCellWorking(4)){
        qDebug()<<"Module is reserved";
    }else{
        pschedule->SetForcedDispensing(4);
    }
    plog->write("[UI OPERATION - OUTLET] 음료 배출 5");
}



void DialogOutlet::on_BTN_ENABLE_MODULE_1_clicked()
{
    if(OUTLET_DISABLE[0] == 0){
        QMessageBox::StandardButton reply;
        reply = QMessageBox::question(this, "배출구 1 비활성화",
                                          "<font size=6>배출구를 비활성화 하시겠습니까?</font>");
        if(reply == QMessageBox::Yes){
            if(OP_STATUS_OPERATING == PLATFORM_OPERATION_ON_OPERATING_STATE){
                QMessageBox::warning(this, "비활성화 실패", "<font size=4>운영 종료 후 다시 시도해 주시기 바랍니다.</font>");
            }else{
                OUTLET_DISABLE[0] = 1;
                plog->write("[UI OUTLET] DISABLE OUTLET 1 clicked");
            }
        }
    }else{
        QMessageBox::StandardButton reply;
        reply = QMessageBox::question(this, "배출구 1 활성화",
                                          "<font size=6>배출구를 활성화 하시겠습니까?</font>");
        if(reply == QMessageBox::Yes){
            if(OP_STATUS_OPERATING == PLATFORM_OPERATION_ON_OPERATING_STATE){
                    QMessageBox::warning(this, "활성화 실패", "<font size=4>운영 종료 후 다시 시도해 주시기 바랍니다.</font>");
            }else{
                OUTLET_DISABLE[0] = 0;
                plog->write("[UI OUTLET] ENABLE OUTLET 1 clicked");
            }
        }
    }
}

void DialogOutlet::on_BTN_ENABLE_MODULE_2_clicked()
{
    if(OUTLET_DISABLE[1] == 0){
        QMessageBox::StandardButton reply;
        reply = QMessageBox::question(this, "배출구 2 비활성화",
                                          "<font size=6>배출구를 비활성화 하시겠습니까?</font>");
        if(reply == QMessageBox::Yes){
            if(OP_STATUS_OPERATING == PLATFORM_OPERATION_ON_OPERATING_STATE){
                QMessageBox::warning(this, "비활성화 실패", "<font size=4>운영 종료 후 다시 시도해 주시기 바랍니다.</font>");
            }else{
                OUTLET_DISABLE[1] = 1;
                plog->write("[UI OUTLET] DISABLE OUTLET 2 clicked",true);
            }
        }
    }else{
        QMessageBox::StandardButton reply;
        reply = QMessageBox::question(this, "배출구 2 활성화",
                                          "<font size=6>배출구를 활성화 하시겠습니까?</font>");
        if(reply == QMessageBox::Yes){
            if(OP_STATUS_OPERATING == PLATFORM_OPERATION_ON_OPERATING_STATE){
                    QMessageBox::warning(this, "활성화 실패", "<font size=4>운영 종료 후 다시 시도해 주시기 바랍니다.</font>");
            }else{
                OUTLET_DISABLE[1] = 0;
                plog->write("[UI OUTLET] ENABLE OUTLET 2 clicked",true);
            }
        }
    }
}

void DialogOutlet::on_BTN_ENABLE_MODULE_3_clicked()
{
    if(OUTLET_DISABLE[2] == 0){
        QMessageBox::StandardButton reply;
        reply = QMessageBox::question(this, "배출구 3 비활성화",
                                          "<font size=6>배출구를 비활성화 하시겠습니까?</font>");
        if(reply == QMessageBox::Yes){
            if(OP_STATUS_OPERATING == PLATFORM_OPERATION_ON_OPERATING_STATE){
                QMessageBox::warning(this, "비활성화 실패", "<font size=4>운영 종료 후 다시 시도해 주시기 바랍니다.</font>");
            }else{
                OUTLET_DISABLE[2] = 1;
                plog->write("[UI OUTLET] DISABLE OUTLET 3 clicked");
            }
        }
    }else{
        QMessageBox::StandardButton reply;
        reply = QMessageBox::question(this, "배출구 3 활성화",
                                          "<font size=6>배출구를 활성화 하시겠습니까?</font>");
        if(reply == QMessageBox::Yes){
            if(OP_STATUS_OPERATING == PLATFORM_OPERATION_ON_OPERATING_STATE){
                    QMessageBox::warning(this, "활성화 실패", "<font size=4>운영 종료 후 다시 시도해 주시기 바랍니다.</font>");
            }else{
                OUTLET_DISABLE[2] = 0;
                plog->write("[UI OUTLET] ENABLE OUTLET 3 clicked");
            }
        }
    }
}

void DialogOutlet::on_BTN_ENABLE_MODULE_4_clicked()
{
    if(OUTLET_DISABLE[3] == 0){
        QMessageBox::StandardButton reply;
        reply = QMessageBox::question(this, "배출구 4 비활성화",
                                          "<font size=6>배출구를 비활성화 하시겠습니까?</font>");
        if(reply == QMessageBox::Yes){
            if(OP_STATUS_OPERATING == PLATFORM_OPERATION_ON_OPERATING_STATE){
                QMessageBox::warning(this, "비활성화 실패", "<font size=4>운영 종료 후 다시 시도해 주시기 바랍니다.</font>");
            }else{
                OUTLET_DISABLE[3] = 1;
                plog->write("[UI OUTLET] DISABLE OUTLET 4 clicked");
            }
        }
    }else{
        QMessageBox::StandardButton reply;
        reply = QMessageBox::question(this, "배출구 4 활성화",
                                          "<font size=6>배출구를 활성화 하시겠습니까?</font>");
        if(reply == QMessageBox::Yes){
            if(OP_STATUS_OPERATING == PLATFORM_OPERATION_ON_OPERATING_STATE){
                    QMessageBox::warning(this, "활성화 실패", "<font size=4>운영 종료 후 다시 시도해 주시기 바랍니다.</font>");
            }else{
                OUTLET_DISABLE[3] = 0;
                plog->write("[UI OUTLET] ENABLE OUTLET 4 clicked");
            }
        }
    }
}

void DialogOutlet::on_BTN_ENABLE_MODULE_5_clicked()
{
    if(OUTLET_DISABLE[4] == 0){
        QMessageBox::StandardButton reply;
        reply = QMessageBox::question(this, "배출구 5 비활성화",
                                          "<font size=6>배출구를 비활성화 하시겠습니까?</font>");
        if(reply == QMessageBox::Yes){
            if(OP_STATUS_OPERATING == PLATFORM_OPERATION_ON_OPERATING_STATE){
                QMessageBox::warning(this, "비활성화 실패", "<font size=4>운영 종료 후 다시 시도해 주시기 바랍니다.</font>");
            }else{
                OUTLET_DISABLE[4] = 1;
                plog->write("[UI OUTLET] DISABLE OUTLET 5 clicked");
            }
        }
    }else{
        QMessageBox::StandardButton reply;
        reply = QMessageBox::question(this, "배출구 5 활성화",
                                          "<font size=6>배출구를 활성화 하시겠습니까?</font>");
        if(reply == QMessageBox::Yes){
            if(OP_STATUS_OPERATING == PLATFORM_OPERATION_ON_OPERATING_STATE){
                    QMessageBox::warning(this, "활성화 실패", "<font size=4>운영 종료 후 다시 시도해 주시기 바랍니다.</font>");
            }else{
                OUTLET_DISABLE[4] = 0;
                plog->write("[UI OUTLET] ENABLE OUTLET 5 clicked");
            }
        }
    }
}
