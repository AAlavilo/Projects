#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "QTimer"
#include "QDebug"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    pQTimer = new QTimer(this);
    pQTimer->setInterval(1000);

    connect(pQTimer, SIGNAL(timeout()),
            this,SLOT(updateProgressBar()));
/*
    connect(ui->short_time,SIGNAL(clicked()),
            this,SLOT(change_game_time()));

    connect(ui->longTime,SIGNAL(clicked()),
            this,SLOT(change_game_time()));
            */
    ui->start_btn->setDisabled(true);

}

MainWindow::~MainWindow()
{
    delete ui;
}
void MainWindow::on_swt_plr_btn_clicked()
{
    this->player_turn = 2;
    qDebug()<<"player turn changed"<<player_turn;
    ui->progressBar->setDisabled(true);
    ui->progressBar_2->setDisabled(true);
}


void MainWindow::on_swt_plr_btn_2_clicked()
{
    this->player_turn = 1;
    qDebug()<<"player turn changed"<<player_turn;
    ui->progressBar->setDisabled(true);
    ui->progressBar_2->setDisabled(true);
}


void MainWindow::on_start_btn_clicked()
{
    setProgressBars();
    pQTimer->start();
    ui->swt_plr_btn->setDisabled(false);
    ui->short_time->setDisabled(true);
    ui->longTime->setDisabled(true);
    ui->start_btn->setDisabled(true);

}

void MainWindow::updateProgressBar()
{
    QProgressBar *progBar = (player_turn == 1) ? ui->progressBar : ui->progressBar_2;
    short player_time = (player_turn == 1) ? player1Time-- : player2Time--;

    if (progBar->value() >0){
        progBar->setValue(player_time);
        setGameInfoText(0,ONGOING);
    }

    if (progBar->value() == 0){
        short opponent = (player_turn==1) ? 2:1;
        setGameInfoText(opponent,VICTORY);
    }
}

void MainWindow::setProgressBars()
{
    player1Time = gameTime;
    player2Time = gameTime;

    ui->progressBar->setRange(0,player1Time);
    ui->progressBar_2->setRange(0,player2Time);
    ui->progressBar->setValue(player1Time);
    ui->progressBar_2->setValue(player2Time);
}

void MainWindow::setGameInfoText(short player_number, short state)
{
    QString msg;

    switch(state) {
    case READY:
        msg = "Ready to play";
        break;

    case ONGOING:
        msg = "The game is ongoing";

        break;

    case VICTORY:
        msg = QString("Player %1 WON!").arg(player_number);

        break;

    case NEWGAME:
        msg = "Start a new game";

        break;
    }
    ui->status_label->setText(msg);

}

void MainWindow::change_game_time()
{
    QPushButton *btn = qobject_cast<QPushButton*>(sender());

    QPushButton *another_btn = (btn == ui->short_time) ? ui->longTime : ui->short_time ;
    another_btn->setChecked(false);
    btn->setChecked(true);

    this->gameTime = (btn == ui->short_time) ? 120 : 300 ;
    qDebug()<<this->gameTime;
    player1Time = gameTime;
    player2Time = gameTime;
}


void MainWindow::on_stop_btn_clicked()
{
    pQTimer->stop();
    setProgressBars();
    ui->swt_plr_btn->setDisabled(true);
    this->player_turn = 1;
    ui->short_time->setDisabled(false);
    ui->longTime->setDisabled(false);
    setGameInfoText(0,NEWGAME);
    ui->start_btn->setDisabled(false);
}


void MainWindow::on_short_time_clicked()
{
    gameTime = 120;
    ui->start_btn->setDisabled(false);

}


void MainWindow::on_longTime_clicked()
{
    gameTime = 300;
    ui->start_btn->setDisabled(false);
}

