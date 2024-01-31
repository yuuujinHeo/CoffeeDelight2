#include "RBLAN2CAN.h"



using namespace std;

extern Logger *plog;


RBLAN2CAN::RBLAN2CAN()
{
    connection_status = false;
    sockConnectionStatus = false;
    prev_sock_connection_status = false;

    SUPER_FATAL_ERROR_CONNECTION_OF_LAN2CAN = 0;
    connection_count = 0;


    timer = new QTimer(this);
    connect(timer, SIGNAL(timeout()), this, SLOT(onTimer()));
    timer->start(100);

    connect(&socket, SIGNAL(connected()), this, SLOT(onSockConnected()));
    connect(&socket, SIGNAL(disconnected()), this, SLOT(onSockDisconnected()));
    connect(&socket, SIGNAL(readyRead()), this, SLOT(onSockReadyRead()));
}


void RBLAN2CAN::onSockConnected(){
    recvBuf.clear();
    connection_count = 0;
//    sockConnectionStatus = true;
    SUPER_FATAL_ERROR_CONNECTION_OF_LAN2CAN = 0;
    connection_status = true;
    plog->write("[LAN2CAN] CONNECTED SOCKET");
}
void RBLAN2CAN::onSockDisconnected(){
//    sockConnectionStatus = false;
    connection_status = false;
    plog->write("[LAN2CAN] DISCONNECTED SOCKET");
}

void RBLAN2CAN::onTimer(){
    static int count = 0;
    count++;

    // check only when the initialize process passed
    if(OP_STATUS_INITIALIZING == PLATFORM_INIT_ON_SUCCESS_STATE){
        if(connection_status == true){
            connection_count++;
            if(connection_count > 10){
                if(SUPER_FATAL_ERROR_CONNECTION_OF_LAN2CAN == 0)
                    plog->write("[LAN2CAN] ERROR : CAN'T RECIEVE DATA");
                SUPER_FATAL_ERROR_CONNECTION_OF_LAN2CAN = 1;
            }

        }else{
            if(prev_sock_connection_status == true){
                if(SUPER_FATAL_ERROR_CONNECTION_OF_LAN2CAN == 0)
                    plog->write("[LAN2CAN] ERROR : DISCONNECTED");
                SUPER_FATAL_ERROR_CONNECTION_OF_LAN2CAN = 2;
            }
        }
        prev_sock_connection_status = connection_status;

        if(connection_status == true && SUPER_FATAL_ERROR_CONNECTION_OF_LAN2CAN == 0){
            sockConnectionStatus = true;
        }else if(SUPER_FATAL_ERROR_CONNECTION_OF_LAN2CAN == 1){
            qDebug() << "NO DATA FROM BOARD";
        }else{
            sockConnectionStatus = false;
        }
    }else{
        if(connection_status == true){
            connection_count++;
            if(connection_count > 10){
                connection_status = false;
                plog->write("[LAN2CAN] ERROR : CAN'T RECIEVE DATA");
            }
        }else{
            if(prev_sock_connection_status == true){
                plog->write("[LAN2CAN] ERROR : DISCONNECTED");
            }
        }
        prev_sock_connection_status = connection_status;

        if(connection_status == true){
            sockConnectionStatus = true;
        }else{
            sockConnectionStatus = false;
            socket.close();
        }
    }


    // try to connect communication -- 2000ms
    if(count%10 == 0){
        if(connection_status == false){
            if(socket.state() == QAbstractSocket::UnconnectedState){
                socket.connectToHost(LAN2CAN_IP, 1977);
            }
        }
    }
}

void RBLAN2CAN::ClearSuperFatal(){
    plog->write("[LAN2CAN] CLEAR FATAL ERROR");
    SUPER_FATAL_ERROR_CONNECTION_OF_LAN2CAN = 0;
}

#define RX_DATA_SIZE    10000

void RBLAN2CAN::onSockReadyRead(){
    unsigned char tempPacketData[RX_DATA_SIZE];

    QByteArray datas = socket.readAll();
    recvBuf += datas;
    char *precvBuf;

    int end_pos = 0;
    int tcp_size;

    while(1){
        tcp_size = recvBuf.size();
        precvBuf = recvBuf.data();

        if(tcp_size < 4){
            break;
        }

        if(uchar(recvBuf[0]) == 0x24){
            if(tcp_size >= 4){
                int packet_length = (short)(uchar(recvBuf[1]) | (uchar(recvBuf[2])<<8));
                if(packet_length < 0 || packet_length > RX_DATA_SIZE){
                    cout << "RBLAN2CAN:: packet length under zero " << packet_length << endl;
                    recvBuf.remove(0, 1);
                }else{
                    end_pos = packet_length + 3 - 1;

                    if(tcp_size >= packet_length + 3){
                        memcpy(tempPacketData, precvBuf, packet_length+3);

                        if(uchar(tempPacketData[0]) == 0x24 && uchar(tempPacketData[packet_length + 3 - 1]) == 0x25){
                            connection_count = 0;
                            int data_type = uchar(tempPacketData[5]);

                            if(data_type == 0xA1){
                                // Cup Dispenser
                                int index = 6;

                                for(int i=0; i<4; i++){
                                    CUP_DATA[i].connection_status = tempPacketData[index];
                                    CUP_DATA[i].ultra_sonic_data = tempPacketData[index+1];
                                    CUP_DATA[i].status = tempPacketData[index+2];
                                    CUP_DATA[i].cup_out_count = tempPacketData[index+3];
                                    CUP_DATA[i].last_error = tempPacketData[index+4];

                                    CUP_DATA[i].dispense_op_flag = tempPacketData[index+5];

                                    index += 6;
                                }
                            }
                            else if(data_type == 0xA2){
                                // Ice Dispenser
//                                int index = 6;

//                                for(int i=0; i<2; i++){
//                                    ICE_DATA[i].connection_status = tempPacketData[index];
//                                    ICE_DATA[i].data_connection = tempPacketData[index+1];
//                                    ICE_DATA[i].comm_mode = tempPacketData[index+2];
//                                    ICE_DATA[i].cup_ignore = tempPacketData[index+3];
//                                    ICE_DATA[i].setting_ambient_temp_high = tempPacketData[index+4];

//                                    ICE_DATA[i].setting_ambient_temp_low = tempPacketData[index+5];
//                                    ICE_DATA[i].ambient_temp = tempPacketData[index+6];
//                                    ICE_DATA[i].evaporator_temp = tempPacketData[index+7];
//                                    ICE_DATA[i].condensor_temp = tempPacketData[index+8];
//                                    ICE_DATA[i].timeout_sec = tempPacketData[index+9];

//                                    ICE_DATA[i].last_ice_out_time = tempPacketData[index+10];
//                                    ICE_DATA[i].last_water_out_time = tempPacketData[index+11];
//                                    ICE_DATA[i].status.B[0] = tempPacketData[index+12];
//                                    ICE_DATA[i].status.B[1] = tempPacketData[index+13];
//                                    ICE_DATA[i].ice_out_count = tempPacketData[index+14];

//                                    index += 15;
//                                }
                            }
                            else if(data_type == 0xA4){
                                // Barcode
//                                int index = 6;

//                                for(int i=0; i<1; i++){
//                                    BARCODE_DATA[i].connection_status = tempPacketData[index];
//                                    BARCODE_DATA[i].barcode_count = tempPacketData[index+1];

//                                    for(int j=0; j<MAX_BARCODE_LENGTH; j++){
//                                        BARCODE_DATA[i].barcode_data[j] = tempPacketData[index+2+j];
//                                    }

//                                    index += 2+MAX_BARCODE_LENGTH;
//                                }

                            }
                            else if(data_type == 0xA5){
                                // Outlet
                                int index = 6;

                                OUTLET_DATA.connection_status = tempPacketData[index];

                                OUTLET_DATA.state[0] = tempPacketData[index+1];
                                OUTLET_DATA.state[1] = tempPacketData[index+2];
                                OUTLET_DATA.state[2] = tempPacketData[index+3];
                                OUTLET_DATA.state[3] = tempPacketData[index+4];
                                OUTLET_DATA.state[4] = tempPacketData[index+5];

                                OUTLET_DATA.is_drink_sensor_on[0] = tempPacketData[index+6];
                                OUTLET_DATA.is_drink_sensor_on[1] = tempPacketData[index+7];
                                OUTLET_DATA.is_drink_sensor_on[2] = tempPacketData[index+8];
                                OUTLET_DATA.is_drink_sensor_on[3] = tempPacketData[index+9];
                                OUTLET_DATA.is_drink_sensor_on[4] = tempPacketData[index+10];

                                OUTLET_DATA.is_locked[0] = tempPacketData[index+11];
                                OUTLET_DATA.is_locked[1] = tempPacketData[index+12];
                                OUTLET_DATA.is_locked[2] = tempPacketData[index+13];
                                OUTLET_DATA.is_locked[3] = tempPacketData[index+14];
                                OUTLET_DATA.is_locked[4] = tempPacketData[index+15];

                            }
                            else if(data_type == 0xAA){
                                // Door Sensor
                                int index = 6;

                                for(int i=0; i<1; i++){
                                    DOOR_DATA[i].connection_status = 1;//tempPacketData[index];
                                    DOOR_DATA[i].platform_sensorA = !tempPacketData[index+1];
                                    DOOR_DATA[i].platform_sensorB = !tempPacketData[index+2];

                                    index += 3;
                                }
                            }
                        }else{
//                            cout << "RBLAN2CAN:: header footer not match" << endl;
                        }
                        recvBuf.remove(0, end_pos);
                    }else{
//                        cout << "RBLANComm:: size not match : " << tcp_size-1 << ", " << end_pos << endl;
                        recvBuf.remove(0, 1);
                    }
                }
            }
        }else{
            recvBuf.remove(0, 1);
        }
    }
}

void RBLAN2CAN::SendControlData(int dev_send_id, int target, int command, int para1, int para2){
    if(sockConnectionStatus == true){
        // Send Control Data ---------------------
        char send_byte[256];
        send_byte[0] = 0x24;            // HEADER
        unsigned int TotalDataLength = 14;
        send_byte[1] = char((TotalDataLength)&0xFF);       // Total data length
        send_byte[2] = char((TotalDataLength>>8)&0xFF);    // Total data length
        send_byte[3] = 0x00;               // From (Master : 0, Slave(CAN) : 1, General interface board : 2)
        send_byte[4] = 0x01;               // To (Master : 0, Slave(CAN) : 1, General interface board : 2)
        // dev_id
        // 0x01 : cup dispenser
        send_byte[5] = dev_send_id;
        send_byte[6] = char((target)&0xFF);
        send_byte[7] = char((command)&0xFF);
        send_byte[8] = char((para1)&0xFF);
        send_byte[9] = char((para1>>8)&0xFF);
        send_byte[10] = char((para1>>16)&0xFF);
        send_byte[11] = char((para1>>24)&0xFF);
        send_byte[12] = char((para2)&0xFF);
        send_byte[13] = char((para2>>8)&0xFF);
        send_byte[14] = char((para2>>16)&0xFF);
        send_byte[15] = char((para2>>24)&0xFF);
        send_byte[16] = 0x25;

        socket.write(send_byte, TotalDataLength+3);
    }
}

