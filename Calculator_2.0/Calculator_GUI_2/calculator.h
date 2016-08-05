#ifndef CALCULATOR_H
#define CALCULATOR_H

#include <QString>
#include <QKeyEvent>
#include <QMainWindow>

namespace Ui {
class Calculator;
}

class Calculator : public QMainWindow
{
    Q_OBJECT

public:
    explicit Calculator(QWidget *parent = 0);
    ~Calculator();

    void keyPressEvent(QKeyEvent *);

private slots:
    void wrongInput(QString str);

    void on_pushButton_pointer_clicked();

    void on_pushButton_0_clicked();

    void on_pushButton_1_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_4_clicked();

    void on_pushButton_5_clicked();

    void on_pushButton_6_clicked();

    void on_pushButton_7_clicked();

    void on_pushButton_8_clicked();

    void on_pushButton_9_clicked();

    void on_pushButton_plus_clicked();

    void on_pushButton_minus_clicked();

    void on_pushButton_multiply_clicked();

    void on_pushButton_division_clicked();

    void on_pushButton_left_clicked();

    void on_pushButton_right_clicked();

    void on_pushButton_backspace_clicked();

    void on_pushButton_escape_clicked();

    void on_pushButton_equal_clicked();

    void on_pushButton_file_clicked();

private:
    Ui::Calculator *ui;
};

#endif // CALCULATOR_H
