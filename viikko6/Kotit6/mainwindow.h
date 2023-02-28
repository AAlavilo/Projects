#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    int count;
    int old_count;

signals:
    void inc_signal();
    void dec_signal();
    void reset_signal();
    void count_changed();

private slots:
    void update_text();
    void increment();
    void decrement();
    void reset();
    void on_inc_btn_clicked();
    void on_clear_btn_clicked();

    void on_dec_btn_clicked();

    void on_enter_btn_clicked();

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
