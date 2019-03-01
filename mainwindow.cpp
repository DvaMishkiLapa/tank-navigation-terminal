#include <iostream>
#include <sys/types.h>
#include <sys/socket.h>
#include <netinet/in.h>
// #include <cstdio>
// #include <unistd.h>
// #include <stdlib.h>
// #include <string>
// #include <vector>
#include <arpa/inet.h>
#include <unistd.h>

#include "mainwindow.h"
#include "ui_terminal.h"

#include "command.pb.h"


using namespace std;

RecvThreads::RecvThreads(){
}

RecvThreads::~RecvThreads(){
}


bool MainWindow::void_slot(){
    emit void_signal();
    return true;
}


void RecvThreads::run(){
    int sock, listener;
    struct sockaddr_in addr;
    listener = socket(AF_INET, SOCK_STREAM, 0);
    if(listener < 0){
        perror("socket");
        exit(1);
    }
    addr.sin_family = AF_INET;
    addr.sin_port = htons(1488);
    addr.sin_addr.s_addr = htonl(INADDR_ANY);
    if(bind(listener, (struct sockaddr *)&addr, sizeof(addr)) < 0){
        perror("bind");
        exit(2);
    }
    listen(listener, 1);
    while(true){
        sock = accept(listener, NULL, NULL);
        if(sock < 0){
            perror("accept");
            exit(3);
        }
        while(true){
            usleep(16667);
            std::vector<char> buffer(1024);
            std::string rcv;
            int bytesReceived = 0;
            do {
                bytesReceived = recv(sock, &buffer[0], buffer.size(), 0);
                if ( bytesReceived == -1 ) { 
                    cout << "bytesReceived == -1" << endl;
                } else {
                    rcv.append( buffer.cbegin(), buffer.cend());
                }
            } while ( bytesReceived == 1024 );

            protocol::Data data;
            data.ParseFromString(rcv);
            QString str_speed = QString::number(data.speed());
            QString str_distance = QString::number(data.distance());
            QString str_ammo = QString::number(data.ammo());
            QString str_gun_angle = QString::number(data.gun_angle());
            QString str_protect = QString::number(data.protect());
            QString str_machine_turn = QString::number(data.machine_turn());
            QString str_gun_turn = QString::number(data.gun_turn());

            protocol::Data::coords location;
            location.ParseFromString(rcv);
            QString str_x = QString::number(location.x());
            QString str_y = QString::number(location.y());
            emit processDone(str_speed, str_distance, str_ammo, str_gun_angle, str_protect, str_machine_turn, str_gun_turn, str_x, str_y);
        }
        ::close(sock);
    }
}


void MainWindow::act_send(string &act_str){
    protocol::Action act;
    act.set_action(act_str);
    string buffer;
    act.SerializeToString(&buffer);
    send(sock, buffer.c_str(), buffer.size(), 0);
    act.ParseFromString(buffer);
}


void MainWindow::start_connection(){
    struct sockaddr_in addr;

    sock = socket(AF_INET, SOCK_STREAM, 0);
    if(sock < 0){
        perror("socket");
        exit(1);
    }

    addr.sin_family = AF_INET;
    addr.sin_addr.s_addr = inet_addr("192.168.1.214");
    // addr.sin_addr.s_addr = htonl(INADDR_LOOPBACK);
    addr.sin_port = htons(1488); // или любой другой порт...
    if(::connect(sock, (struct sockaddr *)&addr, sizeof(addr)) < 0){
        perror("connect");
        exit(2);
    }
}


MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow){
    ui->setupUi(this);
    start_connection();

    bool bConnection = connect(m_pqThread, SIGNAL(void_signal()), this, SLOT(startThread(bool)));
    m_pqThread = new RecvThreads();
    bConnection = connect(m_pqThread,
                          SIGNAL(processDone(QString, QString, QString, QString, QString, QString, QString, QString, QString)),
                          this,
                          SLOT(threadProcessDone(QString, QString, QString, QString, QString, QString, QString, QString, QString)));
    void_signal();
}


MainWindow::~MainWindow(){
    delete m_pqThread;
    delete ui;
}


void MainWindow::startThread(bool){
	m_pqThread->start();
}


void MainWindow::threadProcessDone(QString str_speed,
                                   QString str_distance,
                                   QString str_ammo,
                                   QString str_gun_angle,
                                   QString str_protect,
                                   QString str_machine_turn,
                                   QString str_gun_turn,
                                   QString str_x,
                                   QString str_y){
	ui->speed_label->setText(str_speed);
    ui->distance_label->setText(str_distance);
    ui->ammo_label->setText(str_ammo);
    ui->gun_angle_label->setText(str_gun_angle);
    // ui->protect_label->setText(str_protect);
    ui->turn_label->setText(str_machine_turn);
    ui->gun_turn_label->setText(str_gun_turn);
    QString coord_str = str_x + ", " + str_y;
    ui->coord_label->setText(str_x);
}

// tank control
void MainWindow::on_tank_forward_clicked(){
    cout << "### tank_forward_clicked ###\n";
    string act = "tank_forward";
    act_send(act);
}


void MainWindow::on_tank_back_clicked(){
    cout << "### tank_back_clicked ###\n";
    string act = "tank_back";
    act_send(act);
}


void MainWindow::on_tank_left_clicked(){
    cout << "### tank_left_clicked ###\n";
    string act = "tank_left";
    act_send(act);
    
}


void MainWindow::on_tank_right_clicked(){
    cout << "### tank_right_clicked ###\n";
    string act = "tank_right";
    act_send(act);
}


void MainWindow::on_tank_stop_clicked(){
    cout << "### tank_stop_clicked ###\n";
    string act = "tank_stop";
    act_send(act);
}

// tower control
void MainWindow::on_gun_up_clicked(){
    cout << "### gun_up_clicked ###\n";
    string act = "gun_up";
    act_send(act);
}


void MainWindow::on_gun_down_clicked(){
    cout << "### gun_down_clicked ###\n";
    string act = "gun_down";
    act_send(act);
}


void MainWindow::on_gun_left_clicked(){
    cout << "### gun_left_clicked ###\n";
    string act = "gun_left";
    act_send(act);
}


void MainWindow::on_gun_right_clicked(){
    cout << "### tank_right_clicked ###\n";
    string act = "gun_right";
    act_send(act);
}


void MainWindow::on_gun_fire_clicked(){
    cout << "### gun_fire_clicked ###\n";
    string act = "gun_fire";
    act_send(act);
}

// security activation
void MainWindow::on_protection_clicked(){
    cout << "### protection_clicked ###\n";
    string act = "protect";
    act_send(act);
    // ::close(sock);
}

// weapon control
void MainWindow::on_type_gun_comboBox_currentIndexChanged(){
    cout << "### currentIndexChanged type_gun_comboBox <";
    cout << ui->type_gun_comboBox->currentText().toUtf8().data();
    cout << "> ###\n";
}


void MainWindow::on_type_ammo_comboBox_currentIndexChanged(){
    cout << "### currentIndexChanged type_ammo_comboBox <";
    cout << ui->type_ammo_comboBox->currentText().toUtf8().data();
    cout << "> ###\n";
}


void MainWindow::on_type_shoot_comboBox_currentIndexChanged(){
    cout << "### currentIndexChanged type_shoot_comboBox <";
    cout << ui->type_shoot_comboBox->currentText().toUtf8().data();
    cout << "> ###\n";
}
