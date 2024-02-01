#include "DialogIceDispenser.h"
#include "ui_DialogIceDispenser.h"
#include "RBLAN2CAN.h"

extern RBLAN2CAN *plan;

DialogIceDispenser::DialogIceDispenser(QWidget *parent, DialogStock *_stock) :
    QDialog(parent), stock(_stock),
    ui(new Ui::DialogIceDispenser)
{
    ui->setupUi(this);


    FATAL_INFO_ICE_CONNECTION_ERROR_1 = 0;
    FATAL_INFO_ICE_CONNECTION_ERROR_2 = 0;
    FATAL_INFO_ICE_DEVICE_ERROR_1 = 0;
    FATAL_INFO_ICE_DEVICE_ERROR_2 = 0;

    FORCE_FATAL_ERROR_ICE_CONNECTION = 0;
    FORCE_FATAL_ERROR_ICE_DEVICE = 0;

    m_serialPort1 = new QSerialPort();
    m_serialPort2 = new QSerialPort();

    connect(m_serialPort1,SIGNAL(readyRead()), this, SLOT(readData1()));
    connect(m_serialPort1,SIGNAL(errorOccurred(QSerialPort::SerialPortError)), this, SLOT(handleError1(QSerialPort::SerialPortError)));
    connect(m_serialPort2,SIGNAL(readyRead()), this, SLOT(readData2()));
    connect(m_serialPort2,SIGNAL(errorOccurred(QSerialPort::SerialPortError)), this, SLOT(handleError2(QSerialPort::SerialPortError)));

    m_serialPort1->setPortName("/dev/ttyS3");
    m_serialPort1->setBaudRate(QSerialPort::Baud9600);
    m_serialPort1->setDataBits(QSerialPort::Data8);
    m_serialPort1->setParity(QSerialPort::NoParity);
    m_serialPort1->setStopBits(QSerialPort::OneStop);
    m_serialPort1->setFlowControl(QSerialPort::NoFlowControl);

    m_serialPort2->setPortName("/dev/ttyS2");
    m_serialPort2->setBaudRate(QSerialPort::Baud9600);
    m_serialPort2->setDataBits(QSerialPort::Data8);
    m_serialPort2->setParity(QSerialPort::NoParity);
    m_serialPort2->setStopBits(QSerialPort::OneStop);
    m_serialPort2->setFlowControl(QSerialPort::NoFlowControl);

    connect(&timer, SIGNAL(timeout()), this, SLOT(onTimer()));
    timer.start(200);
}

DialogIceDispenser::~DialogIceDispenser()
{
    delete ui;
}

bool DialogIceDispenser::isOpenPort1(){
    return m_serialPort1->isOpen();
}
bool DialogIceDispenser::isOpenPort2(){
    return m_serialPort2->isOpen();
}

void DialogIceDispenser::readData1(){
    QByteArray data = m_serialPort1->readAll();
//    qDebug() << data;

    if(data.size() < 6){
        plog->write("[ICE] 1 LENGTH ERROR");
        return;
    }

    if(uchar(data.at(0)) == 0x02 && uchar(data.at(6)) == 0x03){
        ICE_DATA[0].connection_status = true;
        ICE_DATA[0].data_connection = true;
        connectionCount1 = 0;
        if(uchar(data.at(2)) == 0xA0){
            ICE_DATA[0].comm_mode = data.at(3);
        }else if(uchar(data.at(2)) == 0xB0){
            if(Timeout_dispense == 0){
                ICE_DATA[0].last_ice_out_time = data.at(3);
                ICE_DATA[0].last_water_out_time = data.at(4);
            }else{
                ICE_DATA[0].ice_out_count++;
                Timeout_dispense = 0;
                ICE_DATA[0].last_ice_out_time = data.at(3);
                ICE_DATA[0].last_water_out_time = data.at(4);
            }
        }else if(uchar(data.at(2)) == 0xC0){

        }else if(uchar(data.at(2)) == 0xC1){
            ICE_DATA[0].setting_ambient_temp_low = data.at(3);
            ICE_DATA[0].setting_ambient_temp_high = data.at(4);
        }else if(uchar(data.at(2)) == 0xC2){
            ICE_DATA[0].ambient_temp = data.at(3);
        }else if(uchar(data.at(2)) == 0xC3){
            ICE_DATA[0].evaporator_temp = data.at(3);
            ICE_DATA[0].condensor_temp = data.at(4);
        }else if(uchar(data.at(2)) == 0xD0){
            ICE_DATA[0].timeout_sec = data.at(3)*60 + data.at(4);
        }else if(uchar(data.at(2)) == 0xE0){
        }else if(uchar(data.at(2)) == 0xE1){
            ICE_DATA[0].setting_ambient_temp_low = data.at(3);
            ICE_DATA[0].setting_ambient_temp_high = data.at(4);
        }else if(uchar(data.at(2)) == 0xCF){
            ICE_DATA[0].status.B[0] = data.at(3);
            ICE_DATA[0].status.B[1] = data.at(4);
        }else{
            plog->write("[ICE] Protocol command error : "+QString().sprintf("%c",data.at(2)));
        }
    }
}
void DialogIceDispenser::readData2(){
    QByteArray data = m_serialPort2->readAll();

    if(data.size() < 6){
        plog->write("[ICE] 2 LENGTH ERROR");
        return;
    }

    if(uchar(data.at(0)) == 0x02 && uchar(data.at(6)) == 0x03){
        ICE_DATA[1].connection_status = true;
        ICE_DATA[1].data_connection = true;
        connectionCount2 = 0;
        if(uchar(data.at(2)) == 0xA0){
            ICE_DATA[1].comm_mode = data.at(3);
        }else if(uchar(data.at(2)) == 0xB0){
            ICE_DATA[1].ice_out_count++;
            ICE_DATA[1].last_ice_out_time = data.at(3);
            ICE_DATA[1].last_water_out_time = data.at(4);
        }else if(uchar(data.at(2)) == 0xC0){

        }else if(uchar(data.at(2)) == 0xC1){
            ICE_DATA[1].setting_ambient_temp_low = data.at(3);
            ICE_DATA[1].setting_ambient_temp_high = data.at(4);
        }else if(uchar(data.at(2)) == 0xC2){
            ICE_DATA[1].ambient_temp = data.at(3);
        }else if(uchar(data.at(2)) == 0xC3){
            ICE_DATA[1].evaporator_temp = data.at(3);
            ICE_DATA[1].condensor_temp = data.at(4);
        }else if(uchar(data.at(2)) == 0xD0){
            ICE_DATA[1].timeout_sec = data.at(3)*60 + data.at(4);
        }else if(uchar(data.at(2)) == 0xE0){
        }else if(uchar(data.at(2)) == 0xE1){
            ICE_DATA[1].setting_ambient_temp_low = data.at(3);
            ICE_DATA[1].setting_ambient_temp_high = data.at(4);
        }else if(uchar(data.at(2)) == 0xCF){
            ICE_DATA[1].status.B[0] = data.at(3);
            ICE_DATA[1].status.B[1] = data.at(4);
        }else{
            plog->write("[ICE] Protocol command error : "+QString().sprintf("%c",data.at(2)));
        }
    }
}
void DialogIceDispenser::handleError1(QSerialPort::SerialPortError error){
    if(error == QSerialPort::ResourceError){
        plog->write("[ICE] 1 PORT CRITICAL ERROR");
        if(m_serialPort1->isOpen())
            m_serialPort1->close();
    }
}
void DialogIceDispenser::handleError2(QSerialPort::SerialPortError error){
    if(error == QSerialPort::ResourceError){
        plog->write("[ICE] 2 PORT CRITICAL ERROR");
        if(m_serialPort2->isOpen())
            m_serialPort2->close();
    }
}

void DialogIceDispenser::CheckFatalError(){
    // FATAL INFORMATION=============================================
    if(ICE_DATA[0].connection_status == 0 || ICE_DATA[0].data_connection == 0){
        if(FATAL_INFO_ICE_CONNECTION_ERROR_1 == 0)
            plog->write("[ICE] ERROR : DISCONNECTED 1");
        FATAL_INFO_ICE_CONNECTION_ERROR_1 = 1;
    }else{
        FATAL_INFO_ICE_CONNECTION_ERROR_1 = 0;
    }
    if(ICE_DATA[1].connection_status == 0 || ICE_DATA[1].data_connection == 0){
        if(FATAL_INFO_ICE_CONNECTION_ERROR_2 == 0)
            plog->write("[ICE] ERROR : DISCONNECTED 2");
        FATAL_INFO_ICE_CONNECTION_ERROR_2 = 1;
    }else{
        FATAL_INFO_ICE_CONNECTION_ERROR_2 = 0;
    }


    if((ICE_DATA[0].status.B[1] & 0x0F) != 0){
        if(FATAL_INFO_ICE_DEVICE_ERROR_1 == 0)
            plog->write("[ICE] ERROR : DEVICE ERROR 1 "+QString().sprintf("%d",ICE_DATA[0].status.B[1]));
        FATAL_INFO_ICE_DEVICE_ERROR_1 = 1;
    }else{
        FATAL_INFO_ICE_DEVICE_ERROR_1 = 0;
    }
    if((ICE_DATA[1].status.B[1] & 0x0F) != 0){
        if(FATAL_INFO_ICE_DEVICE_ERROR_2 == 0)
            plog->write("[ICE] ERROR : DEVICE ERROR 2 "+QString().sprintf("%d",ICE_DATA[0].status.B[1]));
        FATAL_INFO_ICE_DEVICE_ERROR_2 = 1;
    }else{
        FATAL_INFO_ICE_DEVICE_ERROR_2 = 0;
    }


//    // FATAL ERROR ===================================================
//    if(OP_STATUS_OPERATING == PLATFORM_OPERATION_ON_OPERATING_STATE){
//        if(FATAL_INFO_ICE_CONNECTION_ERROR == 1){
//            FORCE_FATAL_ERROR_ICE_CONNECTION = 1;
//        }
//        if(FATAL_INFO_ICE_DEVICE_ERROR == 1){
//            FORCE_FATAL_ERROR_ICE_DEVICE = 1;
//        }
//    }


    // stock device error handling
    if(IsIceAvailable(0) == 0){
        stock->SetDeviceError("ICE_1");
    }else{
        stock->ClearDeviceError("ICE_1");
    }
    if(IsIceAvailable(1) == 0){
        stock->SetDeviceError("ICE_2");
    }else{
        stock->ClearDeviceError("ICE_2");
    }
}

void DialogIceDispenser::WriteData1(const QByteArray &data){
    m_serialPort1->write(data);
    m_serialPort1->waitForBytesWritten(200);
}
void DialogIceDispenser::WriteData2(const QByteArray &data){
    m_serialPort2->write(data);
    m_serialPort2->waitForBytesWritten(200);
}

int DialogIceDispenser::IsIceAvailable(int dev){
    if(dev == 0 && isOpenPort1() == false)
        return false;

    if(dev == 1 && isOpenPort2() == false)
        return false;

    if(ICE_DATA[dev].connection_status == 1 && ICE_DATA[dev].data_connection == 1){
        // device available check
        if((ICE_DATA[dev].status.B[1] & 0x0F) == 0){
            return true;
        }else{
            return false;
        }
    }else{
        return false;
    }
}

void DialogIceDispenser::onTimer(){
    static int time_cnt1 = 0;
    static int time_cnt2 = 0;
    static int error_clear_cnt1 = 0;
    static int error_clear_cnt2 = 0;
    time_cnt1++;
    time_cnt2++;
    error_clear_cnt1++;
    error_clear_cnt2++;

    if(time_cnt1 > 10 && !m_serialPort1->isOpen()){
        if(m_serialPort1->open(QIODevice::ReadWrite)){
            plog->write("[ICE] SERIAL "+m_serialPort1->portName() + " OPEN SUCCESS!");
        }else{
            plog->write("[ICE] SERIAL "+m_serialPort1->portName() + " OPEN FAIL");
        }
        time_cnt1 = 0;
    }

    if(time_cnt2 > 10 && !m_serialPort2->isOpen()){
        if(m_serialPort2->open(QIODevice::ReadWrite)){
            plog->write("[ICE] SERIAL "+m_serialPort2->portName() + " OPEN SUCCESS!");
        }else{
            plog->write("[ICE] SERIAL "+m_serialPort2->portName() + " OPEN FAIL");
        }
        time_cnt2 = 0;
    }



    if(IS_UI_LOCK){
        ui->GB_ICE->setEnabled(false);
    }else{
        ui->GB_ICE->setEnabled(true);
    }

    if(Timeout_dispense != 0){
        if(cur_Time > Timeout_dispense+1){
            Timeout_dispense = 0;
            plog->write("[ICE] DISPENSE DONE(TIMEOUT)");
            ICE_DATA[0].ice_out_count++;
            ICE_DATA[1].ice_out_count++;
        }
        cur_Time++;
    }



    CheckFatalError();
    RequestStatus();
    if(isOpenPort1() == false){
        SetLEColor(ui->LE_ICE_CONNECTION, COLOR_NONE);
        ui->LB_STATUS_COMM_MODE->setText("-");

        ui->LB_STATUS_COMP_WORKING->setText("-");
        ui->LB_STATUS_GEAR_WORKING->setText("-");
        ui->LB_STATUS_OUT_SOL_DETECT->setText("-");
        ui->LB_STATUS_CUP_LEVER_DETECT->setText("-");
        ui->LB_STATUS_FULL_ICE->setText("-");
        ui->LE_ICE_ERROR->setText("-");
        ui->LB_ERROR_TYPE->setText("-");
        SetLEColor(ui->LE_ICE_ERROR, COLOR_UNDETERMINED);
        ui->LB_STATUS_LAST_ICE_TIME->setText("-");
        ui->LB_STATUS_LAST_WATER_TIME->setText("-");

        ui->LB_STATUS_AMBIENT_TEMP_LOW->setText("-");
        ui->LB_STATUS_AMBIENT_TEMP_HIGH->setText("-");
        ui->LB_STATUS_AMBIENT_TEMP_NOW->setText("-");

        ui->LB_STATUS_EVAPORATOR_TEMP->setText("-");
        ui->LB_STATUS_CONDENSOR_TEMP->setText("-");
        ui->LE_ICE_CHECK_COUNT->setText("-");

    }else{
        if(connectionCount1 > 5){
            ICE_DATA[0].connection_status = false;
            ICE_DATA[0].data_connection = false;
        }
        connectionCount1++;

        if(ICE_DATA[0].connection_status == 1){
            SetLEColor(ui->LE_ICE_CONNECTION, COLOR_GOOD);
        }else{
            SetLEColor(ui->LE_ICE_CONNECTION, COLOR_BAD);
        }
        if(ICE_DATA[0].data_connection == 1){
            SetLEColor(ui->LE_ICE_DATA_CONNECTION, COLOR_GOOD);
        }else{
            SetLEColor(ui->LE_ICE_DATA_CONNECTION, COLOR_BAD);
        }



        if(ICE_DATA[0].connection_status == 1 && ICE_DATA[0].data_connection == 1){
            SetLEColor(ui->LE_ICE_DATA_CONNECTION, COLOR_GOOD);

            if(ICE_DATA[0].status.b.comm_mode == 1){
                ui->LB_STATUS_COMM_MODE->setText("RS232");
            }else{
                ui->LB_STATUS_COMM_MODE->setText("일반모드");
            }

            if(ICE_DATA[0].status.b.comp_working == 1){
                ui->LB_STATUS_COMP_WORKING->setText("동작중");
            }else{
                ui->LB_STATUS_COMP_WORKING->setText("정지상태");
            }

            if(ICE_DATA[0].status.b.gear_motor_working == 1){
                ui->LB_STATUS_GEAR_WORKING->setText("동작중");
            }else{
                ui->LB_STATUS_GEAR_WORKING->setText("정지상태");
            }

            if(ICE_DATA[0].status.b.out_sol_detected == 1){
                ui->LB_STATUS_OUT_SOL_DETECT->setText("감지");
            }else{
                ui->LB_STATUS_OUT_SOL_DETECT->setText("미감지");
            }

            if(ICE_DATA[0].status.b.cup_lever_detected == 1){
                ui->LB_STATUS_CUP_LEVER_DETECT->setText("감지");
            }else{
                ui->LB_STATUS_CUP_LEVER_DETECT->setText("미감지");
            }

            if(ICE_DATA[0].status.b.full_ice == 1){
                ui->LB_STATUS_FULL_ICE->setText("만빙");
            }else{
                ui->LB_STATUS_FULL_ICE->setText("만빙아님");
            }


            ui->LE_ICE_ERROR->setText(QString().sprintf("%1d%1d%1d%1d", ICE_DATA[0].status.b.err_code_4, ICE_DATA[0].status.b.err_code_3, ICE_DATA[0].status.b.err_code_2, ICE_DATA[0].status.b.err_code_1));
            int temp_error = ICE_DATA[0].status.B[1] & 0x0F;
            if(temp_error != 0){
                QString temp_ice_string = "";
                switch(temp_error){
                case 1:
                    temp_ice_string += "급수불량 /";
                    break;
                case 2:
                    temp_ice_string += "배수불량 /";
                    break;
                case 3:
                    temp_ice_string += "내부온도저온 /";
                    break;
                case 4:
                    temp_ice_string += "내부온도고온 /";
                    break;
                case 5:
                    temp_ice_string += "콘덴서과열 /";
                    break;
                case 6:
                    temp_ice_string += "증발기과냉 /";
                    break;
                case 7:
                    temp_ice_string += "제빙모터이상 /";
                    break;
                case 8:
                    temp_ice_string += "제빙기능불량 /";
                    break;
                case 9:
                    temp_ice_string += "정기점검알람 /";
                    break;
                case 15:
                    temp_ice_string += "팬모터이상 /";
                    break;
                default:
                    temp_ice_string += "원인불명 /";
                    break;
                }
                SetLEColor(ui->LE_ICE_ERROR, COLOR_BAD);
                ui->LB_ERROR_TYPE->setText(temp_ice_string);
                if(temp_ice_string != ice_1_error){
                    plog->write("[ICE] ERROR 1 : "+temp_ice_string);
                }
                ice_1_error = temp_ice_string;

                //Try to clear error
                if(error_clear_cnt1 > 2500){//10min
                    ClearStatus(0);
                    error_clear_cnt1 = 0;
                }

            }else{
                SetLEColor(ui->LE_ICE_ERROR, COLOR_GOOD);
                ui->LB_ERROR_TYPE->setText("에러없음");
                ice_1_error = "에러없음";
            }

            ui->LB_STATUS_LAST_ICE_TIME->setText(QString().sprintf("%.1f", float(ICE_DATA[0].last_ice_out_time/16*10 + ICE_DATA[0].last_ice_out_time%16)/10.0));
            ui->LB_STATUS_LAST_WATER_TIME->setText(QString().sprintf("%.1f", float(ICE_DATA[0].last_water_out_time/16*10 + ICE_DATA[0].last_water_out_time%16)/10.0));

            ui->LB_STATUS_AMBIENT_TEMP_LOW->setText(QString().sprintf("%d", ICE_DATA[0].setting_ambient_temp_low));
            ui->LB_STATUS_AMBIENT_TEMP_HIGH->setText(QString().sprintf("%d", ICE_DATA[0].setting_ambient_temp_high));
            ui->LB_STATUS_AMBIENT_TEMP_NOW->setText(QString().sprintf("%d", ICE_DATA[0].ambient_temp));

            ui->LB_STATUS_EVAPORATOR_TEMP->setText(QString().sprintf("%d", (char)(ICE_DATA[0].evaporator_temp)));
            ui->LB_STATUS_CONDENSOR_TEMP->setText(QString().sprintf("%d", ICE_DATA[0].condensor_temp));

            ui->LE_ICE_CHECK_COUNT->setText(QString().sprintf("%d", ICE_DATA[0].ice_out_count));
        }else{
            // device available check
            stock->SetDeviceError("ICE_1");

            ui->LB_STATUS_COMM_MODE->setText("-");

            ui->LB_STATUS_COMP_WORKING->setText("-");
            ui->LB_STATUS_GEAR_WORKING->setText("-");
            ui->LB_STATUS_OUT_SOL_DETECT->setText("-");
            ui->LB_STATUS_CUP_LEVER_DETECT->setText("-");
            ui->LB_STATUS_FULL_ICE->setText("-");
            ui->LE_ICE_ERROR->setText("-");
            ui->LB_ERROR_TYPE->setText("-");
            SetLEColor(ui->LE_ICE_ERROR, COLOR_UNDETERMINED);
            ui->LB_STATUS_LAST_ICE_TIME->setText("-");
            ui->LB_STATUS_LAST_WATER_TIME->setText("-");

            ui->LB_STATUS_AMBIENT_TEMP_LOW->setText("-");
            ui->LB_STATUS_AMBIENT_TEMP_HIGH->setText("-");
            ui->LB_STATUS_AMBIENT_TEMP_NOW->setText("-");

            ui->LB_STATUS_EVAPORATOR_TEMP->setText("-");
            ui->LB_STATUS_CONDENSOR_TEMP->setText("-");
            ui->LE_ICE_CHECK_COUNT->setText("-");
        }

    }
    if(isOpenPort2() == false){
        //--------------------
        SetLEColor(ui->LE_ICE_CONNECTION_2, COLOR_UNDETERMINED);
        ui->LB_STATUS_COMM_MODE_2->setText("-");

        ui->LB_STATUS_COMP_WORKING_2->setText("-");
        ui->LB_STATUS_GEAR_WORKING_2->setText("-");
        ui->LB_STATUS_OUT_SOL_DETECT_2->setText("-");
        ui->LB_STATUS_CUP_LEVER_DETECT_2->setText("-");
        ui->LB_STATUS_FULL_ICE_2->setText("-");
        ui->LE_ICE_ERROR_2->setText("-");
        ui->LB_ERROR_TYPE_2->setText("-");
        SetLEColor(ui->LE_ICE_ERROR_2, COLOR_UNDETERMINED);
        ui->LB_STATUS_LAST_ICE_TIME_2->setText("-");
        ui->LB_STATUS_LAST_WATER_TIME_2->setText("-");

        ui->LB_STATUS_AMBIENT_TEMP_LOW_2->setText("-");
        ui->LB_STATUS_AMBIENT_TEMP_HIGH_2->setText("-");
        ui->LB_STATUS_AMBIENT_TEMP_NOW_2->setText("-");

        ui->LB_STATUS_EVAPORATOR_TEMP_2->setText("-");
        ui->LB_STATUS_CONDENSOR_TEMP_2->setText("-");
        ui->LE_ICE_CHECK_COUNT_2->setText("-");
    }else{
        if(connectionCount2 > 5){
            ICE_DATA[1].connection_status = false;
            ICE_DATA[1].data_connection = false;
        }
        connectionCount2++;

        //-----------------------------------
        if(ICE_DATA[1].connection_status == 1){
            SetLEColor(ui->LE_ICE_CONNECTION_2, COLOR_GOOD);
        }else{
            SetLEColor(ui->LE_ICE_CONNECTION_2, COLOR_BAD);
        }
        if(ICE_DATA[1].data_connection == 1){
            SetLEColor(ui->LE_ICE_DATA_CONNECTION_2, COLOR_GOOD);
        }else{
            SetLEColor(ui->LE_ICE_DATA_CONNECTION_2, COLOR_BAD);
        }

        if(ICE_DATA[1].connection_status == 1 && ICE_DATA[1].data_connection == 1){

            if(ICE_DATA[1].status.b.comm_mode == 1){
                ui->LB_STATUS_COMM_MODE_2->setText("RS232");
            }else{
                ui->LB_STATUS_COMM_MODE_2->setText("일반모드");
            }

            if(ICE_DATA[1].status.b.comp_working == 1){
                ui->LB_STATUS_COMP_WORKING_2->setText("동작중");
            }else{
                ui->LB_STATUS_COMP_WORKING_2->setText("정지상태");
            }

            if(ICE_DATA[1].status.b.gear_motor_working == 1){
                ui->LB_STATUS_GEAR_WORKING_2->setText("동작중");
            }else{
                ui->LB_STATUS_GEAR_WORKING_2->setText("정지상태");
            }

            if(ICE_DATA[1].status.b.out_sol_detected == 1){
                ui->LB_STATUS_OUT_SOL_DETECT_2->setText("감지");
            }else{
                ui->LB_STATUS_OUT_SOL_DETECT_2->setText("미감지");
            }

            if(ICE_DATA[1].status.b.cup_lever_detected == 1){
                ui->LB_STATUS_CUP_LEVER_DETECT_2->setText("감지");
            }else{
                ui->LB_STATUS_CUP_LEVER_DETECT_2->setText("미감지");
            }

            if(ICE_DATA[1].status.b.full_ice == 1){
                ui->LB_STATUS_FULL_ICE_2->setText("만빙");
            }else{
                ui->LB_STATUS_FULL_ICE_2->setText("만빙아님");
            }


            ui->LE_ICE_ERROR_2->setText(QString().sprintf("%1d%1d%1d%1d", ICE_DATA[1].status.b.err_code_4, ICE_DATA[1].status.b.err_code_3, ICE_DATA[1].status.b.err_code_2, ICE_DATA[1].status.b.err_code_1));
            int temp_error2 = ICE_DATA[1].status.B[1] & 0x0F;
            if(temp_error2 != 0){
                QString temp_ice_string = "";
                switch(temp_error2){
                case 1:
                    temp_ice_string += "급수불량 /";
                    break;
                case 2:
                    temp_ice_string += "배수불량 /";
                    break;
                case 3:
                    temp_ice_string += "내부온도저온 /";
                    break;
                case 4:
                    temp_ice_string += "내부온도고온 /";
                    break;
                case 5:
                    temp_ice_string += "콘덴서과열 /";
                    break;
                case 6:
                    temp_ice_string += "증발기과냉 /";
                    break;
                case 7:
                    temp_ice_string += "제빙모터이상 /";
                    break;
                case 8:
                    temp_ice_string += "제빙기능불량 /";
                    break;
                case 9:
                    temp_ice_string += "정기점검알람 /";
                    break;
                case 15:
                    temp_ice_string += "팬모터이상 /";
                    break;
                default:
                    temp_ice_string += "원인불명 /";
                    break;
                }
                SetLEColor(ui->LE_ICE_ERROR_2, COLOR_BAD);
                ui->LB_ERROR_TYPE_2->setText(temp_ice_string);
                if(temp_ice_string != ice_2_error){
                    plog->write("[ICE] ERROR 2 : "+temp_ice_string);
                }
                ice_2_error = temp_ice_string;

                //Try to clear error
                if(error_clear_cnt2 > 2500){//10min
                    ClearStatus(1);
                    error_clear_cnt2 = 0;
                }

            }else{
                SetLEColor(ui->LE_ICE_ERROR_2, COLOR_GOOD);
                ui->LB_ERROR_TYPE_2->setText("에러없음");
                ice_2_error = "에러없음";
            }

            ui->LB_STATUS_LAST_ICE_TIME_2->setText(QString().sprintf("%.1f", float(ICE_DATA[1].last_ice_out_time/16*10 + ICE_DATA[0].last_ice_out_time%16)/10.0));
            ui->LB_STATUS_LAST_WATER_TIME_2->setText(QString().sprintf("%.1f", float(ICE_DATA[1].last_water_out_time/16*10 + ICE_DATA[0].last_water_out_time%16)/10.0));

            ui->LB_STATUS_AMBIENT_TEMP_LOW_2->setText(QString().sprintf("%d", ICE_DATA[1].setting_ambient_temp_low));
            ui->LB_STATUS_AMBIENT_TEMP_HIGH_2->setText(QString().sprintf("%d", ICE_DATA[1].setting_ambient_temp_high));
            ui->LB_STATUS_AMBIENT_TEMP_NOW_2->setText(QString().sprintf("%d", ICE_DATA[1].ambient_temp));

            ui->LB_STATUS_EVAPORATOR_TEMP_2->setText(QString().sprintf("%d", (char)(ICE_DATA[1].evaporator_temp)));
            ui->LB_STATUS_CONDENSOR_TEMP_2->setText(QString().sprintf("%d", ICE_DATA[1].condensor_temp));

            ui->LE_ICE_CHECK_COUNT_2->setText(QString().sprintf("%d", ICE_DATA[1].ice_out_count));
        }else{
            // device available check
            stock->SetDeviceError("ICE_2");

            ui->LB_STATUS_COMM_MODE_2->setText("-");

            ui->LB_STATUS_COMP_WORKING_2->setText("-");
            ui->LB_STATUS_GEAR_WORKING_2->setText("-");
            ui->LB_STATUS_OUT_SOL_DETECT_2->setText("-");
            ui->LB_STATUS_CUP_LEVER_DETECT_2->setText("-");
            ui->LB_STATUS_FULL_ICE_2->setText("-");
            ui->LE_ICE_ERROR_2->setText("-");
            ui->LB_ERROR_TYPE_2->setText("-");
            SetLEColor(ui->LE_ICE_ERROR_2, COLOR_UNDETERMINED);
            ui->LB_STATUS_LAST_ICE_TIME_2->setText("-");
            ui->LB_STATUS_LAST_WATER_TIME_2->setText("-");

            ui->LB_STATUS_AMBIENT_TEMP_LOW_2->setText("-");
            ui->LB_STATUS_AMBIENT_TEMP_HIGH_2->setText("-");
            ui->LB_STATUS_AMBIENT_TEMP_NOW_2->setText("-");

            ui->LB_STATUS_EVAPORATOR_TEMP_2->setText("-");
            ui->LB_STATUS_CONDENSOR_TEMP_2->setText("-");
            ui->LE_ICE_CHECK_COUNT_2->setText("-");
        }

    }




}


void DialogIceDispenser::DispenseIceWater(int target, int ice_time_ms, int water_time_ms){
    plog->write("[ICE] Dispense : "+QString().sprintf("(%d) Ice(%d) Water(%d)",target,ice_time_ms,water_time_ms));
    ICE_DATA[target].prev_out_count = ICE_DATA[target].ice_out_count;
    if(ice_time_ms>water_time_ms){
        Timeout_dispense = ice_time_ms/200;
    }else{
        Timeout_dispense = water_time_ms/200;
    }
    cur_Time = 0;
    QByteArray msg;
    msg[0] = 0x02;
    msg[1] = 0x01;
    msg[2] = 0xB0;
    msg[3] = (ice_time_ms/1000)<<4 | (ice_time_ms%1000)/100;
    msg[4] = (water_time_ms/1000)<<4 | (water_time_ms%1000)/100;
    msg[5] = msg[1]^msg[2]^msg[3]^msg[4];
    msg[6] = 0x03;

    qDebug() << msg;
    if(target == 0)
        WriteData1(msg);
    else
        WriteData2(msg);

}
void DialogIceDispenser::ChangeCommMode(int target, int comm_mode, int cup_ignore){
    plog->write("[ICE] Change Comm Mode : "+QString().sprintf("(%d) Mode(%d) CupIgnore(%d)",target,comm_mode,cup_ignore));
    QByteArray msg;
    msg[0] = 0x02;
    msg[1] = 0x01;
    msg[2] = 0xA0;
    msg[3] = comm_mode;
    msg[4] = 0x00;
    msg[5] = msg[1]^msg[2]^msg[3]^msg[4];
    msg[6] = 0x03;

    if(target == 0)
        WriteData1(msg);
    else
        WriteData2(msg);
}
void DialogIceDispenser::ClearStatus(int target){
    plog->write("[ICE] Clear Status : "+QString().sprintf("%d",target));
    QByteArray msg;
    msg[0] = 0x02;
    msg[1] = 0x01;
    msg[2] = 0xC0;
    msg[3] = 0x01;
    msg[4] = 0x00;
    msg[5] = msg[1]^msg[2]^msg[3]^msg[4];
    msg[6] = 0x03;

    if(target == 0)
        WriteData1(msg);
    else
        WriteData2(msg);
}
void DialogIceDispenser::SetTimeout(int target, int timeout){
    plog->write("[ICE] Set Timeout : "+QString().sprintf("(%d) timeout(%d))",target,timeout));
    QByteArray msg;
    msg[0] = 0x02;
    msg[1] = 0x01;
    msg[2] = 0xD0;
    msg[3] = timeout/60;
    msg[4] = timeout%60;
    msg[5] = msg[1]^msg[2]^msg[3]^msg[4];
    msg[6] = 0x03;

    if(target == 0)
        WriteData1(msg);
    else
        WriteData2(msg);
}
void DialogIceDispenser::Reboot(int target){
    plog->write("[ICE] Reboot : "+QString().sprintf("%d",target));
    QByteArray msg;
    msg[0] = 0x02;
    msg[1] = 0x01;
    msg[2] = 0xE0;
    msg[3] = 0x00;
    msg[4] = 0x00;
    msg[5] = msg[1]^msg[2]^msg[3]^msg[4];
    msg[6] = 0x03;

    if(target == 0)
        WriteData1(msg);
    else
        WriteData2(msg);
}
void DialogIceDispenser::SetAmbientTemperature(int target, int tempL, int tempH){
    plog->write("[ICE] Set Ambient Temp : "+QString().sprintf("(%d) tempL(%d) tempH(%d)",target,tempL,tempH));
    QByteArray msg;
    msg[0] = 0x02;
    msg[1] = 0x01;
    msg[2] = 0xE1;
    msg[3] = tempL;
    msg[4] = tempH;
    msg[5] = msg[1]^msg[2]^msg[3]^msg[4];
    msg[6] = 0x03;

    if(target == 0)
        WriteData1(msg);
    else
        WriteData2(msg);
}

void DialogIceDispenser::RequestStatus(){
    static int count = 0;

    QByteArray msg;
    if(count == 0){
        msg[0] = 0x02;
        msg[1] = 0x01;
        msg[2] = 0xC1;
        msg[3] = 0x00;
        msg[4] = 0x00;
        msg[5] = msg[1]^msg[2]^msg[3]^msg[4];
        msg[6] = 0x03;
        count++;
    }else if(count == 1){
        msg[0] = 0x02;
        msg[1] = 0x01;
        msg[2] = 0xC2;
        msg[3] = 0x00;
        msg[4] = 0x00;
        msg[5] = msg[1]^msg[2]^msg[3]^msg[4];
        msg[6] = 0x03;
        count++;
    }else if(count == 2){
        msg[0] = 0x02;
        msg[1] = 0x01;
        msg[2] = 0xC3;
        msg[3] = 0x00;
        msg[4] = 0x00;
        msg[5] = msg[1]^msg[2]^msg[3]^msg[4];
        msg[6] = 0x03;
        count++;
    }else if(count == 3){
        msg[0] = 0x02;
        msg[1] = 0x01;
        msg[2] = 0xCF;
        msg[3] = 0x00;
        msg[4] = 0x00;
        msg[5] = msg[1]^msg[2]^msg[3]^msg[4];
        msg[6] = 0x03;
        count = 0;
    }

    if(isOpenPort1()){
        WriteData1(msg);
    }
    if(isOpenPort2()){
        WriteData2(msg);
    }
//    plan->SendControlData(DEV_SEND_ID_ICE_DISPENSER, target, 0x05, tempL, tempH);
}

void DialogIceDispenser::on_BTN_ICE_TEST_ICE_OUT_clicked(){
    int ice_time = (int)(ui->LE_ICE_TEST_ICE_OUT_TIME->text().toFloat()*1000.0);
    int water_time = (int)(ui->LE_ICE_TEST_WATER_OUT_TIME->text().toFloat()*1000.0);
    DispenseIceWater(0, ice_time, water_time);
    plog->write("[UI OPERATION - ICE] 출빙-출수 1");
}

void DialogIceDispenser::on_BTN_ICE_CHANGE_COMM_MODE_clicked(){
    int comm_mode = ui->CB_ICE_COMM_MODE->currentIndex();
    int cup_ignore = ui->CB_ICE_CUP_IGNORE->currentIndex();
    ChangeCommMode(0, comm_mode, cup_ignore);
    plog->write("[UI OPERATION - ICE] 통신모드변경 1");
}

void DialogIceDispenser::on_BTN_ICE_TEST_STATUS_CLEAR_clicked(){
    ClearStatus(0);
    plog->write("[UI OPERATION - ICE] 상태클리어 1");
}

void DialogIceDispenser::on_BTN_ICE_CHANGE_ICE_OUT_TIME_clicked(){
//    int sec = ui->LE_ICE_SETTING_ICE_OUT_TIME_MIN->text().toInt()*60 + ui->LE_ICE_SETTING_ICE_OUT_TIME_SEC->text().toInt();
//    if(sec > 255){
//        sec = 255;
//    }
//    SetTimeout(0, sec);
//    plog->write("[UI OPERATION - ICE] 타임아웃 세팅 1");
}

void DialogIceDispenser::on_BTN_ICE_TEST_REBOOT_clicked(){
    Reboot(0);
    plog->write("[UI OPERATION - ICE] 제빙기 리셋 1");
}

void DialogIceDispenser::on_BTN_ICE_CHANGE_AMBIENT_TEMP_clicked(){
//    SetAmbientTemperature(0, ui->LE_ICE_SETTING_AMBIENT_TEMP_LOW->text().toInt(), ui->LE_ICE_SETTING_AMBIENT_TEMP_HIGH->text().toInt());
    plog->write("[UI OPERATION - ICE] 온도 세팅 1");
}

void DialogIceDispenser::on_BTN_ICE_TEST_ICE_OUT_2_clicked(){
    int ice_time = (int)(ui->LE_ICE_TEST_ICE_OUT_TIME_2->text().toFloat()*1000.0);
    int water_time = (int)(ui->LE_ICE_TEST_WATER_OUT_TIME_2->text().toFloat()*1000.0);
    DispenseIceWater(1, ice_time, water_time);
    plog->write("[UI OPERATION - ICE] 출빙-출수 2");
}

void DialogIceDispenser::on_BTN_ICE_CHANGE_COMM_MODE_2_clicked(){
    int comm_mode = ui->CB_ICE_COMM_MODE_2->currentIndex();
    int cup_ignore = ui->CB_ICE_CUP_IGNORE_2->currentIndex();
    ChangeCommMode(1, comm_mode, cup_ignore);
    plog->write("[UI OPERATION - ICE] 통신모드변경 2");
}

void DialogIceDispenser::on_BTN_ICE_CHANGE_ICE_OUT_TIME_2_clicked(){
//    int sec = ui->LE_ICE_SETTING_ICE_OUT_TIME_MIN_2->text().toInt()*60 + ui->LE_ICE_SETTING_ICE_OUT_TIME_SEC_2->text().toInt();
//    if(sec > 255){
//        sec = 255;
//    }
//    SetTimeout(1, sec);
//    plog->write("[UI OPERATION - ICE] 타임아웃 세팅 2");
}

void DialogIceDispenser::on_BTN_ICE_TEST_REBOOT_2_clicked(){
    Reboot(1);
    plog->write("[UI OPERATION - ICE] 제빙기 리셋 2");
}

void DialogIceDispenser::on_BTN_ICE_TEST_STATUS_CLEAR_2_clicked(){
    ClearStatus(1);
    plog->write("[UI OPERATION - ICE] 상태클리어 2");
}

void DialogIceDispenser::on_BTN_ICE_CHANGE_AMBIENT_TEMP_2_clicked(){
//    SetAmbientTemperature(1, ui->LE_ICE_SETTING_AMBIENT_TEMP_LOW_2->text().toInt(), ui->LE_ICE_SETTING_AMBIENT_TEMP_HIGH_2->text().toInt());
    plog->write("[UI OPERATION - ICE] 온도 세팅 2");
}


int DialogIceDispenser::IsIceDev_1_Available(){
    if(ICE_DATA[0].connection_status == 1 && ICE_DATA[0].data_connection == 1){
        // device available check
        if((ICE_DATA[0].status.B[1] & 0x0F) == 0){
            return true;
        }else{
            return false;
        }
    }else{
        return false;
    }
}

int DialogIceDispenser::IsIceDev_2_Available(){
    if(ICE_DATA[1].connection_status == 1 && ICE_DATA[1].data_connection == 1){
        // device available check
        if((ICE_DATA[1].status.B[1] & 0x0F) == 0){
            return true;
        }else{
            return false;
        }
    }else{
        return false;
    }
}
