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
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QLineEdit *set_num_1;
    QLineEdit *set_num_2;
    QLineEdit *calc_result;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QFrame *buttons_frame;
    QGridLayout *gridLayout;
    QPushButton *num0_btn;
    QPushButton *num2_btn;
    QPushButton *clear_btn;
    QPushButton *enter_btn;
    QPushButton *num7_btn;
    QPushButton *num6_btn;
    QPushButton *num9_btn;
    QPushButton *num3_btn;
    QPushButton *num5_btn;
    QPushButton *num1_btn;
    QPushButton *num4_btn;
    QPushButton *num8_btn;
    QFrame *operator_frame;
    QVBoxLayout *verticalLayout;
    QPushButton *plus_btn;
    QPushButton *sub_num;
    QPushButton *mul_btn;
    QPushButton *div_btn;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(800, 600);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        set_num_1 = new QLineEdit(centralwidget);
        set_num_1->setObjectName(QString::fromUtf8("set_num_1"));
        set_num_1->setGeometry(QRect(180, 95, 121, 51));
        set_num_2 = new QLineEdit(centralwidget);
        set_num_2->setObjectName(QString::fromUtf8("set_num_2"));
        set_num_2->setGeometry(QRect(310, 95, 121, 51));
        calc_result = new QLineEdit(centralwidget);
        calc_result->setObjectName(QString::fromUtf8("calc_result"));
        calc_result->setGeometry(QRect(440, 95, 121, 51));
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(190, 60, 111, 31));
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(320, 60, 101, 31));
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(460, 60, 81, 31));
        buttons_frame = new QFrame(centralwidget);
        buttons_frame->setObjectName(QString::fromUtf8("buttons_frame"));
        buttons_frame->setGeometry(QRect(190, 150, 401, 361));
        buttons_frame->setFrameShape(QFrame::StyledPanel);
        buttons_frame->setFrameShadow(QFrame::Raised);
        gridLayout = new QGridLayout(buttons_frame);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        num0_btn = new QPushButton(buttons_frame);
        num0_btn->setObjectName(QString::fromUtf8("num0_btn"));
        num0_btn->setMinimumSize(QSize(80, 80));
        num0_btn->setMaximumSize(QSize(80, 80));
        num0_btn->setIconSize(QSize(30, 30));

        gridLayout->addWidget(num0_btn, 3, 1, 1, 1);

        num2_btn = new QPushButton(buttons_frame);
        num2_btn->setObjectName(QString::fromUtf8("num2_btn"));
        num2_btn->setMinimumSize(QSize(80, 80));
        num2_btn->setMaximumSize(QSize(80, 80));
        num2_btn->setIconSize(QSize(30, 30));

        gridLayout->addWidget(num2_btn, 2, 1, 1, 1);

        clear_btn = new QPushButton(buttons_frame);
        clear_btn->setObjectName(QString::fromUtf8("clear_btn"));
        clear_btn->setMinimumSize(QSize(80, 80));
        clear_btn->setMaximumSize(QSize(80, 80));
        clear_btn->setIconSize(QSize(30, 30));

        gridLayout->addWidget(clear_btn, 3, 0, 1, 1);

        enter_btn = new QPushButton(buttons_frame);
        enter_btn->setObjectName(QString::fromUtf8("enter_btn"));
        enter_btn->setMinimumSize(QSize(80, 80));
        enter_btn->setMaximumSize(QSize(80, 80));
        enter_btn->setIconSize(QSize(30, 30));

        gridLayout->addWidget(enter_btn, 3, 2, 1, 1);

        num7_btn = new QPushButton(buttons_frame);
        num7_btn->setObjectName(QString::fromUtf8("num7_btn"));
        num7_btn->setMinimumSize(QSize(80, 80));
        num7_btn->setMaximumSize(QSize(80, 80));
        num7_btn->setIconSize(QSize(30, 30));

        gridLayout->addWidget(num7_btn, 0, 0, 1, 1);

        num6_btn = new QPushButton(buttons_frame);
        num6_btn->setObjectName(QString::fromUtf8("num6_btn"));
        num6_btn->setMinimumSize(QSize(80, 80));
        num6_btn->setMaximumSize(QSize(80, 80));
        num6_btn->setIconSize(QSize(30, 30));

        gridLayout->addWidget(num6_btn, 1, 2, 1, 1);

        num9_btn = new QPushButton(buttons_frame);
        num9_btn->setObjectName(QString::fromUtf8("num9_btn"));
        num9_btn->setMinimumSize(QSize(80, 80));
        num9_btn->setMaximumSize(QSize(80, 80));
        num9_btn->setIconSize(QSize(30, 30));

        gridLayout->addWidget(num9_btn, 0, 2, 1, 1);

        num3_btn = new QPushButton(buttons_frame);
        num3_btn->setObjectName(QString::fromUtf8("num3_btn"));
        num3_btn->setMinimumSize(QSize(80, 80));
        num3_btn->setMaximumSize(QSize(80, 80));
        num3_btn->setIconSize(QSize(30, 30));

        gridLayout->addWidget(num3_btn, 2, 2, 1, 1);

        num5_btn = new QPushButton(buttons_frame);
        num5_btn->setObjectName(QString::fromUtf8("num5_btn"));
        num5_btn->setMinimumSize(QSize(80, 80));
        num5_btn->setMaximumSize(QSize(80, 80));
        num5_btn->setIconSize(QSize(30, 30));

        gridLayout->addWidget(num5_btn, 1, 1, 1, 1);

        num1_btn = new QPushButton(buttons_frame);
        num1_btn->setObjectName(QString::fromUtf8("num1_btn"));
        num1_btn->setMinimumSize(QSize(80, 80));
        num1_btn->setMaximumSize(QSize(80, 80));
        num1_btn->setIconSize(QSize(30, 30));

        gridLayout->addWidget(num1_btn, 2, 0, 1, 1);

        num4_btn = new QPushButton(buttons_frame);
        num4_btn->setObjectName(QString::fromUtf8("num4_btn"));
        num4_btn->setMinimumSize(QSize(80, 80));
        num4_btn->setMaximumSize(QSize(80, 80));
        num4_btn->setIconSize(QSize(30, 30));

        gridLayout->addWidget(num4_btn, 1, 0, 1, 1);

        num8_btn = new QPushButton(buttons_frame);
        num8_btn->setObjectName(QString::fromUtf8("num8_btn"));
        num8_btn->setMinimumSize(QSize(80, 80));
        num8_btn->setMaximumSize(QSize(80, 80));
        num8_btn->setIconSize(QSize(30, 30));

        gridLayout->addWidget(num8_btn, 0, 1, 1, 1);

        operator_frame = new QFrame(buttons_frame);
        operator_frame->setObjectName(QString::fromUtf8("operator_frame"));
        operator_frame->setFrameShape(QFrame::StyledPanel);
        operator_frame->setFrameShadow(QFrame::Raised);
        verticalLayout = new QVBoxLayout(operator_frame);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        plus_btn = new QPushButton(operator_frame);
        plus_btn->setObjectName(QString::fromUtf8("plus_btn"));
        plus_btn->setMinimumSize(QSize(80, 80));
        plus_btn->setMaximumSize(QSize(80, 80));
        plus_btn->setIconSize(QSize(30, 30));

        verticalLayout->addWidget(plus_btn);

        sub_num = new QPushButton(operator_frame);
        sub_num->setObjectName(QString::fromUtf8("sub_num"));
        sub_num->setMinimumSize(QSize(80, 80));
        sub_num->setMaximumSize(QSize(80, 80));
        sub_num->setIconSize(QSize(30, 30));

        verticalLayout->addWidget(sub_num);

        mul_btn = new QPushButton(operator_frame);
        mul_btn->setObjectName(QString::fromUtf8("mul_btn"));
        mul_btn->setMinimumSize(QSize(80, 80));
        mul_btn->setMaximumSize(QSize(80, 80));
        mul_btn->setIconSize(QSize(30, 30));

        verticalLayout->addWidget(mul_btn);

        div_btn = new QPushButton(operator_frame);
        div_btn->setObjectName(QString::fromUtf8("div_btn"));
        div_btn->setMinimumSize(QSize(80, 80));
        div_btn->setMaximumSize(QSize(80, 80));
        div_btn->setIconSize(QSize(30, 30));

        verticalLayout->addWidget(div_btn);


        gridLayout->addWidget(operator_frame, 0, 3, 5, 1);

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
        label->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:14pt;\">Number 1</span></p></body></html>", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:14pt;\">Number 2</span></p></body></html>", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:14pt;\">Result</span></p></body></html>", nullptr));
        num0_btn->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        num2_btn->setText(QCoreApplication::translate("MainWindow", "2", nullptr));
        clear_btn->setText(QCoreApplication::translate("MainWindow", "Clear", nullptr));
        enter_btn->setText(QCoreApplication::translate("MainWindow", "Enter", nullptr));
        num7_btn->setText(QCoreApplication::translate("MainWindow", "7", nullptr));
        num6_btn->setText(QCoreApplication::translate("MainWindow", "6", nullptr));
        num9_btn->setText(QCoreApplication::translate("MainWindow", "9", nullptr));
        num3_btn->setText(QCoreApplication::translate("MainWindow", "3", nullptr));
        num5_btn->setText(QCoreApplication::translate("MainWindow", "5", nullptr));
        num1_btn->setText(QCoreApplication::translate("MainWindow", "1", nullptr));
        num4_btn->setText(QCoreApplication::translate("MainWindow", "4", nullptr));
        num8_btn->setText(QCoreApplication::translate("MainWindow", "8", nullptr));
        plus_btn->setText(QCoreApplication::translate("MainWindow", "+", nullptr));
        sub_num->setText(QCoreApplication::translate("MainWindow", "-", nullptr));
        mul_btn->setText(QCoreApplication::translate("MainWindow", "*", nullptr));
        div_btn->setText(QCoreApplication::translate("MainWindow", "/", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
