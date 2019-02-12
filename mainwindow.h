#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    // tank control slots
    void on_tank_forward_clicked();
    void on_tank_back_clicked();
    void on_tank_left_clicked();
    void on_tank_right_clicked();
    void on_tank_stop_clicked();

    // tower control slots
    void on_gun_up_clicked();
    void on_gun_down_clicked();
    void on_gun_left_clicked();
    void on_gun_right_clicked();
    void on_gun_fire_clicked();

    // security activation slots
    void on_protection_clicked();

    // weapon control
    void on_type_gun_comboBox_currentIndexChanged();
    void on_type_ammo_comboBox_currentIndexChanged();
    void on_type_shoot_comboBox_currentIndexChanged();

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
