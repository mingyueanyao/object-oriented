#include<stdlib.h>
#include<iostream>
#include<fstream>
#include<string>
#include<string.h>
#include<queue>
#include "mainwindow.h"
#include "ui_mainwindow.h"
#include"calculation.h"
#include"scan.h"

QString input;
string str;
QString result;
double out;
queue<string>q;

Scan sca;
Calculation cal;

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    connect(ui->pushButton_0,SIGNAL(clicked()),this,SLOT(pushButton_0_clicked()));
    connect(ui->pushButton_1,SIGNAL(clicked()),this,SLOT(pushButton_1_clicked()));
    connect(ui->pushButton_2,SIGNAL(clicked()),this,SLOT(pushButton_2_clicked()));
    connect(ui->pushButton_3,SIGNAL(clicked()),this,SLOT(pushButton_3_clicked()));
    connect(ui->pushButton_4,SIGNAL(clicked()),this,SLOT(pushButton_4_clicked()));
    connect(ui->pushButton_5,SIGNAL(clicked()),this,SLOT(pushButton_5_clicked()));
    connect(ui->pushButton_6,SIGNAL(clicked()),this,SLOT(pushButton_6_clicked()));
    connect(ui->pushButton_7,SIGNAL(clicked()),this,SLOT(pushButton_7_clicked()));
    connect(ui->pushButton_8,SIGNAL(clicked()),this,SLOT(pushButton_8_clicked()));
    connect(ui->pushButton_9,SIGNAL(clicked()),this,SLOT(pushButton_9_clicked()));
    connect(ui->pushButton_pointer,SIGNAL(clicked()),this,SLOT(pushButton_pointer_clicked()));
    connect(ui->pushButton_left,SIGNAL(clicked()),this,SLOT(pushButton_left_clicked()));
    connect(ui->pushButton_right,SIGNAL(clicked()),this,SLOT(pushButton_right_clicked()));
    connect(ui->pushButton_add,SIGNAL(clicked()),this,SLOT(pushButton_add_clicked()));
    connect(ui->pushButton_minus,SIGNAL(clicked()),this,SLOT(pushButton_minus_clicked()));
    connect(ui->pushButton_mul,SIGNAL(clicked()),this,SLOT(pushButton_mul_clicked()));
    connect(ui->pushButton_div,SIGNAL(clicked()),this,SLOT(pushButton_div_clicked()));
    connect(ui->pushButton_equ,SIGNAL(clicked()),this,SLOT(pushButton_equ_clicked()));
    connect(ui->pushButton_del,SIGNAL(clicked()),this,SLOT(pushButton_del_clicked()));
    connect(ui->pushButton_ac,SIGNAL(clicked()),this,SLOT(pushButton_ac_clicked()));
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
    input=ui->lineEdit->text();
    str=input.toStdString();
    q=sca.ToStringQueue(str);
    out=cal.getStringQueue(q);
    result=QString::number(out,'g',6);
    ui->lineEdit->setText(result);
}
void MainWindow::pushButton_del_clicked()
{
    ui->lineEdit->backspace();
}
void MainWindow::pushButton_ac_clicked()
{
    ui->lineEdit->clear();
}
