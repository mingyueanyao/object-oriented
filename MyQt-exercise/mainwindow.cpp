#include "mainwindow.h"
#include "ui_mainwindow.h"
MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}
MainWindow::~MainWindow()
{
    delete ui;
}
void MainWindow::pushButton_0_clicked()
{
    ui->lineEdit->setText(ui->lineEdit->text()+QString::QString('0'));
}
void MainWindow::pushButton_1_clicked()
{
    ui->lineEdit->setText(ui->lineEdit->text()+QString::QString('1'));
}
void MainWindow::pushButton_2_clicked()
{
    ui->lineEdit->setText(ui->lineEdit->text()+QString::QString('2'));
}
void MainWindow::pushButton_3_clicked()
{
    ui->lineEdit->setText(ui->lineEdit->text()+QString::QString('3'));
}
void MainWindow::pushButton_4_clicked()
{
    ui->lineEdit->setText(ui->lineEdit->text()+QString::QString('4'));
}
void MainWindow::pushButton_5_clicked()
{
    ui->lineEdit->setText(ui->lineEdit->text()+QString::QString('5'));
}
void MainWindow::pushButton_6_clicked()
{
    ui->lineEdit->setText(ui->lineEdit->text()+QString::QString('6'));
}
void MainWindow::pushButton_7_clicked()
{
    ui->lineEdit->setText(ui->lineEdit->text()+QString::QString('7'));
}
void MainWindow::pushButton_8_clicked()
{
    ui->lineEdit->setText(ui->lineEdit->text()+QString::QString('8'));
}
void MainWindow::pushButton_9_clicked()
{
    ui->lineEdit->setText(ui->lineEdit->text()+QString::QString('9'));
}
void MainWindow::pushButton_pointer_clicked()
{
    ui->lineEdit->setText(ui->lineEdit->text()+QString::QString('.'));
}
void MainWindow::pushButton_left_clicked()
{
    ui->lineEdit->setText(ui->lineEdit->text()+QString::QString('('));
}
void MainWindow::pushButton_right_clicked()
{
    ui->lineEdit->setText(ui->lineEdit->text()+QString::QString(')'));
}
void MainWindow::pushButton_add_clicked()
{
    ui->lineEdit->setText(ui->lineEdit->text()+QString::QString('+'));
}
void MainWindow::pushButton_minus_clicked()
{
    ui->lineEdit->setText(ui->lineEdit->text()+QString::QString('-'));
}
void MainWindow::pushButton_mul_clicked()
{
    ui->lineEdit->setText(ui->lineEdit->text()+QString::QString('*'));
}
void MainWindow::pushButton_div_clicked()
{
    ui->lineEdit->setText(ui->lineEdit->text()+QString::QString('/'));
}
void MainWindow::pushButton_equ_clicked()
{
    ui->lineEdit->setText(ui->lineEdit->text()+QString::QString('='));
}
void MainWindow::pushButton_del_clicked()
{
    ui->lineEdit->backspace();
}
void MainWindow::pushButton_ac_clicked()
{
    ui->lineEdit->clear();
}
