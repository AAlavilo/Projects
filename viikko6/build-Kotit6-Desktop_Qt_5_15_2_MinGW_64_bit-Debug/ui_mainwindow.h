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
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QPushButton *inc_btn;
    QPushButton *clear_btn;
    QLineEdit *lineEdit;
    QLineEdit *set_num;
    QLabel *label;
    QPushButton *enter_btn;
    QPushButton *dec_btn;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(800, 600);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        inc_btn = new QPushButton(centralwidget);
        inc_btn->setObjectName(QString::fromUtf8("inc_btn"));
        inc_btn->setGeometry(QRect(60, 100, 101, 81));
        clear_btn = new QPushButton(centralwidget);
        clear_btn->setObjectName(QString::fromUtf8("clear_btn"));
        clear_btn->setGeometry(QRect(320, 180, 93, 29));
        lineEdit = new QLineEdit(centralwidget);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(290, 100, 121, 81));
        set_num = new QLineEdit(centralwidget);
        set_num->setObjectName(QString::fromUtf8("set_num"));
        set_num->setGeometry(QRect(60, 230, 121, 26));
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(60, 210, 91, 20));
        enter_btn = new QPushButton(centralwidget);
        enter_btn->setObjectName(QString::fromUtf8("enter_btn"));
        enter_btn->setGeometry(QRect(190, 230, 93, 29));
        dec_btn = new QPushButton(centralwidget);
        dec_btn->setObjectName(QString::fromUtf8("dec_btn"));
        dec_btn->setGeometry(QRect(160, 100, 111, 81));
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
        inc_btn->setText(QCoreApplication::translate("MainWindow", "inc+ ", nullptr));
        clear_btn->setText(QCoreApplication::translate("MainWindow", "Clear", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "Set number", nullptr));
        enter_btn->setText(QCoreApplication::translate("MainWindow", "Enter", nullptr));
        dec_btn->setText(QCoreApplication::translate("MainWindow", "dec -", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
