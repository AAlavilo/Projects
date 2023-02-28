#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QTimer>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

public slots:

    void change_game_time();

private slots:
    void updateProgressBar();
    void setProgressBars();
    void setGameInfoText(short player_number, short state);

    void on_swt_plr_btn_clicked();
    void on_swt_plr_btn_2_clicked();
    void on_start_btn_clicked();
    void on_stop_btn_clicked();
    void on_short_time_clicked();
    void on_longTime_clicked();

private:
    Ui::MainWindow *ui;
    short player1Time;
    short player2Time;
    short currentPlayer;
    short gameTime;
    short player_turn = 1;
    QTimer * pQTimer;

    bool func_given = false;
    int operation;

    enum messages {
        READY,
        ONGOING,
        VICTORY,
        NEWGAME,
    };


};
#endif // MAINWINDOW_H
