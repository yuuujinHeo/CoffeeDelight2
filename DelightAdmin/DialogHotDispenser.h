#ifndef DIALOGHOTDISPENSER_H
#define DIALOGHOTDISPENSER_H

#include <QDialog>
#include <QTimer>

#include <QSerialPort>
#include "DialogStock.h"
#include "GlobalHeader.h"

typedef enum{
    HOT_STATE_IDLE = 0,
    HOT_STATE_HOT_START,
    HOT_STATE_HOT_WAIT,
    HOT_STATE_SODA_START,
    HOT_STATE_SODA_WAIT
}HOT_STATE;

namespace Ui {
class DialogHotDispenser;
}

class DialogHotDispenser : public QDialog
{
    Q_OBJECT

public:
    explicit DialogHotDispenser(QWidget *parent = nullptr, DialogStock *_stock = nullptr);
    ~DialogHotDispenser();


    void DispenseHotByTime(int dev, int time_ms);
    void DispenseSodaByTime(int dev, int time_ms);

    void Control_HotStart(int dev);
    void Control_HotStop(int dev);
    void Control_SodaStart(int dev);
    void Control_SodaStop(int dev);

    bool isOpenPort1();
    bool isOpenPort2();
    QString hot_1_error;
    QString hot_2_error;


    int IsHotDev_1_Available();
    int IsHotDev_2_Available();

    int IsHotAvailable(int dev);

    void WriteData1(const QByteArray &data);
    void WriteData2(const QByteArray &data);
    void RequestStatus();



    int control_time_1;
    int control_time_2;
    int state_1;
    int state_2;

public slots:
    void onTimer();
    void onControl();

    void readData1();
    void readData2();
    void handleError1(QSerialPort::SerialPortError error);
    void handleError2(QSerialPort::SerialPortError error);

private slots:
    void on_BTN_DISPENSE_HOT_BY_TIME_clicked();

    void on_BTN_DISPENSE_SODA_BY_TIME_clicked();

    void on_BTN_DISPENSE_HOT_BY_TIME_3_clicked();

    void on_BTN_DISPENSE_SODA_BY_TIME_3_clicked();

private:
    Ui::DialogHotDispenser *ui;
    QTimer timer;
    QTimer control_timer;

    QSerialPort *m_serialPort1 = nullptr;
    QSerialPort *m_serialPort2 = nullptr;

    int Timeout_dispense;
    int cur_Time;

    int connectionCount1;
    int connectionCount2;

    DialogStock *stock;
};

#endif // DIALOGHOTDISPENSER_H
