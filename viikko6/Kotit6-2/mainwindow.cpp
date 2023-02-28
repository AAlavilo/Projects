#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QDebug>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    QListIterator button_list(ui->buttons_frame->children()); // Luodaan rajattu lista painettavista näppäimistä


    while (button_list.hasNext()) // pyörii niin kauan kunnes ei ole enää näppäimiä jäljellä listassa.
    {
        QPushButton *btn = qobject_cast<QPushButton*>(button_list.next());
        if (btn){
            if(btn->text().size()==1){ // verrataan napin tekstin kokoa. Näin saa eroteltua framesta clear ja enter napit pois.
                connect(btn, SIGNAL(clicked()),this, SLOT(numberClickedHandler()));
            }
        }
    }


/*
    connect(ui->num0_btn,SIGNAL(clicked()),this,SLOT(numberClickedHandler()));
    connect(ui->num1_btn,SIGNAL(clicked()),this,SLOT(numberClickedHandler()));
    connect(ui->num2_btn,SIGNAL(clicked()),this,SLOT(numberClickedHandler()));
    connect(ui->num3_btn,SIGNAL(clicked()),this,SLOT(numberClickedHandler()));
    connect(ui->num4_btn,SIGNAL(clicked()),this,SLOT(numberClickedHandler()));
    connect(ui->num5_btn,SIGNAL(clicked()),this,SLOT(numberClickedHandler()));
    connect(ui->num6_btn,SIGNAL(clicked()),this,SLOT(numberClickedHandler()));
    connect(ui->num7_btn,SIGNAL(clicked()),this,SLOT(numberClickedHandler()));
    connect(ui->num8_btn,SIGNAL(clicked()),this,SLOT(numberClickedHandler()));
    connect(ui->num9_btn,SIGNAL(clicked()),this,SLOT(numberClickedHandler()));
*/
    connect(
    this, SIGNAL(reset_signal()),
    this, SLOT(reset())
    );

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::numberClickedHandler()
{
    //Get object pointer that triggered button click
    QPushButton *btn = qobject_cast<QPushButton*>(sender());

    if(btn){
        // auto = tarkistaa muuttujatyypin automaattisesti - käytetään ternary-operaattoria.
        // koska func_given on lähtökohtaisesti false, ja koska funktiota ei ole vielä annettu, niin asetetaan teksi
        // ensimmäiseen ruutuun, jonka jälkeen funktio muuttuu todeksi ja siirtyy seuraavaan LineEdit-ruutuun.
        auto order = (!func_given) ? ui->set_num_1 : ui->set_num_2;
        // tmp -väliaikainen muuttuja, .append(btn->text() lisää ruudulle napissa olevan tekstin. Eli tässä vaiheessa ruudulle
        // tuleva teksi on stringiä.
        QString tmp = order->text().append(btn->text());
        order->setText(tmp);  //asettaa tekstin ruutuun
    }
}

void MainWindow::on_clear_btn_clicked()
{
    //Clear lineEdit widgets
    ui->set_num_1->clear();
    ui->set_num_2->clear();
    ui->calc_result->clear();
    this->func_given = false;
}


void MainWindow::on_enter_btn_clicked()
{
    //laitetaan nämä muuttujan floatiksi, jotta vastaus voi olla myös jotan desimaaleja.
    float answer = 0;
    float first_number = ui->set_num_1->text().toFloat();
    float second_number = ui->set_num_2->text().toFloat();

    if(func_given){
        switch(operation){
        case ADDITION:
            answer=first_number+second_number;
            break;
        case SUBSTRACTION:
            answer=first_number-second_number;
            break;
        case MULTIPLICATION:
            answer=first_number*second_number;
            break;
        case DIVISION:
            answer=first_number/second_number;
            break;
        }
    ui->calc_result->setText(QString::number(answer));
    this->func_given = false;
    }
}


void MainWindow::on_plus_btn_clicked()
{
    qDebug()<<"addition selected";
    this->operation = ADDITION;
    this->func_given = true;
}


void MainWindow::on_sub_num_clicked()
{
    qDebug()<<"substraction selected";
    this->operation = SUBSTRACTION;
    this->func_given = true;
}


void MainWindow::on_mul_btn_clicked()
{
    qDebug()<<"multiplication selected";
    this->operation = MULTIPLICATION;
    this->func_given = true;
}


void MainWindow::on_div_btn_clicked()
{
    qDebug()<<"division selected";
    this->operation = DIVISION;
    this->func_given = true;
};

