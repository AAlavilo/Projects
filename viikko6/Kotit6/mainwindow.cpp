#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QDebug>
#include <QTimer>


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
// timer initialization
    QTimer * timer = new QTimer();
    timer->setInterval(100); //Time in milliseconds

    ui->setupUi(this);
    this->count = 0;
    this->old_count = 0;

// connect section
    connect(
    this, SIGNAL(reset_signal()),
    this, SLOT(reset())
    );

    connect(
    this, SIGNAL(inc_signal()),
    this, SLOT(increment())
    );

    connect(
    this, SIGNAL(dec_signal()),
    this, SLOT(decrement())
    );

    connect(
    timer, SIGNAL(timeout()),
    this, SLOT(update_text())
    );



    timer->start();

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::update_text()
{
    if(this->count != this->old_count){
        ui->lineEdit->setText(QString::number(this->count));
        }
    this->old_count = this->count;

}

void MainWindow::increment()
{
    this->count++;
    qDebug()<<count;
}

void MainWindow::decrement()
{
    this->count--;
    qDebug()<<count;
}

void MainWindow::reset()
{
    this->count = 0;
    ui->lineEdit->clear();
}


void MainWindow::on_inc_btn_clicked()
{
    emit inc_signal();
}


void MainWindow::on_clear_btn_clicked()
{
    emit reset_signal();
}


void MainWindow::on_dec_btn_clicked()
{
    emit dec_signal();
}


void MainWindow::on_enter_btn_clicked()
{
    auto temp_value =ui->set_num->text().toInt();
    qDebug()<<temp_value;
    this->count = temp_value;
}

