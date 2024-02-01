#include "DialogHotDispenser.h"
#include "ui_DialogHotDispenser.h"
#include "RBLAN2CAN.h"

extern RBLAN2CAN *plan;

DialogHotDispenser::DialogHotDispenser(QWidget *parent, DialogStock *_stock) :
    QDialog(parent), stock(_stock),
    ui(new Ui::DialogHotDispenser)
{
    ui->setupUi(this);

    m_serialPort1 = new QSerialPort();
    m_serialPort2 = new QSerialPort();

    connect(m_serialPort1, SIGNAL(readyRead()), this, SLOT(readData1()));
    connect(m_serialPort1, SIGNAL(errorOccurred(QSerialPort::SerialPortError)), this, SLOT(handleError1(QSerialPort::SerialPortError)));
    connect(m_serialPort2, SIGNAL(readyRead()), this, SLOT(readData2()));
    connect(m_serialPort2, SIGNAL(errorOccurred(QSerialPort::SerialPortError)), this, SLOT(handleError2(QSerialPort::SerialPortError)));

    m_serialPort1->setPortName("/dev/ttyUSB1");
    m_serialPort1->setBaudRate(QSerialPort::Baud9600);
    m_serialPort1->setDataBits(QSerialPort::Data8);
    m_serialPort1->setParity(QSerialPort::NoParity);
    m_serialPort1->setStopBits(QSerialPort::OneStop);
    m_serialPort1->setFlowControl(QSerialPort::NoFlowControl);

    m_serialPort2->setPortName("/dev/ttyUSB0");
    m_serialPort2->setBaudRate(QSerialPort::Baud9600);
    m_serialPort2->setDataBits(QSerialPort::Data8);
    m_serialPort2->setParity(QSerialPort::NoParity);
    m_serialPort2->setStopBits(QSerialPort::OneStop);
    m_serialPort2->setFlowControl(QSerialPort::NoFlowControl);

    connect(&timer, SIGNAL(timeout()), this, SLOT(onTimer()));
    timer.start(200);

    connect(&control_timer, SIGNAL(timeout()), this, SLOT(onControl()));
    control_timer.start(100);
}

DialogHotDispenser::~DialogHotDispenser()
{
    delete ui;
}

bool DialogHotDispenser::isOpenPort1(){
    return m_serialPort1->isOpen();
}
bool DialogHotDispenser::isOpenPort2(){
    return m_serialPort2->isOpen();
}

void DialogHotDispenser::readData1(){
    QByteArray data = m_serialPort1->readAll();

//    qDebug() << data;

    if(data.size() < 8){
        plog->write("[HOT] 1 DATA LENGTH ERROR");
        return;
    }

    if(uchar(data.at(0)) == 0xB0 && uchar(data.at(7)) == 0xED){
        // header footer matched
        connectionCount1 = 0;
        int check_sum = 0;        
        for(int i=1; i<=5; i++){
            check_sum += uchar(data.at(i));
        }
        if(uchar(data.at(6)) == check_sum){
            // checksum matched
            HOT_DATA[0].connection_status = true;
            HOT_DATA[0].data_connection = true;

            HOT_DATA[0].valve_status = uchar(data.at(2));
            HOT_DATA[0].sensor_status = uchar(data.at(4));
            HOT_DATA[0].water_status = uchar(data.at(5));
        }
    }
}
void DialogHotDispenser::readData2(){
    QByteArray data = m_serialPort2->readAll();

//    qDebug() << data;

    if(data.size() < 8){
        plog->write("[HOT] 2 DATA LENGTH ERROR");
        return;
    }

    if(uchar(data.at(0)) == 0xB0 && uchar(data.at(7)) == 0xED){
        // header footer matched
        connectionCount2 = 0;
        int check_sum = 0;
        for(int i=1; i<=5; i++){
            check_sum += uchar(data.at(i));
        }
        if(uchar(data.at(6)) == check_sum){
            // checksum matched
            HOT_DATA[1].connection_status = true;
            HOT_DATA[1].data_connection = true;

            HOT_DATA[1].valve_status = uchar(data.at(2));
            HOT_DATA[1].sensor_status = uchar(data.at(4));
            HOT_DATA[1].water_status = uchar(data.at(5));
        }
    }
}

void DialogHotDispenser::handleError1(QSerialPort::SerialPortError error){
    if(error == QSerialPort::ResourceError){
        plog->write("[HOT] 1 PORT CRITICAL ERROR");
        if(m_serialPort1->isOpen()){
            m_serialPort1->close();
        }
    }
}
void DialogHotDispenser::handleError2(QSerialPort::SerialPortError error){
    if(error == QSerialPort::ResourceError){
        plog->write("[HOT] 2 PORT CRITICAL ERROR");
        if(m_serialPort2->isOpen()){
            m_serialPort2->close();
        }
    }
}

void DialogHotDispenser::WriteData1(const QByteArray &data){
    m_serialPort1->write(data);
    m_serialPort1->waitForBytesWritten(200);
}
void DialogHotDispenser::WriteData2(const QByteArray &data){
    m_serialPort2->write(data);
    m_serialPort2->waitForBytesWritten(200);
}

int DialogHotDispenser::IsHotAvailable(int dev){
    if(dev == 0 && isOpenPort1() == false)
        return false;
    if(dev == 1 && isOpenPort2() == false)
        return false;

    if(HOT_DATA[dev].connection_status == 1 && HOT_DATA[dev].data_connection == 1){
        // device available check
        if(true){
            return true;
        }else{
            return false;
        }
    }else{
        return false;
    }
}

void DialogHotDispenser::onTimer(){
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
            plog->write("[HOT] SERIAL "+m_serialPort1->portName() + " OPEN SUCCESS!");
        }else{
            plog->write("[HOT] SERIAL "+m_serialPort1->portName() + " OPEN FAIL");
        }
        time_cnt1 = 0;
    }

    if(time_cnt2 > 10 && !m_serialPort2->isOpen()){
        if(m_serialPort2->open(QIODevice::ReadWrite)){
            plog->write("[HOT] SERIAL "+m_serialPort2->portName() + " OPEN SUCCESS!");
        }else{
            plog->write("[HOT] SERIAL "+m_serialPort2->portName() + " OPEN FAIL");
        }
        time_cnt2 = 0;
    }


    if(IS_UI_LOCK){
        ui->GB_HOT->setEnabled(false);
    }else{
        ui->GB_HOT->setEnabled(true);
    }



    RequestStatus();


    if(IsHotAvailable(0) == 0){
        stock->SetDeviceError("HOT_1");
        stock->SetDeviceError("SODA_1");
    }else{
        stock->ClearDeviceError("HOT_1");
        stock->ClearDeviceError("SODA_1");
    }

    if(IsHotAvailable(1) == 0){
        stock->SetDeviceError("HOT_2");
        stock->SetDeviceError("SODA_2");
    }else{
        stock->ClearDeviceError("HOT_2");
        stock->ClearDeviceError("SODA_2");
    }


    if(isOpenPort1() == false){
        SetLEColor(ui->LE_HOT_CONNECTION, COLOR_UNDETERMINED);

        ui->LE_LAST_DISPENSE_ERROR->setText("-");
        ui->LE_OP_STATE->setText("-");

        SetLEColor(ui->LE_VALVE_HOTO, COLOR_UNDETERMINED);
        SetLEColor(ui->LE_VALVE_COOK, COLOR_UNDETERMINED);
        SetLEColor(ui->LE_VALVE_CBO, COLOR_UNDETERMINED);
        SetLEColor(ui->LE_VALVE_HOTI, COLOR_UNDETERMINED);
        SetLEColor(ui->LE_VALVE_MIXI, COLOR_UNDETERMINED);
        SetLEColor(ui->LE_VALVE_AIR, COLOR_UNDETERMINED);
        SetLEColor(ui->LE_VALVE_INLET, COLOR_UNDETERMINED);

        SetLEColor(ui->LE_SENSOR_ERR_GAS, COLOR_UNDETERMINED);
        SetLEColor(ui->LE_SENSOR_ERR_HOT, COLOR_UNDETERMINED);
        SetLEColor(ui->LE_SENSOR_ERR_CO2, COLOR_UNDETERMINED);

        SetLEColor(ui->LE_WATER_ERR_INLET,COLOR_UNDETERMINED);
        SetLEColor(ui->LE_WATER_ERR_LEAK,COLOR_UNDETERMINED);
    }else{
        if(connectionCount1 > 5){
            HOT_DATA[0].connection_status = false;
            HOT_DATA[0].data_connection = false;
        }
        connectionCount1++;

//        qDebug() << HOT_DATA[0].connection_status << ", " << HOT_DATA[0].data_connection;


        if(HOT_DATA[0].connection_status == 1){
            SetLEColor(ui->LE_HOT_CONNECTION, COLOR_GOOD);
        }else{
            SetLEColor(ui->LE_HOT_CONNECTION, COLOR_BAD);
        }
        if(HOT_DATA[0].data_connection == 1){
            SetLEColor(ui->LE_HOT_DATA_CONNECTION, COLOR_GOOD);
        }else{
            SetLEColor(ui->LE_HOT_DATA_CONNECTION, COLOR_BAD);
        }


        if(HOT_DATA[0].connection_status == 1 && HOT_DATA[0].data_connection == 1){
            SetLEColor(ui->LE_VALVE_HOTO, COLOR_NONE);
            SetLEColor(ui->LE_VALVE_COOK, COLOR_NONE);
            SetLEColor(ui->LE_VALVE_CBO, COLOR_NONE);
            SetLEColor(ui->LE_VALVE_HOTI, COLOR_NONE);
            SetLEColor(ui->LE_VALVE_MIXI, COLOR_NONE);
            SetLEColor(ui->LE_VALVE_AIR, COLOR_NONE);
            SetLEColor(ui->LE_VALVE_INLET, COLOR_NONE);

            if((HOT_DATA[0].valve_status&0x01) == 0x01){
                SetLEColor(ui->LE_VALVE_HOTO, COLOR_BLUE);
            }
            if((HOT_DATA[0].valve_status&0x02) == 0x02){
                SetLEColor(ui->LE_VALVE_COOK, COLOR_BLUE);
            }
            if((HOT_DATA[0].valve_status&0x04) == 0x04){
                SetLEColor(ui->LE_VALVE_CBO, COLOR_BLUE);
            }
            if((HOT_DATA[0].valve_status&0x08) == 0x08){
                SetLEColor(ui->LE_VALVE_HOTI, COLOR_BLUE);
            }
            if((HOT_DATA[0].valve_status&0x10) == 0x10){
                SetLEColor(ui->LE_VALVE_MIXI, COLOR_BLUE);
            }
            if((HOT_DATA[0].valve_status&0x20) == 0x20){
                SetLEColor(ui->LE_VALVE_AIR, COLOR_BLUE);
            }
            if((HOT_DATA[0].valve_status&0x40) == 0x40){
                SetLEColor(ui->LE_VALVE_INLET, COLOR_BLUE);
            }



            SetLEColor(ui->LE_SENSOR_ERR_GAS, COLOR_NONE);
            SetLEColor(ui->LE_SENSOR_ERR_HOT, COLOR_NONE);
            SetLEColor(ui->LE_SENSOR_ERR_CO2, COLOR_NONE);

            if((HOT_DATA[0].sensor_status&0x01) == 0x01){
                SetLEColor(ui->LE_SENSOR_ERR_GAS, COLOR_BAD);
            }
            if((HOT_DATA[0].sensor_status&0x02) == 0x02){
                SetLEColor(ui->LE_SENSOR_ERR_HOT, COLOR_BAD);
            }
            if((HOT_DATA[0].sensor_status&0x04) == 0x04){
                SetLEColor(ui->LE_SENSOR_ERR_CO2, COLOR_BAD);
            }



            SetLEColor(ui->LE_WATER_ERR_INLET,COLOR_NONE);
            SetLEColor(ui->LE_WATER_ERR_LEAK,COLOR_NONE);

            if((HOT_DATA[0].water_status&0x01) == 0x01){
                SetLEColor(ui->LE_WATER_ERR_INLET, COLOR_BAD);
            }
            if((HOT_DATA[0].water_status&0x02) == 0x02){
                SetLEColor(ui->LE_WATER_ERR_LEAK, COLOR_BAD);
            }


//            qDebug() << HOT_DATA[0].valve_status << ", " << HOT_DATA[0].sensor_status << ", " << HOT_DATA[0].water_status;
        }else{
            SetLEColor(ui->LE_VALVE_HOTO, COLOR_UNDETERMINED);
            SetLEColor(ui->LE_VALVE_COOK, COLOR_UNDETERMINED);
            SetLEColor(ui->LE_VALVE_CBO, COLOR_UNDETERMINED);
            SetLEColor(ui->LE_VALVE_HOTI, COLOR_UNDETERMINED);
            SetLEColor(ui->LE_VALVE_MIXI, COLOR_UNDETERMINED);
            SetLEColor(ui->LE_VALVE_AIR, COLOR_UNDETERMINED);
            SetLEColor(ui->LE_VALVE_INLET, COLOR_UNDETERMINED);

            SetLEColor(ui->LE_SENSOR_ERR_GAS, COLOR_UNDETERMINED);
            SetLEColor(ui->LE_SENSOR_ERR_HOT, COLOR_UNDETERMINED);
            SetLEColor(ui->LE_SENSOR_ERR_CO2, COLOR_UNDETERMINED);

            SetLEColor(ui->LE_WATER_ERR_INLET,COLOR_UNDETERMINED);
            SetLEColor(ui->LE_WATER_ERR_LEAK,COLOR_UNDETERMINED);
        }


        if(HOT_DATA[0].last_error == 0){
            ui->LE_LAST_DISPENSE_ERROR->setText("정상");
            hot_1_error = "정상";
        }else{
            ui->LE_LAST_DISPENSE_ERROR->setText(QString().sprintf("E%d", HOT_DATA[0].last_error));
            hot_1_error = QString().sprintf("E%d", HOT_DATA[0].last_error);
        }

        if(state_1 == HOT_STATE_IDLE){
            ui->LE_OP_STATE->setText("준비");
        }else{
            ui->LE_OP_STATE->setText("동작중");
        }
    }

    //---------------------------

    if(isOpenPort2() == false){
        SetLEColor(ui->LE_HOT_CONNECTION_3, COLOR_UNDETERMINED);

        ui->LE_LAST_DISPENSE_ERROR_3->setText("-");
        ui->LE_OP_STATE_3->setText("-");

        SetLEColor(ui->LE_VALVE_HOTO_3, COLOR_UNDETERMINED);
        SetLEColor(ui->LE_VALVE_COOK_3, COLOR_UNDETERMINED);
        SetLEColor(ui->LE_VALVE_CBO_3, COLOR_UNDETERMINED);
        SetLEColor(ui->LE_VALVE_HOTI_3, COLOR_UNDETERMINED);
        SetLEColor(ui->LE_VALVE_MIXI_3, COLOR_UNDETERMINED);
        SetLEColor(ui->LE_VALVE_AIR_3, COLOR_UNDETERMINED);
        SetLEColor(ui->LE_VALVE_INLET_3, COLOR_UNDETERMINED);

        SetLEColor(ui->LE_SENSOR_ERR_GAS_3, COLOR_UNDETERMINED);
        SetLEColor(ui->LE_SENSOR_ERR_HOT_3, COLOR_UNDETERMINED);
        SetLEColor(ui->LE_SENSOR_ERR_CO2_3, COLOR_UNDETERMINED);

        SetLEColor(ui->LE_WATER_ERR_INLET_3,COLOR_UNDETERMINED);
        SetLEColor(ui->LE_WATER_ERR_LEAK_3,COLOR_UNDETERMINED);
    }else{
        if(connectionCount2 > 5){
            HOT_DATA[1].connection_status = false;
            HOT_DATA[1].data_connection = false;
        }
        connectionCount2++;

//        qDebug() << HOT_DATA[0].connection_status << ", " << HOT_DATA[0].data_connection;


        if(HOT_DATA[1].connection_status == 1){
            SetLEColor(ui->LE_HOT_CONNECTION_3, COLOR_GOOD);
        }else{
            SetLEColor(ui->LE_HOT_CONNECTION_3, COLOR_BAD);
        }
        if(HOT_DATA[1].data_connection == 1){
            SetLEColor(ui->LE_HOT_DATA_CONNECTION_3, COLOR_GOOD);
        }else{
            SetLEColor(ui->LE_HOT_DATA_CONNECTION_3, COLOR_BAD);
        }


        if(HOT_DATA[1].connection_status == 1 && HOT_DATA[1].data_connection == 1){
            SetLEColor(ui->LE_VALVE_HOTO_3, COLOR_NONE);
            SetLEColor(ui->LE_VALVE_COOK_3, COLOR_NONE);
            SetLEColor(ui->LE_VALVE_CBO_3, COLOR_NONE);
            SetLEColor(ui->LE_VALVE_HOTI_3, COLOR_NONE);
            SetLEColor(ui->LE_VALVE_MIXI_3, COLOR_NONE);
            SetLEColor(ui->LE_VALVE_AIR_3, COLOR_NONE);
            SetLEColor(ui->LE_VALVE_INLET_3, COLOR_NONE);

            if((HOT_DATA[1].valve_status&0x01) == 0x01){
                SetLEColor(ui->LE_VALVE_HOTO_3, COLOR_BLUE);
            }
            if((HOT_DATA[1].valve_status&0x02) == 0x02){
                SetLEColor(ui->LE_VALVE_COOK_3, COLOR_BLUE);
            }
            if((HOT_DATA[1].valve_status&0x04) == 0x04){
                SetLEColor(ui->LE_VALVE_CBO_3, COLOR_BLUE);
            }
            if((HOT_DATA[1].valve_status&0x08) == 0x08){
                SetLEColor(ui->LE_VALVE_HOTI_3, COLOR_BLUE);
            }
            if((HOT_DATA[1].valve_status&0x10) == 0x10){
                SetLEColor(ui->LE_VALVE_MIXI_3, COLOR_BLUE);
            }
            if((HOT_DATA[1].valve_status&0x20) == 0x20){
                SetLEColor(ui->LE_VALVE_AIR_3, COLOR_BLUE);
            }
            if((HOT_DATA[1].valve_status&0x40) == 0x40){
                SetLEColor(ui->LE_VALVE_INLET_3, COLOR_BLUE);
            }



            SetLEColor(ui->LE_SENSOR_ERR_GAS_3, COLOR_NONE);
            SetLEColor(ui->LE_SENSOR_ERR_HOT_3, COLOR_NONE);
            SetLEColor(ui->LE_SENSOR_ERR_CO2_3, COLOR_NONE);

            if((HOT_DATA[1].sensor_status&0x01) == 0x01){
                SetLEColor(ui->LE_SENSOR_ERR_GAS_3, COLOR_BAD);
            }
            if((HOT_DATA[1].sensor_status&0x02) == 0x02){
                SetLEColor(ui->LE_SENSOR_ERR_HOT_3, COLOR_BAD);
            }
            if((HOT_DATA[1].sensor_status&0x04) == 0x04){
                SetLEColor(ui->LE_SENSOR_ERR_CO2_3, COLOR_BAD);
            }



            SetLEColor(ui->LE_WATER_ERR_INLET_3,COLOR_NONE);
            SetLEColor(ui->LE_WATER_ERR_LEAK_3,COLOR_NONE);

            if((HOT_DATA[1].water_status&0x01) == 0x01){
                SetLEColor(ui->LE_WATER_ERR_INLET_3, COLOR_BAD);
            }
            if((HOT_DATA[1].water_status&0x02) == 0x02){
                SetLEColor(ui->LE_WATER_ERR_LEAK_3, COLOR_BAD);
            }


//            qDebug() << HOT_DATA[1].valve_status << ", " << HOT_DATA[1].sensor_status << ", " << HOT_DATA[1].water_status;
        }else{
            SetLEColor(ui->LE_VALVE_HOTO_3, COLOR_UNDETERMINED);
            SetLEColor(ui->LE_VALVE_COOK_3, COLOR_UNDETERMINED);
            SetLEColor(ui->LE_VALVE_CBO_3, COLOR_UNDETERMINED);
            SetLEColor(ui->LE_VALVE_HOTI_3, COLOR_UNDETERMINED);
            SetLEColor(ui->LE_VALVE_MIXI_3, COLOR_UNDETERMINED);
            SetLEColor(ui->LE_VALVE_AIR_3, COLOR_UNDETERMINED);
            SetLEColor(ui->LE_VALVE_INLET_3, COLOR_UNDETERMINED);

            SetLEColor(ui->LE_SENSOR_ERR_GAS_3, COLOR_UNDETERMINED);
            SetLEColor(ui->LE_SENSOR_ERR_HOT_3, COLOR_UNDETERMINED);
            SetLEColor(ui->LE_SENSOR_ERR_CO2_3, COLOR_UNDETERMINED);

            SetLEColor(ui->LE_WATER_ERR_INLET_3,COLOR_UNDETERMINED);
            SetLEColor(ui->LE_WATER_ERR_LEAK_3,COLOR_UNDETERMINED);
        }


        if(HOT_DATA[1].last_error == 0){
            ui->LE_LAST_DISPENSE_ERROR_3->setText("정상");
            hot_2_error = "정상";
        }else{
            ui->LE_LAST_DISPENSE_ERROR_3->setText(QString().sprintf("E%d", HOT_DATA[1].last_error));
            hot_2_error = QString().sprintf("E%d", HOT_DATA[1].last_error);
        }

        if(state_2 == HOT_STATE_IDLE){
            ui->LE_OP_STATE_3->setText("준비");
        }else{
            ui->LE_OP_STATE_3->setText("동작중");
        }
    }
}




void DialogHotDispenser::onControl(){

    switch(state_1){
    case HOT_STATE_IDLE:
        // idle
        break;

    case HOT_STATE_HOT_START:
        // start hot
        Control_HotStart(0);
        state_1 = HOT_STATE_HOT_WAIT;
        break;

    case HOT_STATE_SODA_START:
        // start soda
        Control_SodaStart(0);
        state_1 = HOT_STATE_SODA_WAIT;
        break;

    case HOT_STATE_HOT_WAIT:
        // wait hot done
        control_time_1 -= 100;  // 100ms minus
        if(control_time_1 <= 0){
            Control_HotStop(0);
            HOT_DATA[0].out_count++;
            state_1 = HOT_STATE_IDLE;
        }
        break;

    case HOT_STATE_SODA_WAIT:
        // wait soda done
        control_time_1 -= 100;  // 100ms minus
        if(control_time_1 <= 0){
            Control_SodaStop(0);
            HOT_DATA[0].out_count++;
            state_1 = HOT_STATE_IDLE;
        }
        break;

    default:
        break;
    }


    switch(state_2){
    case HOT_STATE_IDLE:
        // idle
        break;

    case HOT_STATE_HOT_START:
        // start hot
        Control_HotStart(1);
        state_2 = HOT_STATE_HOT_WAIT;
        break;

    case HOT_STATE_SODA_START:
        // start soda
        Control_SodaStart(2);
        state_2 = HOT_STATE_SODA_WAIT;
        break;

    case HOT_STATE_HOT_WAIT:
        // wait hot done
        control_time_2 -= 100;  // 100ms minus
        if(control_time_2 <= 0){
            Control_HotStop(1);
            HOT_DATA[1].out_count++;
            state_2 = HOT_STATE_IDLE;
        }
        break;

    case HOT_STATE_SODA_WAIT:
        // wait soda done
        control_time_2 -= 100;  // 100ms minus
        if(control_time_2 <= 0){
            Control_SodaStop(1);
            HOT_DATA[1].out_count++;
            state_2 = HOT_STATE_IDLE;
        }
        break;

    default:
        break;
    }
}



void DialogHotDispenser::Control_HotStart(int dev){
    QByteArray ttt;
    ttt.push_back(uchar(0xB0));
    ttt.push_back(uchar(0x00));
    ttt.push_back(uchar(0x18));
    ttt.push_back(uchar(0x01));
    ttt.push_back(uchar(0x19));
    ttt.push_back(uchar(0xED));
    if(dev == 0){
        WriteData1(ttt);
    }else{
        WriteData2(ttt);
    }
}
void DialogHotDispenser::Control_HotStop(int dev){
    QByteArray ttt;
    ttt.push_back(uchar(0xB0));
    ttt.push_back(uchar(0x00));
    ttt.push_back(uchar(0x18));
    ttt.push_back(uchar(0x02));
    ttt.push_back(uchar(0x1A));
    ttt.push_back(uchar(0xED));
    if(dev == 0){
        WriteData1(ttt);
    }else{
        WriteData2(ttt);
    }
}
void DialogHotDispenser::Control_SodaStart(int dev){
    QByteArray ttt;
    ttt.push_back(uchar(0xB0));
    ttt.push_back(uchar(0x00));
    ttt.push_back(uchar(0x14));
    ttt.push_back(uchar(0x01));
    ttt.push_back(uchar(0x15));
    ttt.push_back(uchar(0xED));
    if(dev == 0){
        WriteData1(ttt);
    }else{
        WriteData2(ttt);
    }
}
void DialogHotDispenser::Control_SodaStop(int dev){
    QByteArray ttt;
    ttt.push_back(uchar(0xB0));
    ttt.push_back(uchar(0x00));
    ttt.push_back(uchar(0x14));
    ttt.push_back(uchar(0x02));
    ttt.push_back(uchar(0x16));
    ttt.push_back(uchar(0xED));
    if(dev == 0){
        WriteData1(ttt);
    }else{
        WriteData2(ttt);
    }
}

void DialogHotDispenser::DispenseHotByTime(int dev, int time_ms){
    HOT_DATA[dev].prev_out_count = HOT_DATA[dev].out_count;
    if(dev == 0){
        control_time_1 = time_ms;
        state_1 = HOT_STATE_HOT_START;
    }else{
        control_time_2 = time_ms;
        state_2 = HOT_STATE_HOT_START;
    }
}

void DialogHotDispenser::DispenseSodaByTime(int dev, int time_ms){
    HOT_DATA[dev].prev_out_count = HOT_DATA[dev].out_count;
    if(dev == 0){
        control_time_1 = time_ms;
        state_1 = HOT_STATE_SODA_START;
    }else{
        control_time_2 = time_ms;
        state_2 = HOT_STATE_SODA_START;
    }
}

void DialogHotDispenser::on_BTN_DISPENSE_HOT_BY_TIME_clicked(){
    DispenseHotByTime(0, ui->LE_OUT_TIME_HOT->text().toFloat()*1000.0);
    plog->write("[UI OPERATION - HOT] 온수 배출(시간) 1");
}

void DialogHotDispenser::on_BTN_DISPENSE_SODA_BY_TIME_clicked(){
    DispenseSodaByTime(0, ui->LE_OUT_TIME_SODA->text().toFloat()*1000.0);
    plog->write("[UI OPERATION - HOT] 탄산수 배출(시간) 1");
}

void DialogHotDispenser::on_BTN_DISPENSE_HOT_BY_TIME_3_clicked(){
    DispenseHotByTime(1, ui->LE_OUT_TIME_HOT->text().toFloat()*1000.0);
    plog->write("[UI OPERATION - HOT] 온수 배출(시간) 2");
}

void DialogHotDispenser::on_BTN_DISPENSE_SODA_BY_TIME_3_clicked(){
    DispenseSodaByTime(1, ui->LE_OUT_TIME_SODA->text().toFloat()*1000.0);
    plog->write("[UI OPERATION - HOT] 탄산수 배출(시간) 2");
}


void DialogHotDispenser::RequestStatus(){
    QByteArray ttt;
    ttt.push_back(uchar(0xB0));
    ttt.push_back(uchar(0x00));
    ttt.push_back(uchar(0x20));
    ttt.push_back(uchar(0x02));
    ttt.push_back(uchar(0x22));
    ttt.push_back(uchar(0xED));
    if(isOpenPort1()){
        WriteData1(ttt);
    }
    if(isOpenPort2()){
        WriteData2(ttt);
//        qDebug() << "HOT 2 REQUEST";
    }
}


int DialogHotDispenser::IsHotDev_1_Available(){
    if(HOT_DATA[0].connection_status == 1 && HOT_DATA[0].data_connection == 1){
        // device available check
        if(true){
            return true;
        }else{
            return false;
        }
    }else{
        return false;
    }
}

int DialogHotDispenser::IsHotDev_2_Available(){
    if(HOT_DATA[1].connection_status == 1 && HOT_DATA[1].data_connection == 1){
        // device available check
        if(true){
            return true;
        }else{
            return false;
        }
    }else{
        return false;
    }
}
