#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QTimer>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow{
    Q_OBJECT

    public:
        explicit MainWindow(QWidget *parent = 0);
        Ui::MainWindow *ui;
        ~MainWindow();

        int sock_out = 0; // Сокет отправки данных
        int sock_in = 0;  // Сокет принятия данных

        QString qserver_ip = "";
        QString qserver_port = "";

        const char *server_ip;
        int server_port = 0;

        QTimer *timer = 0;
        std::string command = "42";

    public slots:
        void close_and_del();
        void send_command();
        void start_connection_out();
        void start_connection_in();
        void update_data();

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

        void on_connect_clicked();
        void on_exit_clicked();
};

#endif // MAINWINDOW_H
