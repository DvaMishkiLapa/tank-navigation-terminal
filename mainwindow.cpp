#include <iostream>
#include <sys/types.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <arpa/inet.h>
#include <unistd.h>

#include "mainwindow.h"
#include "ui_terminal.h"

#include "command.pb.h"

using namespace std;


MainWindow::MainWindow(QWidget *parent):
    QMainWindow(parent),
    ui(new Ui::MainWindow){
    ui->setupUi(this);
    const int opt = 1;
    
    connect(ui->tank_forward, SIGNAL(clicked()), this, SLOT(btn_clicked()));
    connect(ui->tank_back, SIGNAL(clicked()), this, SLOT(btn_clicked()));
    connect(ui->tank_left, SIGNAL(clicked()), this, SLOT(btn_clicked()));
    connect(ui->tank_right, SIGNAL(clicked()), this, SLOT(btn_clicked()));
    connect(ui->tank_stop, SIGNAL(clicked()), this, SLOT(btn_clicked()));
    connect(ui->gun_up, SIGNAL(clicked()), this, SLOT(btn_clicked()));
    connect(ui->gun_down, SIGNAL(clicked()), this, SLOT(btn_clicked()));
    connect(ui->gun_left, SIGNAL(clicked()), this, SLOT(btn_clicked()));
    connect(ui->gun_right, SIGNAL(clicked()), this, SLOT(btn_clicked()));
    connect(ui->gun_fire, SIGNAL(clicked()), this, SLOT(btn_clicked()));
    connect(ui->protect, SIGNAL(clicked()), this, SLOT(btn_clicked()));
    setsockopt(sock_out, SOL_SOCKET, SO_REUSEPORT, &opt, sizeof(opt));
}


void MainWindow::btn_clicked(){
    QPushButton* btn = qobject_cast<QPushButton*>(sender());
    std::string utf8_text = btn->objectName().toUtf8().constData();
    send_command(utf8_text);
}


MainWindow::~MainWindow(){
    close_and_del();
}


void MainWindow::close_and_del(){
    if (timer)
        timer->stop();
    vector<char> buffer(1);
    recv(sock_in, &buffer[0], 0, 0);
    send(sock_out, &buffer[0], 0, 0);
    shutdown(sock_out, 1);
    shutdown(sock_in, 0);
    ::close(sock_out);
    ::close(sock_in);
    delete ui;
}


void MainWindow::send_command(std::string command){
    if (!(command.empty())){
        protocol::Action act;
        act.set_action(command);
        string buffer;
        act.SerializeToString(&buffer);
        int bytes = send(sock_out, buffer.c_str(), buffer.size(), 0);
        if (bytes > 0)
            command.clear();
        else
            cout << "Не отправилось :(" << endl;
    }
}


void MainWindow::update_data(){
    int bytesReceived = 0;
    vector<char> buffer(1024);
    bytesReceived = recv(sock_in, &buffer[0], buffer.size(), 0);
    string rcv(buffer.begin(), buffer.end());

    // Разборка данных из протокола
    protocol::Data data;
    data.ParseFromString(rcv);
    QString str_speed = QString::number(data.speed(), 'g', 5);
    QString str_distance = QString::number(data.distance(), 'g', 5);
    QString str_kmleft = QString::number(data.km_left(), 'g', 5);
    QString str_ammo = QString::number(data.ammo(), 'g', 5);
    QString str_gun_angle = QString::number(data.gun_angle(), 'g', 4);
    QString str_protect = QString::number(data.protect(), 'g', 5);
    QString str_machine_turn = QString::number(data.machine_turn(), 'g', 5);
    QString str_gun_turn = QString::number(data.gun_turn(), 'g', 5);
    QString str_x = QString::number(data.x(), 'g', 20);
    QString str_y = QString::number(data.y(), 'g', 20);

    ui->speed_label->setText(str_speed);
    ui->distance_label->setText(str_distance);
    ui->km_left_label->setText(str_kmleft);
    ui->ammo_label->setText(str_ammo);
    ui->gun_angle_label->setText(str_gun_angle);
    ui->protection_label->setText(str_protect);
    ui->turn_label->setText(str_machine_turn);
    ui->gun_turn_label->setText(str_gun_turn);
    ui->x_coord_label->setText(str_x);
    ui->y_coord_label->setText(str_y);
}


// Подключение к серверу для отправления данных
void MainWindow::start_connection_out(){
    struct sockaddr_in addr;
    sock_out = socket(AF_INET, SOCK_STREAM, 0);
    if(sock_out < 0){
        close_and_del();
        perror("socket");
        exit(1);
    }

    addr.sin_family = AF_INET;
    addr.sin_addr.s_addr = inet_addr(server_ip); // server
    addr.sin_port = htons(server_port); // или любой другой порт...
    if(::connect(sock_out, (struct sockaddr *)&addr, sizeof(addr)) < 0){
        close_and_del();
        perror("connect");
        exit(2);
    }
}

// Подключение к серверу для получения данных
void MainWindow::start_connection_in(){
    int listener;
    struct sockaddr_in addr;
    listener = socket(AF_INET, SOCK_STREAM, 0);
    if(listener < 0){
        close_and_del();
        perror("socket");
        exit(1);
    }
    addr.sin_family = AF_INET;
    addr.sin_port = htons(server_port);
    addr.sin_addr.s_addr =  inet_addr("0.0.0.0");
    if(bind(listener, (struct sockaddr *)&addr, sizeof(addr)) < 0){
        perror("bind");
        close_and_del();
        exit(2);
    }

    listen(listener, 1);
    sock_in = accept(listener, NULL, NULL);
    if(sock_in < 0){
        close_and_del();
        perror("accept");
        exit(3);
    }
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


void MainWindow::on_connect_clicked(){
    qserver_ip = ui->ip_lineEdit->text();
    qserver_port = ui->port_lineEdit->text();
    server_ip = qserver_ip.toStdString().c_str();
    server_port = qserver_port.split(" ")[0].toInt();

    start_connection_out();

    send_command("42");
    start_connection_in();

    timer = new QTimer();
    connect(timer, SIGNAL(timeout()), this, SLOT(update_data()));
    timer->start(17);
    ui->stackedWidget->setCurrentIndex(0); // go to main page
}


void MainWindow::on_exit_clicked(){
    close_and_del();
    exit(1);
}