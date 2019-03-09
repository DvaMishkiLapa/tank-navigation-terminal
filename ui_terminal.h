/********************************************************************************
** Form generated from reading UI file 'terminal.ui'
**
** Created by: Qt User Interface Compiler version 4.8.7
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TERMINAL_H
#define UI_TERMINAL_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QComboBox>
#include <QtGui/QFrame>
#include <QtGui/QGridLayout>
#include <QtGui/QGroupBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QMainWindow>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QStackedWidget>
#include <QtGui/QStatusBar>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QGridLayout *gridLayout;
    QStackedWidget *stackedWidget;
    QWidget *page;
    QGridLayout *gridLayout_3;
    QFrame *frame;
    QVBoxLayout *verticalLayout;
    QGroupBox *groupBox_14;
    QVBoxLayout *verticalLayout_2;
    QFrame *frame_6;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_4;
    QLabel *protection_label;
    QSpacerItem *verticalSpacer_6;
    QGroupBox *groupBox_15;
    QVBoxLayout *verticalLayout_4;
    QSpacerItem *verticalSpacer_3;
    QFrame *frame_2;
    QVBoxLayout *verticalLayout_11;
    QGroupBox *groupBox_11;
    QVBoxLayout *verticalLayout_12;
    QFrame *frame_20;
    QGridLayout *gridLayout_5;
    QLabel *label_21;
    QLabel *label_20;
    QLabel *gun_turn_label;
    QLabel *turn_label;
    QFrame *frame_21;
    QGridLayout *gridLayout_4;
    QLabel *x_coord_label;
    QSpacerItem *verticalSpacer_5;
    QLabel *y_coord_label;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label_22;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_23;
    QLabel *height_label;
    QGroupBox *groupBox_13;
    QGridLayout *gridLayout_2;
    QPushButton *gun_up;
    QPushButton *gun_down;
    QPushButton *gun_fire;
    QPushButton *gun_left;
    QPushButton *gun_right;
    QPushButton *tank_forward;
    QPushButton *tank_back;
    QSpacerItem *verticalSpacer;
    QVBoxLayout *verticalLayout_3;
    QPushButton *protection;
    QPushButton *tank_stop;
    QPushButton *tank_left;
    QPushButton *tank_right;
    QFrame *frame_3;
    QVBoxLayout *verticalLayout_8;
    QGroupBox *groupBox_2;
    QVBoxLayout *verticalLayout_9;
    QFrame *frame_15;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_7;
    QLabel *ammo_label;
    QFrame *frame_16;
    QHBoxLayout *horizontalLayout_13;
    QLabel *label_17;
    QLabel *gun_angle_label;
    QGroupBox *groupBox_10;
    QVBoxLayout *verticalLayout_10;
    QFrame *frame_17;
    QHBoxLayout *horizontalLayout_14;
    QLabel *label_8;
    QComboBox *type_gun_comboBox;
    QFrame *frame_18;
    QHBoxLayout *horizontalLayout_15;
    QLabel *label_18;
    QComboBox *type_ammo_comboBox;
    QFrame *frame_19;
    QHBoxLayout *horizontalLayout_16;
    QLabel *label_19;
    QComboBox *type_shoot_comboBox;
    QGroupBox *groupBox_12;
    QVBoxLayout *verticalLayout_13;
    QFrame *frame_22;
    QHBoxLayout *horizontalLayout_19;
    QLabel *label_25;
    QLabel *speed_label;
    QFrame *frame_23;
    QHBoxLayout *horizontalLayout_20;
    QLabel *label_26;
    QLabel *distance_label;
    QFrame *frame_24;
    QHBoxLayout *horizontalLayout_21;
    QLabel *label_27;
    QLabel *fuel_cons_label;
    QFrame *frame_25;
    QHBoxLayout *horizontalLayout_22;
    QLabel *label_28;
    QLabel *km_left_label;
    QWidget *page_connect;
    QGridLayout *gridLayout_6;
    QSpacerItem *verticalSpacer_2;
    QPushButton *connect;
    QFrame *frame_5;
    QHBoxLayout *horizontalLayout;
    QLabel *label_2;
    QLineEdit *port_lineEdit;
    QSpacerItem *verticalSpacer_4;
    QPushButton *exit;
    QFrame *frame_4;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label;
    QLineEdit *ip_lineEdit;
    QSpacerItem *horizontalSpacer;
    QLabel *label_3;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(640, 480);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(MainWindow->sizePolicy().hasHeightForWidth());
        MainWindow->setSizePolicy(sizePolicy);
        MainWindow->setMinimumSize(QSize(640, 480));
        MainWindow->setMaximumSize(QSize(640, 480));
        MainWindow->setSizeIncrement(QSize(640, 480));
        MainWindow->setStyleSheet(QString::fromUtf8("font: 10pt \"Ubuntu\";"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(centralwidget->sizePolicy().hasHeightForWidth());
        centralwidget->setSizePolicy(sizePolicy1);
        centralwidget->setMinimumSize(QSize(640, 480));
        centralwidget->setMaximumSize(QSize(640, 480));
        gridLayout = new QGridLayout(centralwidget);
        gridLayout->setSpacing(1);
        gridLayout->setContentsMargins(1, 1, 1, 1);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        stackedWidget = new QStackedWidget(centralwidget);
        stackedWidget->setObjectName(QString::fromUtf8("stackedWidget"));
        stackedWidget->setStyleSheet(QString::fromUtf8("font: 10pt \"Ubuntu\";"));
        page = new QWidget();
        page->setObjectName(QString::fromUtf8("page"));
        gridLayout_3 = new QGridLayout(page);
        gridLayout_3->setSpacing(1);
        gridLayout_3->setContentsMargins(1, 1, 1, 1);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        frame = new QFrame(page);
        frame->setObjectName(QString::fromUtf8("frame"));
        QSizePolicy sizePolicy2(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(frame->sizePolicy().hasHeightForWidth());
        frame->setSizePolicy(sizePolicy2);
        frame->setMaximumSize(QSize(155, 16777215));
        frame->setStyleSheet(QString::fromUtf8("font: 10pt \"Ubuntu\";"));
        verticalLayout = new QVBoxLayout(frame);
        verticalLayout->setSpacing(1);
        verticalLayout->setContentsMargins(1, 1, 1, 1);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        groupBox_14 = new QGroupBox(frame);
        groupBox_14->setObjectName(QString::fromUtf8("groupBox_14"));
        groupBox_14->setMinimumSize(QSize(100, 0));
        groupBox_14->setMaximumSize(QSize(145, 16777215));
        groupBox_14->setFlat(false);
        verticalLayout_2 = new QVBoxLayout(groupBox_14);
        verticalLayout_2->setSpacing(2);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(3, 10, 3, 3);
        frame_6 = new QFrame(groupBox_14);
        frame_6->setObjectName(QString::fromUtf8("frame_6"));
        frame_6->setFrameShape(QFrame::StyledPanel);
        frame_6->setFrameShadow(QFrame::Raised);
        horizontalLayout_5 = new QHBoxLayout(frame_6);
        horizontalLayout_5->setSpacing(1);
        horizontalLayout_5->setContentsMargins(1, 1, 1, 1);
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        label_4 = new QLabel(frame_6);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setMinimumSize(QSize(0, 20));

        horizontalLayout_5->addWidget(label_4);

        protection_label = new QLabel(frame_6);
        protection_label->setObjectName(QString::fromUtf8("protection_label"));
        sizePolicy2.setHeightForWidth(protection_label->sizePolicy().hasHeightForWidth());
        protection_label->setSizePolicy(sizePolicy2);
        protection_label->setMinimumSize(QSize(40, 20));
        protection_label->setMaximumSize(QSize(40, 20));
        protection_label->setFrameShape(QFrame::WinPanel);
        protection_label->setFrameShadow(QFrame::Sunken);

        horizontalLayout_5->addWidget(protection_label);

        label_4->raise();
        protection_label->raise();

        verticalLayout_2->addWidget(frame_6);

        verticalSpacer_6 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer_6);


        verticalLayout->addWidget(groupBox_14);

        groupBox_15 = new QGroupBox(frame);
        groupBox_15->setObjectName(QString::fromUtf8("groupBox_15"));
        sizePolicy2.setHeightForWidth(groupBox_15->sizePolicy().hasHeightForWidth());
        groupBox_15->setSizePolicy(sizePolicy2);
        groupBox_15->setMaximumSize(QSize(145, 16777215));
        verticalLayout_4 = new QVBoxLayout(groupBox_15);
        verticalLayout_4->setSpacing(2);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        verticalLayout_4->setContentsMargins(3, 10, 3, 3);
        verticalSpacer_3 = new QSpacerItem(20, 208, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_4->addItem(verticalSpacer_3);


        verticalLayout->addWidget(groupBox_15);


        gridLayout_3->addWidget(frame, 0, 0, 1, 1);

        frame_2 = new QFrame(page);
        frame_2->setObjectName(QString::fromUtf8("frame_2"));
        frame_2->setMinimumSize(QSize(0, 0));
        frame_2->setMaximumSize(QSize(255, 16777215));
        verticalLayout_11 = new QVBoxLayout(frame_2);
        verticalLayout_11->setContentsMargins(0, 0, 0, 0);
        verticalLayout_11->setObjectName(QString::fromUtf8("verticalLayout_11"));
        groupBox_11 = new QGroupBox(frame_2);
        groupBox_11->setObjectName(QString::fromUtf8("groupBox_11"));
        groupBox_11->setMinimumSize(QSize(0, 0));
        groupBox_11->setMaximumSize(QSize(255, 16777215));
        groupBox_11->setStyleSheet(QString::fromUtf8("font: 10pt \"Ubuntu\";"));
        verticalLayout_12 = new QVBoxLayout(groupBox_11);
        verticalLayout_12->setContentsMargins(0, 0, 0, 0);
        verticalLayout_12->setObjectName(QString::fromUtf8("verticalLayout_12"));
        frame_20 = new QFrame(groupBox_11);
        frame_20->setObjectName(QString::fromUtf8("frame_20"));
        QSizePolicy sizePolicy3(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(frame_20->sizePolicy().hasHeightForWidth());
        frame_20->setSizePolicy(sizePolicy3);
        frame_20->setFrameShape(QFrame::StyledPanel);
        frame_20->setFrameShadow(QFrame::Raised);
        gridLayout_5 = new QGridLayout(frame_20);
        gridLayout_5->setSpacing(2);
        gridLayout_5->setContentsMargins(3, 3, 3, 3);
        gridLayout_5->setObjectName(QString::fromUtf8("gridLayout_5"));
        label_21 = new QLabel(frame_20);
        label_21->setObjectName(QString::fromUtf8("label_21"));
        sizePolicy.setHeightForWidth(label_21->sizePolicy().hasHeightForWidth());
        label_21->setSizePolicy(sizePolicy);
        label_21->setMinimumSize(QSize(175, 20));
        QFont font;
        font.setFamily(QString::fromUtf8("Ubuntu"));
        font.setPointSize(10);
        font.setBold(false);
        font.setItalic(false);
        font.setWeight(50);
        label_21->setFont(font);
        label_21->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout_5->addWidget(label_21, 1, 0, 1, 1);

        label_20 = new QLabel(frame_20);
        label_20->setObjectName(QString::fromUtf8("label_20"));
        sizePolicy.setHeightForWidth(label_20->sizePolicy().hasHeightForWidth());
        label_20->setSizePolicy(sizePolicy);
        label_20->setMinimumSize(QSize(175, 20));
        label_20->setFont(font);
        label_20->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout_5->addWidget(label_20, 0, 0, 1, 1);

        gun_turn_label = new QLabel(frame_20);
        gun_turn_label->setObjectName(QString::fromUtf8("gun_turn_label"));
        sizePolicy.setHeightForWidth(gun_turn_label->sizePolicy().hasHeightForWidth());
        gun_turn_label->setSizePolicy(sizePolicy);
        gun_turn_label->setMinimumSize(QSize(65, 0));
        gun_turn_label->setMaximumSize(QSize(65, 16777215));
        gun_turn_label->setFrameShape(QFrame::WinPanel);
        gun_turn_label->setFrameShadow(QFrame::Sunken);

        gridLayout_5->addWidget(gun_turn_label, 1, 2, 1, 1);

        turn_label = new QLabel(frame_20);
        turn_label->setObjectName(QString::fromUtf8("turn_label"));
        sizePolicy.setHeightForWidth(turn_label->sizePolicy().hasHeightForWidth());
        turn_label->setSizePolicy(sizePolicy);
        turn_label->setMinimumSize(QSize(65, 0));
        turn_label->setMaximumSize(QSize(65, 16777215));
        turn_label->setFrameShape(QFrame::WinPanel);
        turn_label->setFrameShadow(QFrame::Sunken);

        gridLayout_5->addWidget(turn_label, 0, 2, 1, 1);


        verticalLayout_12->addWidget(frame_20);

        frame_21 = new QFrame(groupBox_11);
        frame_21->setObjectName(QString::fromUtf8("frame_21"));
        sizePolicy3.setHeightForWidth(frame_21->sizePolicy().hasHeightForWidth());
        frame_21->setSizePolicy(sizePolicy3);
        frame_21->setFrameShape(QFrame::StyledPanel);
        frame_21->setFrameShadow(QFrame::Raised);
        gridLayout_4 = new QGridLayout(frame_21);
        gridLayout_4->setSpacing(2);
        gridLayout_4->setContentsMargins(3, 3, 3, 3);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        x_coord_label = new QLabel(frame_21);
        x_coord_label->setObjectName(QString::fromUtf8("x_coord_label"));
        sizePolicy2.setHeightForWidth(x_coord_label->sizePolicy().hasHeightForWidth());
        x_coord_label->setSizePolicy(sizePolicy2);
        x_coord_label->setMinimumSize(QSize(0, 0));
        x_coord_label->setMaximumSize(QSize(16777215, 16777215));
        x_coord_label->setFrameShape(QFrame::WinPanel);
        x_coord_label->setFrameShadow(QFrame::Sunken);

        gridLayout_4->addWidget(x_coord_label, 1, 2, 1, 1);

        verticalSpacer_5 = new QSpacerItem(20, 10, QSizePolicy::Minimum, QSizePolicy::Fixed);

        gridLayout_4->addItem(verticalSpacer_5, 3, 1, 1, 2);

        y_coord_label = new QLabel(frame_21);
        y_coord_label->setObjectName(QString::fromUtf8("y_coord_label"));
        sizePolicy2.setHeightForWidth(y_coord_label->sizePolicy().hasHeightForWidth());
        y_coord_label->setSizePolicy(sizePolicy2);
        y_coord_label->setMinimumSize(QSize(0, 0));
        y_coord_label->setMaximumSize(QSize(16777215, 16777215));
        y_coord_label->setFrameShape(QFrame::WinPanel);
        y_coord_label->setFrameShadow(QFrame::Sunken);

        gridLayout_4->addWidget(y_coord_label, 2, 2, 1, 1);

        label_5 = new QLabel(frame_21);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setMaximumSize(QSize(15, 16777215));

        gridLayout_4->addWidget(label_5, 1, 1, 1, 1);

        label_6 = new QLabel(frame_21);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setMaximumSize(QSize(15, 16777215));

        gridLayout_4->addWidget(label_6, 2, 1, 1, 1);

        label_22 = new QLabel(frame_21);
        label_22->setObjectName(QString::fromUtf8("label_22"));
        sizePolicy2.setHeightForWidth(label_22->sizePolicy().hasHeightForWidth());
        label_22->setSizePolicy(sizePolicy2);
        label_22->setMinimumSize(QSize(0, 20));
        label_22->setFont(font);
        label_22->setAlignment(Qt::AlignCenter);

        gridLayout_4->addWidget(label_22, 0, 1, 1, 2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        label_23 = new QLabel(frame_21);
        label_23->setObjectName(QString::fromUtf8("label_23"));
        sizePolicy2.setHeightForWidth(label_23->sizePolicy().hasHeightForWidth());
        label_23->setSizePolicy(sizePolicy2);
        label_23->setMinimumSize(QSize(0, 20));
        label_23->setMaximumSize(QSize(80, 16777215));
        label_23->setFont(font);
        label_23->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        horizontalLayout_3->addWidget(label_23);

        height_label = new QLabel(frame_21);
        height_label->setObjectName(QString::fromUtf8("height_label"));
        sizePolicy2.setHeightForWidth(height_label->sizePolicy().hasHeightForWidth());
        height_label->setSizePolicy(sizePolicy2);
        height_label->setMinimumSize(QSize(0, 0));
        height_label->setFrameShape(QFrame::WinPanel);
        height_label->setFrameShadow(QFrame::Sunken);

        horizontalLayout_3->addWidget(height_label);


        gridLayout_4->addLayout(horizontalLayout_3, 4, 1, 1, 2);


        verticalLayout_12->addWidget(frame_21);

        groupBox_13 = new QGroupBox(groupBox_11);
        groupBox_13->setObjectName(QString::fromUtf8("groupBox_13"));
        sizePolicy3.setHeightForWidth(groupBox_13->sizePolicy().hasHeightForWidth());
        groupBox_13->setSizePolicy(sizePolicy3);
        groupBox_13->setMinimumSize(QSize(0, 200));
        groupBox_13->setMaximumSize(QSize(16777215, 200));
        groupBox_13->setStyleSheet(QString::fromUtf8("font: 10pt \"Ubuntu\";"));
        gridLayout_2 = new QGridLayout(groupBox_13);
        gridLayout_2->setSpacing(2);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        gridLayout_2->setContentsMargins(2, 3, 2, 2);
        gun_up = new QPushButton(groupBox_13);
        gun_up->setObjectName(QString::fromUtf8("gun_up"));
        gun_up->setMinimumSize(QSize(0, 33));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Ubuntu"));
        font1.setPointSize(9);
        font1.setBold(false);
        font1.setItalic(false);
        font1.setWeight(50);
        gun_up->setFont(font1);
        gun_up->setStyleSheet(QString::fromUtf8("font: 9pt \"Ubuntu\";\n"
"color: rgb(0, 0, 0);\n"
"background: rgb(255, 255, 127)"));
        gun_up->setAutoRepeat(true);
        gun_up->setAutoRepeatDelay(100);
        gun_up->setAutoRepeatInterval(16);

        gridLayout_2->addWidget(gun_up, 1, 0, 1, 1);

        gun_down = new QPushButton(groupBox_13);
        gun_down->setObjectName(QString::fromUtf8("gun_down"));
        gun_down->setMinimumSize(QSize(0, 33));
        gun_down->setFont(font1);
        gun_down->setStyleSheet(QString::fromUtf8("font: 9pt \"Ubuntu\";\n"
"color: rgb(0, 0, 0);\n"
"background: rgb(255, 255, 127)"));
        gun_down->setAutoRepeat(true);
        gun_down->setAutoRepeatDelay(100);
        gun_down->setAutoRepeatInterval(16);

        gridLayout_2->addWidget(gun_down, 1, 1, 1, 1);

        gun_fire = new QPushButton(groupBox_13);
        gun_fire->setObjectName(QString::fromUtf8("gun_fire"));
        gun_fire->setMinimumSize(QSize(0, 33));
        gun_fire->setFont(font1);
        gun_fire->setStyleSheet(QString::fromUtf8("font: 9pt \"Ubuntu\";\n"
"background: rgb(255, 255, 127); color: red"));

        gridLayout_2->addWidget(gun_fire, 1, 2, 1, 1);

        gun_left = new QPushButton(groupBox_13);
        gun_left->setObjectName(QString::fromUtf8("gun_left"));
        gun_left->setMinimumSize(QSize(0, 33));
        gun_left->setFont(font1);
        gun_left->setStyleSheet(QString::fromUtf8("font: 9pt \"Ubuntu\";\n"
"color: rgb(0, 0, 0);\n"
"background: rgb(255, 255, 127)"));
        gun_left->setAutoRepeat(true);
        gun_left->setAutoRepeatDelay(100);
        gun_left->setAutoRepeatInterval(16);

        gridLayout_2->addWidget(gun_left, 1, 3, 1, 1);

        gun_right = new QPushButton(groupBox_13);
        gun_right->setObjectName(QString::fromUtf8("gun_right"));
        gun_right->setMinimumSize(QSize(0, 33));
        gun_right->setFont(font1);
        gun_right->setStyleSheet(QString::fromUtf8("font: 9pt \"Ubuntu\";\n"
"color: rgb(0, 0, 0);\n"
"background: rgb(255, 255, 127)"));
        gun_right->setAutoRepeat(true);
        gun_right->setAutoRepeatDelay(100);
        gun_right->setAutoRepeatInterval(16);

        gridLayout_2->addWidget(gun_right, 1, 5, 1, 1);

        tank_forward = new QPushButton(groupBox_13);
        tank_forward->setObjectName(QString::fromUtf8("tank_forward"));
        tank_forward->setMinimumSize(QSize(0, 33));
        tank_forward->setFont(font1);
        tank_forward->setStyleSheet(QString::fromUtf8("font: 9pt \"Ubuntu\";"));
        tank_forward->setAutoRepeat(true);
        tank_forward->setAutoRepeatDelay(0);
        tank_forward->setAutoRepeatInterval(100);
        tank_forward->setAutoDefault(false);
        tank_forward->setFlat(false);

        gridLayout_2->addWidget(tank_forward, 0, 0, 1, 1);

        tank_back = new QPushButton(groupBox_13);
        tank_back->setObjectName(QString::fromUtf8("tank_back"));
        tank_back->setMinimumSize(QSize(0, 33));
        tank_back->setFont(font1);
        tank_back->setStyleSheet(QString::fromUtf8("font: 9pt \"Ubuntu\";"));
        tank_back->setAutoRepeat(true);
        tank_back->setAutoRepeatDelay(0);
        tank_back->setAutoRepeatInterval(100);

        gridLayout_2->addWidget(tank_back, 0, 1, 1, 1);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Maximum);

        gridLayout_2->addItem(verticalSpacer, 2, 0, 1, 1);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        protection = new QPushButton(groupBox_13);
        protection->setObjectName(QString::fromUtf8("protection"));
        QSizePolicy sizePolicy4(QSizePolicy::Minimum, QSizePolicy::Maximum);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(protection->sizePolicy().hasHeightForWidth());
        protection->setSizePolicy(sizePolicy4);
        protection->setMinimumSize(QSize(100, 33));
        protection->setFont(font1);
        protection->setStyleSheet(QString::fromUtf8("font: 9pt \"Ubuntu\";\n"
"color: rgb(0, 0, 0);\n"
"background: rgb(255, 255, 127)"));

        verticalLayout_3->addWidget(protection);


        gridLayout_2->addLayout(verticalLayout_3, 2, 1, 1, 3);

        tank_stop = new QPushButton(groupBox_13);
        tank_stop->setObjectName(QString::fromUtf8("tank_stop"));
        tank_stop->setEnabled(true);
        QSizePolicy sizePolicy5(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy5.setHorizontalStretch(0);
        sizePolicy5.setVerticalStretch(0);
        sizePolicy5.setHeightForWidth(tank_stop->sizePolicy().hasHeightForWidth());
        tank_stop->setSizePolicy(sizePolicy5);
        tank_stop->setMinimumSize(QSize(0, 33));
        tank_stop->setFont(font1);
        tank_stop->setStyleSheet(QString::fromUtf8("font: 9pt \"Ubuntu\";\n"
"color: red;"));

        gridLayout_2->addWidget(tank_stop, 0, 2, 1, 1);

        tank_left = new QPushButton(groupBox_13);
        tank_left->setObjectName(QString::fromUtf8("tank_left"));
        tank_left->setMinimumSize(QSize(0, 33));
        tank_left->setFont(font1);
        tank_left->setStyleSheet(QString::fromUtf8("font: 9pt \"Ubuntu\";"));
        tank_left->setAutoRepeat(true);
        tank_left->setAutoRepeatDelay(100);
        tank_left->setAutoRepeatInterval(16);

        gridLayout_2->addWidget(tank_left, 0, 3, 1, 1);

        tank_right = new QPushButton(groupBox_13);
        tank_right->setObjectName(QString::fromUtf8("tank_right"));
        tank_right->setMinimumSize(QSize(0, 33));
        tank_right->setFont(font1);
        tank_right->setStyleSheet(QString::fromUtf8("font: 9pt \"Ubuntu\";"));
        tank_right->setAutoRepeat(true);
        tank_right->setAutoRepeatDelay(100);
        tank_right->setAutoRepeatInterval(16);

        gridLayout_2->addWidget(tank_right, 0, 5, 1, 1);


        verticalLayout_12->addWidget(groupBox_13);


        verticalLayout_11->addWidget(groupBox_11);


        gridLayout_3->addWidget(frame_2, 0, 1, 1, 1);

        frame_3 = new QFrame(page);
        frame_3->setObjectName(QString::fromUtf8("frame_3"));
        sizePolicy.setHeightForWidth(frame_3->sizePolicy().hasHeightForWidth());
        frame_3->setSizePolicy(sizePolicy);
        frame_3->setMinimumSize(QSize(200, 0));
        frame_3->setMaximumSize(QSize(16777215, 16777215));
        verticalLayout_8 = new QVBoxLayout(frame_3);
        verticalLayout_8->setContentsMargins(0, 0, 0, 0);
        verticalLayout_8->setObjectName(QString::fromUtf8("verticalLayout_8"));
        groupBox_2 = new QGroupBox(frame_3);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        sizePolicy3.setHeightForWidth(groupBox_2->sizePolicy().hasHeightForWidth());
        groupBox_2->setSizePolicy(sizePolicy3);
        groupBox_2->setStyleSheet(QString::fromUtf8("font: 10pt \"Ubuntu\";"));
        groupBox_2->setAlignment(Qt::AlignCenter);
        verticalLayout_9 = new QVBoxLayout(groupBox_2);
        verticalLayout_9->setSpacing(2);
        verticalLayout_9->setObjectName(QString::fromUtf8("verticalLayout_9"));
        verticalLayout_9->setContentsMargins(3, 10, 3, 3);
        frame_15 = new QFrame(groupBox_2);
        frame_15->setObjectName(QString::fromUtf8("frame_15"));
        frame_15->setFrameShape(QFrame::StyledPanel);
        frame_15->setFrameShadow(QFrame::Raised);
        horizontalLayout_2 = new QHBoxLayout(frame_15);
        horizontalLayout_2->setContentsMargins(3, 3, 3, 3);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label_7 = new QLabel(frame_15);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setMinimumSize(QSize(132, 20));
        label_7->setFont(font);

        horizontalLayout_2->addWidget(label_7);

        ammo_label = new QLabel(frame_15);
        ammo_label->setObjectName(QString::fromUtf8("ammo_label"));
        ammo_label->setMinimumSize(QSize(40, 0));
        ammo_label->setMaximumSize(QSize(40, 16777215));
        ammo_label->setFrameShape(QFrame::WinPanel);
        ammo_label->setFrameShadow(QFrame::Sunken);

        horizontalLayout_2->addWidget(ammo_label);


        verticalLayout_9->addWidget(frame_15);

        frame_16 = new QFrame(groupBox_2);
        frame_16->setObjectName(QString::fromUtf8("frame_16"));
        frame_16->setFrameShape(QFrame::StyledPanel);
        frame_16->setFrameShadow(QFrame::Raised);
        horizontalLayout_13 = new QHBoxLayout(frame_16);
        horizontalLayout_13->setContentsMargins(3, 3, 3, 3);
        horizontalLayout_13->setObjectName(QString::fromUtf8("horizontalLayout_13"));
        label_17 = new QLabel(frame_16);
        label_17->setObjectName(QString::fromUtf8("label_17"));
        label_17->setMinimumSize(QSize(125, 20));
        label_17->setFont(font);

        horizontalLayout_13->addWidget(label_17);

        gun_angle_label = new QLabel(frame_16);
        gun_angle_label->setObjectName(QString::fromUtf8("gun_angle_label"));
        gun_angle_label->setMinimumSize(QSize(40, 0));
        gun_angle_label->setMaximumSize(QSize(40, 16777215));
        gun_angle_label->setFrameShape(QFrame::WinPanel);
        gun_angle_label->setFrameShadow(QFrame::Sunken);

        horizontalLayout_13->addWidget(gun_angle_label);


        verticalLayout_9->addWidget(frame_16);


        verticalLayout_8->addWidget(groupBox_2);

        groupBox_10 = new QGroupBox(frame_3);
        groupBox_10->setObjectName(QString::fromUtf8("groupBox_10"));
        sizePolicy3.setHeightForWidth(groupBox_10->sizePolicy().hasHeightForWidth());
        groupBox_10->setSizePolicy(sizePolicy3);
        groupBox_10->setStyleSheet(QString::fromUtf8("font: 10pt \"Ubuntu\";"));
        groupBox_10->setAlignment(Qt::AlignCenter);
        verticalLayout_10 = new QVBoxLayout(groupBox_10);
        verticalLayout_10->setSpacing(2);
        verticalLayout_10->setObjectName(QString::fromUtf8("verticalLayout_10"));
        verticalLayout_10->setContentsMargins(3, 10, 3, 3);
        frame_17 = new QFrame(groupBox_10);
        frame_17->setObjectName(QString::fromUtf8("frame_17"));
        frame_17->setFrameShape(QFrame::StyledPanel);
        frame_17->setFrameShadow(QFrame::Raised);
        horizontalLayout_14 = new QHBoxLayout(frame_17);
        horizontalLayout_14->setContentsMargins(3, 3, 3, 3);
        horizontalLayout_14->setObjectName(QString::fromUtf8("horizontalLayout_14"));
        label_8 = new QLabel(frame_17);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        sizePolicy2.setHeightForWidth(label_8->sizePolicy().hasHeightForWidth());
        label_8->setSizePolicy(sizePolicy2);
        label_8->setMinimumSize(QSize(89, 20));
        label_8->setFont(font);

        horizontalLayout_14->addWidget(label_8);

        type_gun_comboBox = new QComboBox(frame_17);
        type_gun_comboBox->setObjectName(QString::fromUtf8("type_gun_comboBox"));

        horizontalLayout_14->addWidget(type_gun_comboBox);


        verticalLayout_10->addWidget(frame_17);

        frame_18 = new QFrame(groupBox_10);
        frame_18->setObjectName(QString::fromUtf8("frame_18"));
        frame_18->setFrameShape(QFrame::StyledPanel);
        frame_18->setFrameShadow(QFrame::Raised);
        horizontalLayout_15 = new QHBoxLayout(frame_18);
        horizontalLayout_15->setContentsMargins(3, 3, 3, 3);
        horizontalLayout_15->setObjectName(QString::fromUtf8("horizontalLayout_15"));
        label_18 = new QLabel(frame_18);
        label_18->setObjectName(QString::fromUtf8("label_18"));
        sizePolicy2.setHeightForWidth(label_18->sizePolicy().hasHeightForWidth());
        label_18->setSizePolicy(sizePolicy2);
        label_18->setMinimumSize(QSize(89, 20));
        label_18->setFont(font);

        horizontalLayout_15->addWidget(label_18);

        type_ammo_comboBox = new QComboBox(frame_18);
        type_ammo_comboBox->setObjectName(QString::fromUtf8("type_ammo_comboBox"));

        horizontalLayout_15->addWidget(type_ammo_comboBox);


        verticalLayout_10->addWidget(frame_18);

        frame_19 = new QFrame(groupBox_10);
        frame_19->setObjectName(QString::fromUtf8("frame_19"));
        frame_19->setFrameShape(QFrame::StyledPanel);
        frame_19->setFrameShadow(QFrame::Raised);
        horizontalLayout_16 = new QHBoxLayout(frame_19);
        horizontalLayout_16->setContentsMargins(3, 3, 3, 3);
        horizontalLayout_16->setObjectName(QString::fromUtf8("horizontalLayout_16"));
        label_19 = new QLabel(frame_19);
        label_19->setObjectName(QString::fromUtf8("label_19"));
        label_19->setMinimumSize(QSize(82, 20));
        label_19->setFont(font);

        horizontalLayout_16->addWidget(label_19);

        type_shoot_comboBox = new QComboBox(frame_19);
        type_shoot_comboBox->setObjectName(QString::fromUtf8("type_shoot_comboBox"));

        horizontalLayout_16->addWidget(type_shoot_comboBox);


        verticalLayout_10->addWidget(frame_19);


        verticalLayout_8->addWidget(groupBox_10);

        groupBox_12 = new QGroupBox(frame_3);
        groupBox_12->setObjectName(QString::fromUtf8("groupBox_12"));
        sizePolicy3.setHeightForWidth(groupBox_12->sizePolicy().hasHeightForWidth());
        groupBox_12->setSizePolicy(sizePolicy3);
        groupBox_12->setMinimumSize(QSize(0, 0));
        groupBox_12->setFont(font);
        groupBox_12->setStyleSheet(QString::fromUtf8("font: 10pt \"Ubuntu\";"));
        groupBox_12->setAlignment(Qt::AlignCenter);
        groupBox_12->setFlat(false);
        groupBox_12->setCheckable(false);
        verticalLayout_13 = new QVBoxLayout(groupBox_12);
        verticalLayout_13->setSpacing(2);
        verticalLayout_13->setObjectName(QString::fromUtf8("verticalLayout_13"));
        verticalLayout_13->setContentsMargins(3, 10, 3, 3);
        frame_22 = new QFrame(groupBox_12);
        frame_22->setObjectName(QString::fromUtf8("frame_22"));
        sizePolicy3.setHeightForWidth(frame_22->sizePolicy().hasHeightForWidth());
        frame_22->setSizePolicy(sizePolicy3);
        frame_22->setFrameShape(QFrame::StyledPanel);
        frame_22->setFrameShadow(QFrame::Raised);
        horizontalLayout_19 = new QHBoxLayout(frame_22);
        horizontalLayout_19->setContentsMargins(3, 3, 3, 3);
        horizontalLayout_19->setObjectName(QString::fromUtf8("horizontalLayout_19"));
        label_25 = new QLabel(frame_22);
        label_25->setObjectName(QString::fromUtf8("label_25"));
        label_25->setMinimumSize(QSize(115, 20));
        label_25->setMaximumSize(QSize(115, 16777215));
        label_25->setFont(font);

        horizontalLayout_19->addWidget(label_25);

        speed_label = new QLabel(frame_22);
        speed_label->setObjectName(QString::fromUtf8("speed_label"));
        speed_label->setMinimumSize(QSize(55, 0));
        speed_label->setMaximumSize(QSize(55, 16777215));
        speed_label->setFrameShape(QFrame::WinPanel);
        speed_label->setFrameShadow(QFrame::Sunken);
        speed_label->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        horizontalLayout_19->addWidget(speed_label);


        verticalLayout_13->addWidget(frame_22);

        frame_23 = new QFrame(groupBox_12);
        frame_23->setObjectName(QString::fromUtf8("frame_23"));
        sizePolicy3.setHeightForWidth(frame_23->sizePolicy().hasHeightForWidth());
        frame_23->setSizePolicy(sizePolicy3);
        frame_23->setFrameShape(QFrame::StyledPanel);
        frame_23->setFrameShadow(QFrame::Raised);
        horizontalLayout_20 = new QHBoxLayout(frame_23);
        horizontalLayout_20->setContentsMargins(3, 3, 3, 3);
        horizontalLayout_20->setObjectName(QString::fromUtf8("horizontalLayout_20"));
        label_26 = new QLabel(frame_23);
        label_26->setObjectName(QString::fromUtf8("label_26"));
        label_26->setMinimumSize(QSize(115, 20));
        label_26->setMaximumSize(QSize(115, 16777215));
        label_26->setFont(font);

        horizontalLayout_20->addWidget(label_26);

        distance_label = new QLabel(frame_23);
        distance_label->setObjectName(QString::fromUtf8("distance_label"));
        distance_label->setMaximumSize(QSize(55, 16777215));
        distance_label->setFrameShape(QFrame::WinPanel);
        distance_label->setFrameShadow(QFrame::Sunken);
        distance_label->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        horizontalLayout_20->addWidget(distance_label);


        verticalLayout_13->addWidget(frame_23);

        frame_24 = new QFrame(groupBox_12);
        frame_24->setObjectName(QString::fromUtf8("frame_24"));
        sizePolicy3.setHeightForWidth(frame_24->sizePolicy().hasHeightForWidth());
        frame_24->setSizePolicy(sizePolicy3);
        frame_24->setFrameShape(QFrame::StyledPanel);
        frame_24->setFrameShadow(QFrame::Raised);
        horizontalLayout_21 = new QHBoxLayout(frame_24);
        horizontalLayout_21->setContentsMargins(3, 3, 3, 3);
        horizontalLayout_21->setObjectName(QString::fromUtf8("horizontalLayout_21"));
        label_27 = new QLabel(frame_24);
        label_27->setObjectName(QString::fromUtf8("label_27"));
        label_27->setMinimumSize(QSize(115, 20));
        label_27->setMaximumSize(QSize(115, 16777215));

        horizontalLayout_21->addWidget(label_27);

        fuel_cons_label = new QLabel(frame_24);
        fuel_cons_label->setObjectName(QString::fromUtf8("fuel_cons_label"));
        fuel_cons_label->setMaximumSize(QSize(55, 16777215));
        fuel_cons_label->setFrameShape(QFrame::WinPanel);
        fuel_cons_label->setFrameShadow(QFrame::Sunken);
        fuel_cons_label->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        horizontalLayout_21->addWidget(fuel_cons_label);


        verticalLayout_13->addWidget(frame_24);

        frame_25 = new QFrame(groupBox_12);
        frame_25->setObjectName(QString::fromUtf8("frame_25"));
        sizePolicy3.setHeightForWidth(frame_25->sizePolicy().hasHeightForWidth());
        frame_25->setSizePolicy(sizePolicy3);
        frame_25->setFrameShape(QFrame::StyledPanel);
        frame_25->setFrameShadow(QFrame::Raised);
        horizontalLayout_22 = new QHBoxLayout(frame_25);
        horizontalLayout_22->setContentsMargins(3, 3, 3, 3);
        horizontalLayout_22->setObjectName(QString::fromUtf8("horizontalLayout_22"));
        label_28 = new QLabel(frame_25);
        label_28->setObjectName(QString::fromUtf8("label_28"));
        label_28->setMinimumSize(QSize(115, 20));
        label_28->setMaximumSize(QSize(115, 16777215));

        horizontalLayout_22->addWidget(label_28);

        km_left_label = new QLabel(frame_25);
        km_left_label->setObjectName(QString::fromUtf8("km_left_label"));
        km_left_label->setMaximumSize(QSize(55, 16777215));
        km_left_label->setFrameShape(QFrame::WinPanel);
        km_left_label->setFrameShadow(QFrame::Sunken);
        km_left_label->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        horizontalLayout_22->addWidget(km_left_label);


        verticalLayout_13->addWidget(frame_25);


        verticalLayout_8->addWidget(groupBox_12);


        gridLayout_3->addWidget(frame_3, 0, 2, 1, 1);

        stackedWidget->addWidget(page);
        page_connect = new QWidget();
        page_connect->setObjectName(QString::fromUtf8("page_connect"));
        gridLayout_6 = new QGridLayout(page_connect);
        gridLayout_6->setObjectName(QString::fromUtf8("gridLayout_6"));
        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_6->addItem(verticalSpacer_2, 6, 0, 1, 3);

        connect = new QPushButton(page_connect);
        connect->setObjectName(QString::fromUtf8("connect"));

        gridLayout_6->addWidget(connect, 5, 2, 1, 1);

        frame_5 = new QFrame(page_connect);
        frame_5->setObjectName(QString::fromUtf8("frame_5"));
        frame_5->setFrameShape(QFrame::StyledPanel);
        frame_5->setFrameShadow(QFrame::Raised);
        horizontalLayout = new QHBoxLayout(frame_5);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label_2 = new QLabel(frame_5);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setMinimumSize(QSize(65, 0));
        label_2->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout->addWidget(label_2);

        port_lineEdit = new QLineEdit(frame_5);
        port_lineEdit->setObjectName(QString::fromUtf8("port_lineEdit"));

        horizontalLayout->addWidget(port_lineEdit);


        gridLayout_6->addWidget(frame_5, 3, 0, 1, 3);

        verticalSpacer_4 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_6->addItem(verticalSpacer_4, 0, 0, 1, 3);

        exit = new QPushButton(page_connect);
        exit->setObjectName(QString::fromUtf8("exit"));

        gridLayout_6->addWidget(exit, 5, 1, 1, 1);

        frame_4 = new QFrame(page_connect);
        frame_4->setObjectName(QString::fromUtf8("frame_4"));
        frame_4->setFrameShape(QFrame::StyledPanel);
        frame_4->setFrameShadow(QFrame::Raised);
        horizontalLayout_4 = new QHBoxLayout(frame_4);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        label = new QLabel(frame_4);
        label->setObjectName(QString::fromUtf8("label"));
        label->setMinimumSize(QSize(65, 0));
        label->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout_4->addWidget(label);

        ip_lineEdit = new QLineEdit(frame_4);
        ip_lineEdit->setObjectName(QString::fromUtf8("ip_lineEdit"));

        horizontalLayout_4->addWidget(ip_lineEdit);


        gridLayout_6->addWidget(frame_4, 2, 0, 1, 3);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_6->addItem(horizontalSpacer, 5, 0, 1, 1);

        label_3 = new QLabel(page_connect);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setAlignment(Qt::AlignCenter);

        gridLayout_6->addWidget(label_3, 1, 0, 1, 3);

        stackedWidget->addWidget(page_connect);

        gridLayout->addWidget(stackedWidget, 0, 0, 1, 1);

        MainWindow->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        stackedWidget->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "Terminal UI Example", 0, QApplication::UnicodeUTF8));
        groupBox_14->setTitle(QApplication::translate("MainWindow", "\320\243\320\277\321\200\320\260\320\262\320\273\320\265\320\275\320\270\320\265 \320\267\320\260\321\211\320\270\321\202\320\276\320\271:", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("MainWindow", "\320\227\320\260\321\211\320\270\321\202\320\260 (\321\210\321\202):", 0, QApplication::UnicodeUTF8));
        protection_label->setText(QApplication::translate("MainWindow", "0", 0, QApplication::UnicodeUTF8));
        groupBox_15->setTitle(QApplication::translate("MainWindow", "\320\237\320\260\321\200\320\260\320\274\320\265\321\202\321\200\321\213 \320\237\321\201-\320\250:", 0, QApplication::UnicodeUTF8));
        groupBox_11->setTitle(QApplication::translate("MainWindow", "\320\235\320\260\320\262\320\270\320\263\320\260\321\206\320\270\321\217:", 0, QApplication::UnicodeUTF8));
        label_21->setText(QApplication::translate("MainWindow", "\320\243\320\263\320\276\320\273 \320\277\320\276\320\262\320\276\321\200\320\276\321\202\320\260 \320\277\321\203\321\210\320\272\320\270:", 0, QApplication::UnicodeUTF8));
        label_20->setText(QApplication::translate("MainWindow", "\320\243\320\263\320\276\320\273 \320\277\320\276\320\262\320\276\321\200\320\276\321\202\320\260 \320\274\320\260\321\210\320\270\320\275\321\213:", 0, QApplication::UnicodeUTF8));
        gun_turn_label->setText(QApplication::translate("MainWindow", "0", 0, QApplication::UnicodeUTF8));
        turn_label->setText(QApplication::translate("MainWindow", "0", 0, QApplication::UnicodeUTF8));
        x_coord_label->setText(QApplication::translate("MainWindow", "0", 0, QApplication::UnicodeUTF8));
        y_coord_label->setText(QApplication::translate("MainWindow", "0", 0, QApplication::UnicodeUTF8));
        label_5->setText(QApplication::translate("MainWindow", "X:", 0, QApplication::UnicodeUTF8));
        label_6->setText(QApplication::translate("MainWindow", "Y:", 0, QApplication::UnicodeUTF8));
        label_22->setText(QApplication::translate("MainWindow", "\320\232\320\276\320\276\321\200\320\264\320\270\320\275\320\260\321\202\321\213:", 0, QApplication::UnicodeUTF8));
        label_23->setText(QApplication::translate("MainWindow", "\320\222\321\213\321\201\320\276\321\202\320\260 (\320\274):", 0, QApplication::UnicodeUTF8));
        height_label->setText(QApplication::translate("MainWindow", "110", 0, QApplication::UnicodeUTF8));
        groupBox_13->setTitle(QApplication::translate("MainWindow", "\320\243\320\277\321\200\320\260\320\262\320\273\320\265\320\275\320\270\320\265 \320\264\320\262\320\270\320\266\320\265\320\275\320\270\320\265\320\274:", 0, QApplication::UnicodeUTF8));
        gun_up->setText(QApplication::translate("MainWindow", "\360\237\241\221 ", 0, QApplication::UnicodeUTF8));
        gun_down->setText(QApplication::translate("MainWindow", "\360\237\241\223 ", 0, QApplication::UnicodeUTF8));
        gun_fire->setText(QApplication::translate("MainWindow", "\320\236\320\223\320\236\320\235\320\254!", 0, QApplication::UnicodeUTF8));
        gun_left->setText(QApplication::translate("MainWindow", "\360\237\241\220", 0, QApplication::UnicodeUTF8));
        gun_right->setText(QApplication::translate("MainWindow", "\360\237\241\222", 0, QApplication::UnicodeUTF8));
        tank_forward->setText(QApplication::translate("MainWindow", "\360\237\241\221 ", 0, QApplication::UnicodeUTF8));
        tank_back->setText(QApplication::translate("MainWindow", "\360\237\241\223 ", 0, QApplication::UnicodeUTF8));
        protection->setText(QApplication::translate("MainWindow", "\320\227\320\220\320\251\320\230\320\242\320\220", 0, QApplication::UnicodeUTF8));
        tank_stop->setText(QApplication::translate("MainWindow", "\320\241\320\242\320\236\320\237!", 0, QApplication::UnicodeUTF8));
        tank_left->setText(QApplication::translate("MainWindow", "\360\237\241\220", 0, QApplication::UnicodeUTF8));
        tank_right->setText(QApplication::translate("MainWindow", "\360\237\241\222", 0, QApplication::UnicodeUTF8));
        groupBox_2->setTitle(QApplication::translate("MainWindow", "\320\237\320\260\321\200\320\260\320\274\320\265\321\202\321\200\321\213 \320\262\320\276\320\276\321\200\321\203\320\266\320\265\320\275\320\270\321\217:", 0, QApplication::UnicodeUTF8));
        label_7->setText(QApplication::translate("MainWindow", "\320\241\320\275\320\260\321\200\321\217\320\264\320\276\320\262 (\321\210\321\202):", 0, QApplication::UnicodeUTF8));
        ammo_label->setText(QApplication::translate("MainWindow", "0", 0, QApplication::UnicodeUTF8));
        label_17->setText(QApplication::translate("MainWindow", "\320\243\320\263\320\276\320\273 \320\275\320\260\320\272\320\273\320\276\320\275\320\260 \320\277\321\203\321\210\320\272\320\270:", 0, QApplication::UnicodeUTF8));
        gun_angle_label->setText(QApplication::translate("MainWindow", "0", 0, QApplication::UnicodeUTF8));
        groupBox_10->setTitle(QApplication::translate("MainWindow", "\320\243\320\277\321\200\320\260\320\262\320\273\320\265\320\275\320\270\320\265 \320\262\320\276\320\276\321\200\321\203\320\266\320\265\320\275\320\270\320\265\320\274:", 0, QApplication::UnicodeUTF8));
        label_8->setText(QApplication::translate("MainWindow", "\320\242\320\270\320\277 \320\276\321\200\321\203\320\264\320\270\321\217:", 0, QApplication::UnicodeUTF8));
        type_gun_comboBox->clear();
        type_gun_comboBox->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "\320\242\320\270\320\277 1", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindow", "\320\242\320\270\320\277 2", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindow", "\320\242\320\270\320\277 3", 0, QApplication::UnicodeUTF8)
        );
        label_18->setText(QApplication::translate("MainWindow", "\320\221\320\276\320\265\320\277\321\200\320\270\320\277\320\260\321\201\321\213:", 0, QApplication::UnicodeUTF8));
        type_ammo_comboBox->clear();
        type_ammo_comboBox->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "\320\242\320\270\320\277 1", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindow", "\320\242\320\270\320\277 2", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindow", "\320\242\320\270\320\277 3", 0, QApplication::UnicodeUTF8)
        );
        label_19->setText(QApplication::translate("MainWindow", "\320\242\320\270\320\277 \321\201\321\202\321\200\320\265\320\273\321\214\320\261\321\213:", 0, QApplication::UnicodeUTF8));
        type_shoot_comboBox->clear();
        type_shoot_comboBox->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "\320\242\320\270\320\277 1", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindow", "\320\242\320\270\320\277 2", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindow", "\320\242\320\270\320\277 3", 0, QApplication::UnicodeUTF8)
        );
        groupBox_12->setTitle(QApplication::translate("MainWindow", "\320\237\320\260\321\200\320\260\320\274\320\265\321\202\321\200\321\213 \320\264\320\262\320\270\320\266\320\265\320\275\320\270\321\217:", 0, QApplication::UnicodeUTF8));
        label_25->setText(QApplication::translate("MainWindow", "\320\241\320\272\320\276\321\200\320\276\321\201\321\202\321\214 (\320\272\320\274/\321\207):", 0, QApplication::UnicodeUTF8));
        speed_label->setText(QApplication::translate("MainWindow", "0", 0, QApplication::UnicodeUTF8));
        label_26->setText(QApplication::translate("MainWindow", "\320\240\320\260\321\201\321\201\321\202\320\276\321\217\320\275\320\270\320\265 (\320\272\320\274):", 0, QApplication::UnicodeUTF8));
        distance_label->setText(QApplication::translate("MainWindow", "0", 0, QApplication::UnicodeUTF8));
        label_27->setText(QApplication::translate("MainWindow", "\320\240\320\260\321\201\321\205\320\276\320\264 (\320\273/100 \320\272\320\274):", 0, QApplication::UnicodeUTF8));
        fuel_cons_label->setText(QApplication::translate("MainWindow", "345", 0, QApplication::UnicodeUTF8));
        label_28->setText(QApplication::translate("MainWindow", "\320\236\321\201\321\202\320\260\320\273\320\276\321\201\321\214 (\320\272\320\274):", 0, QApplication::UnicodeUTF8));
        km_left_label->setText(QApplication::translate("MainWindow", "160", 0, QApplication::UnicodeUTF8));
        connect->setText(QApplication::translate("MainWindow", "\320\237\320\276\320\264\320\272\320\273\321\216\321\207\320\270\321\202\321\214\321\201\321\217", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("MainWindow", "Port:", 0, QApplication::UnicodeUTF8));
        port_lineEdit->setText(QApplication::translate("MainWindow", "1488", 0, QApplication::UnicodeUTF8));
        exit->setText(QApplication::translate("MainWindow", "\320\222\321\213\321\205\320\276\320\264", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("MainWindow", "IP:", 0, QApplication::UnicodeUTF8));
        ip_lineEdit->setText(QApplication::translate("MainWindow", "10.10.10.42", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("MainWindow", "\320\222\320\262\320\265\320\264\320\270\321\202\320\265 IP \320\260\320\264\321\200\320\265\321\201 \320\270 \320\277\320\276\321\200\321\202 \321\201\320\265\321\200\320\262\320\265\321\200\320\260", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TERMINAL_H
