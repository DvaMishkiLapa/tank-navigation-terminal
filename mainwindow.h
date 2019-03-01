#ifndef MAINWINDOW_H
#define MAINWINDOW_H
// #include <string>
#include <QThread>
#include <QMainWindow>


class RecvThreads :
    public QThread
{
    Q_OBJECT

public:
    RecvThreads();
    ~RecvThreads();
    void run();

signals:
    void processDone(QString, QString, QString, QString, QString, QString, QString, QString, QString);					//SIGNAL to show that some process have been done
};


namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow{
    Q_OBJECT

    public:
        explicit MainWindow(QWidget *parent = 0);
        Ui::MainWindow *ui;
        RecvThreads* m_pqThread;
        ~MainWindow();
        int sock = 0;

    signals:
        bool void_signal();

    public slots:
        bool void_slot();
    	void startThread(bool);
	    void threadProcessDone(QString, QString, QString, QString, QString, QString, QString, QString, QString);

        void act_send(std::string &act);
        void start_connection();

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
};

#endif // MAINWINDOW_H
