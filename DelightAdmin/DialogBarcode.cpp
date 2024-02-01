#include "DialogBarcode.h"
#include "qglobal.h"
#include "ui_DialogBarcode.h"
#include "displaydialog.h"
extern Logger    *plog;
extern DisplayDialog    *pdisplay;

DialogBarcode::DialogBarcode(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::DialogBarcode)
{
    ui->setupUi(this);

    NewInputNotification = false;
    NewBarcodePin = "";

    connect(&timer, SIGNAL(timeout()), this, SLOT(onTimer()));
    timer.start(200);

    m_serialPort = new QSerialPort();

    connect(m_serialPort,SIGNAL(readyRead()), this, SLOT(readData()));
    connect(m_serialPort,SIGNAL(errorOccurred(QSerialPort::SerialPortError)), this, SLOT(handleError(QSerialPort::SerialPortError)));

    QList<QSerialPortInfo> ttt =  QSerialPortInfo::availablePorts();
    for(int i=0; i<ttt.size(); i++){
        qDebug() << ttt[i].portName();
    }

//    m_serialPort->setPortName("COM1");
    m_serialPort->setPortName("ttyS1");
    m_serialPort->setBaudRate(QSerialPort::Baud9600);
    m_serialPort->setDataBits(QSerialPort::Data8);
    m_serialPort->setParity(QSerialPort::NoParity);
    m_serialPort->setStopBits(QSerialPort::OneStop);
    m_serialPort->setFlowControl(QSerialPort::NoFlowControl);

    BARCODE_DATA[0].barcode_count = 0;
    for(int i=0; i<MAX_BARCODE_LENGTH; i++){
        BARCODE_DATA[0].barcode_data[i] = 0;
    }



//    ui->GB_BARCODE->setStyleSheet("QGroupBox  {\n    margin-top: 10px;"
//                                  "	font: 20pt \"함초롬돋움\";\n}\n\nQGroupBox::title  {"
//                                                     "    subcontrol-origin: margin;"
//                                                     "    subcontrol-position: top center;"
//                                                     "    padding: 10px 8000px 10px 8000px;"
//                                                     "    background-color: #595959;"
//                                                     "    color: rgb(255, 255, 255);}"
//                                                     "QLabel {\n	font: 10pt \"함초롬돋움\";\n}"
//                                                    "QComboBox{\n	font: 10pt \"함초롬돋움\";\n	background-color: #ffffff\n}\nQPushButton{\n	font: 10pt \"함초롬돋움\";\n	background-color: #ffffff\n}"
//                                                    "QLineEdit{\n	font: 10pt \"함초롬돋움\";\n	background-color: #ffffff\n}");

}

DialogBarcode::~DialogBarcode()
{
    delete ui;
}

bool DialogBarcode::isOpenPort(){
    return m_serialPort->isOpen();
}
void DialogBarcode::readData(){
    QByteArray data = m_serialPort->readAll();
    datas += data;
    readCount = 0;
    readFlag = 1;
    plog->write("[BARCODE] NEW BARCODE IN : "+data + "-> "+datas);

}

void DialogBarcode::handleError(QSerialPort::SerialPortError error){
    if(error == QSerialPort::ResourceError){
        plog->write("[BARCODE] PORT CRITICAL ERROR");
        if(m_serialPort->isOpen())
            m_serialPort->close();
    }
}

void DialogBarcode::onTimer(){
    static int time_cnt = 0;
    time_cnt++;
    if(time_cnt > 10 && !m_serialPort->isOpen()){
        if(m_serialPort->open(QIODevice::ReadWrite)){
            plog->write("[BARCODE] SERIAL "+m_serialPort->portName() + " OPEN SUCCESS!");
        }else{
            plog->write("[BARCODE] SERIAL "+m_serialPort->portName() + " OPEN FAIL");
        }
        time_cnt = 0;
    }

    if(readCount == 0){
        if(datas[0] == 'a'){
            QByteArray temp;
            for(int i=1; i<datas.size(); i++){
                if(datas[i] == 'z'){
                    for(int i=0; i<MAX_BARCODE_LENGTH; i++){
                        if(i<temp.size()){
                            BARCODE_DATA[0].barcode_data[i] = temp[i];
                        }else{
                            BARCODE_DATA[0].barcode_data[i] = 0;
                        }
                    }
                    datas.clear();
                    NewInputNotification = true;
                    BARCODE_DATA[0].barcode_count++;
                    NewBarcodePin = QString().sprintf("%s", BARCODE_DATA[0].barcode_data);
                    plog->write("[BARCODE] NEW BARCODE READ : "+NewBarcodePin);

                    break;
                }else{
                    temp.append(datas[i]);
                }
            }
        }
//        if(datas[0] == 'a' && datas[datas.size()-1] == 'z'){
//            for(int i=0; i<datas.size()-2; i++){
//                BARCODE_DATA[0].barcode_data[i] = datas[i+1];
//            }
//            datas.clear();
//            NewInputNotification = true;
//            BARCODE_DATA[0].barcode_count++;
//            NewBarcodePin = QString().sprintf("%s", BARCODE_DATA[0].barcode_data);
//            plog->write("[BARCODE] NEW BARCODE READ : "+NewBarcodePin);
//        }
    }else if(readCount > 3 && datas.size() > 0){
        plog->write("[BARCODE] UNKNOWN BARCODE READ : "+datas);
        datas.clear();
    }
    readCount++;


    if(IS_UI_LOCK){
        ui->GB_BARCODE->setEnabled(false);
    }else{
        ui->GB_BARCODE->setEnabled(true);
    }

    if(m_serialPort->isOpen() == false){
        SetLEColor(ui->LE_BARCODE_CONNECTION, COLOR_NONE);
    }else{
        SetLEColor(ui->LE_BARCODE_CONNECTION, COLOR_GOOD);
        ui->LE_BARCODE_COUNT->setText(QString().sprintf("%d", BARCODE_DATA[0].barcode_count));
        ui->LE_BARCODE_DATA->setText(QString().sprintf("%s", BARCODE_DATA[0].barcode_data));
//        ui->LE_BARCODE_DATA->setText(QString().sprintf("%s", NewBarcodePin));
    }


//    if(BARCODE_DATA[0].barcode_count != BARCODE_DATA[0].prev_barcode_count){
//        plog->write("[BARCODE] OUT COUNT : "+QString().sprintf("%d",BARCODE_DATA[0].barcode_count));
//        plog->write("[BARCODE] DATA : "+QString().sprintf("%s", BARCODE_DATA[0].barcode_data));
//        BARCODE_DATA[0].prev_barcode_count = BARCODE_DATA[0].barcode_count;

//        NewBarcodePin = QString().sprintf("%s", BARCODE_DATA[0].barcode_data);
//        NewInputNotification = true;
//    }
}
