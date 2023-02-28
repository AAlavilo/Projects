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

signals:


private slots:
    void numberClickedHandler();
   //void clearAndEnterClickHandler();
   //void addSubMulDivClickHandler();
   //void resetLineEdits();
    void on_clear_btn_clicked();
    void on_enter_btn_clicked();
    void on_plus_btn_clicked();
    void on_sub_num_clicked();
    void on_mul_btn_clicked();
    void on_div_btn_clicked();

private:
    Ui::MainWindow *ui;
    //QString number1, number2;
    bool func_given = false;
    int operation;

    enum operations {
        ADDITION,
        SUBSTRACTION,
        DIVISION,
        MULTIPLICATION,
    };
};
#endif // MAINWINDOW_H
