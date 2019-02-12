#include "mainwindow.h"
#include "ui_terminal.h"
#include <typeinfo>
#include <iostream>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow){
    ui->setupUi(this);
}

MainWindow::~MainWindow(){
    delete ui;
}

// tank control
void MainWindow::on_tank_forward_clicked(){
    std::cout << "### tank_forward_clicked ###\n";
}

void MainWindow::on_tank_back_clicked(){
    std::cout << "### tank_back_clicked ###\n";
}

void MainWindow::on_tank_left_clicked(){
    std::cout << "### tank_left_clicked ###\n";
}

void MainWindow::on_tank_right_clicked(){
    std::cout << "### tank_right_clicked ###\n";
}

void MainWindow::on_tank_stop_clicked(){
    std::cout << "### tank_stop_clicked ###\n";
}

// tower control
void MainWindow::on_gun_up_clicked(){
    std::cout << "### gun_up_clicked ###\n";
}

void MainWindow::on_gun_down_clicked(){
    std::cout << "### gun_down_clicked ###\n";
}

void MainWindow::on_gun_left_clicked(){
    std::cout << "### gun_left_clicked ###\n";
}

void MainWindow::on_gun_right_clicked(){
    std::cout << "### tank_right_clicked ###\n";
}

void MainWindow::on_gun_fire_clicked(){
    std::cout << "### gun_fire_clicked ###\n";
}

// security activation
void MainWindow::on_protection_clicked(){
    std::cout << "### gun_fire_clicked ###\n";
}

// weapon control
void MainWindow::on_type_gun_comboBox_currentIndexChanged(){
    std::cout << "### currentIndexChanged type_gun_comboBox <";
    std::cout << ui->type_gun_comboBox->currentText().toUtf8().data();
    std::cout << "> ###\n";
}

void MainWindow::on_type_ammo_comboBox_currentIndexChanged(){
    std::cout << "### currentIndexChanged type_ammo_comboBox <";
    std::cout << ui->type_ammo_comboBox->currentText().toUtf8().data();
    std::cout << "> ###\n";
}

void MainWindow::on_type_shoot_comboBox_currentIndexChanged(){
    std::cout << "### currentIndexChanged type_shoot_comboBox <";
    std::cout << ui->type_shoot_comboBox->currentText().toUtf8().data();
    std::cout << "> ###\n";
}
