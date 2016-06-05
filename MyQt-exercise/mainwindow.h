#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    void pushButton_0_clicked();
    void pushButton_1_clicked();
    void pushButton_2_clicked();
    void pushButton_3_clicked();
    void pushButton_4_clicked();
    void pushButton_5_clicked();
    void pushButton_6_clicked();
    void pushButton_7_clicked();
    void pushButton_8_clicked();
    void pushButton_9_clicked();
    void pushButton_pointer_clicked();
    void pushButton_left_clicked();
    void pushButton_right_clicked();
    void pushButton_add_clicked();
    void pushButton_minus_clicked();
    void pushButton_mul_clicked();
    void pushButton_div_clicked();
    void pushButton_equ_clicked();
    void pushButton_del_clicked();
    void pushButton_ac_clicked();

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
