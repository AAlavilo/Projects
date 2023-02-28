/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QProgressBar *progressBar;
    QProgressBar *progressBar_2;
    QPushButton *swt_plr_btn;
    QPushButton *swt_plr_btn_2;
    QPushButton *short_time;
    QPushButton *longTime;
    QPushButton *start_btn;
    QPushButton *stop_btn;
    QLabel *status_label;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(800, 600);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        progressBar = new QProgressBar(centralwidget);
        progressBar->setObjectName(QString::fromUtf8("progressBar"));
        progressBar->setGeometry(QRect(110, 70, 201, 61));
        progressBar->setValue(100);
        progressBar_2 = new QProgressBar(centralwidget);
        progressBar_2->setObjectName(QString::fromUtf8("progressBar_2"));
        progressBar_2->setGeometry(QRect(520, 70, 201, 61));
        progressBar_2->setValue(100);
        swt_plr_btn = new QPushButton(centralwidget);
        swt_plr_btn->setObjectName(QString::fromUtf8("swt_plr_btn"));
        swt_plr_btn->setGeometry(QRect(110, 160, 131, 41));
        swt_plr_btn_2 = new QPushButton(centralwidget);
        swt_plr_btn_2->setObjectName(QString::fromUtf8("swt_plr_btn_2"));
        swt_plr_btn_2->setGeometry(QRect(520, 160, 131, 41));
        short_time = new QPushButton(centralwidget);
        short_time->setObjectName(QString::fromUtf8("short_time"));
        short_time->setGeometry(QRect(230, 300, 93, 29));
        short_time->setCheckable(true);
        short_time->setChecked(true);
        longTime = new QPushButton(centralwidget);
        longTime->setObjectName(QString::fromUtf8("longTime"));
        longTime->setGeometry(QRect(430, 300, 93, 29));
        longTime->setCheckable(true);
        start_btn = new QPushButton(centralwidget);
        start_btn->setObjectName(QString::fromUtf8("start_btn"));
        start_btn->setGeometry(QRect(140, 430, 151, 51));
        stop_btn = new QPushButton(centralwidget);
        stop_btn->setObjectName(QString::fromUtf8("stop_btn"));
        stop_btn->setGeometry(QRect(520, 420, 131, 51));
        status_label = new QLabel(centralwidget);
        status_label->setObjectName(QString::fromUtf8("status_label"));
        status_label->setGeometry(QRect(150, 220, 501, 61));
        QFont font;
        font.setPointSize(17);
        font.setBold(true);
        status_label->setFont(font);
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 26));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        swt_plr_btn->setText(QCoreApplication::translate("MainWindow", "SWITCH Player", nullptr));
        swt_plr_btn_2->setText(QCoreApplication::translate("MainWindow", "SWITCH Player", nullptr));
        short_time->setText(QCoreApplication::translate("MainWindow", "120 sec", nullptr));
        longTime->setText(QCoreApplication::translate("MainWindow", "5 min", nullptr));
        start_btn->setText(QCoreApplication::translate("MainWindow", "START GAME", nullptr));
        stop_btn->setText(QCoreApplication::translate("MainWindow", "STOP GAME", nullptr));
        status_label->setText(QCoreApplication::translate("MainWindow", "Select playtime and press start game", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
