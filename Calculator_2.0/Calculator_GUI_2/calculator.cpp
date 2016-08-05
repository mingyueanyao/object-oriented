#include "scaner.h"
#include "printer.h"
#include "calculator.h"
#include "calculation.h"
#include "fileiodialog.h"
#include "ui_calculator.h"

#include <queue>
#include <string>
#include <QString>
#include <QKeyEvent>
#include <QMessageBox>
using namespace std;

Calculator::Calculator(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Calculator)
{
    ui->setupUi(this);
    //设置窗口按钮风格
    this->setWindowFlags(Qt::WindowTitleHint
                         | Qt::WindowCloseButtonHint
                         | Qt::WindowMinimizeButtonHint);
}

Calculator::~Calculator()
{
    delete ui;
}

bool flag = 0;  //是否清空输入框
string s_input;   //用于计算的表达式

void Calculator::keyPressEvent(QKeyEvent *e)
{
    switch (e->key())
    {
        case Qt::Key_Period:
            Calculator::on_pushButton_pointer_clicked();
            break;
        case Qt::Key_0:
            Calculator::on_pushButton_0_clicked();
            break;
        case Qt::Key_1:
            Calculator::on_pushButton_1_clicked();
            break;
        case Qt::Key_2:
            Calculator::on_pushButton_2_clicked();
            break;
        case Qt::Key_3:
            Calculator::on_pushButton_3_clicked();
            break;
        case Qt::Key_4:
            Calculator::on_pushButton_4_clicked();
            break;
        case Qt::Key_5:
            Calculator::on_pushButton_5_clicked();
            break;
        case Qt::Key_6:
            Calculator::on_pushButton_6_clicked();
            break;
        case Qt::Key_7:
            Calculator::on_pushButton_7_clicked();
        break;
        case Qt::Key_8:
            Calculator::on_pushButton_8_clicked();
            break;
        case Qt::Key_9:
            Calculator::on_pushButton_9_clicked();
            break;
        case Qt::Key_Plus:
            Calculator::on_pushButton_plus_clicked();
            break;
        case Qt::Key_Minus:
            Calculator::on_pushButton_minus_clicked();
            break;
        case Qt::Key_Asterisk:
            Calculator::on_pushButton_multiply_clicked();
            break;
        case Qt::Key_Slash:
            Calculator::on_pushButton_division_clicked();
            break;
        case Qt::Key_ParenLeft:
            Calculator::on_pushButton_left_clicked();
            break;
        case Qt::Key_ParenRight:
            Calculator::on_pushButton_right_clicked();
            break;
        case Qt::Key_Backspace:
            Calculator::on_pushButton_backspace_clicked();
            break;
        case Qt::Key_Escape:
            Calculator::on_pushButton_escape_clicked();
            break;
        case Qt::Key_Enter:
            Calculator::on_pushButton_equal_clicked();
            break;
        case Qt::Key_Return:
            Calculator::on_pushButton_equal_clicked();
            break;
        case Qt::Key_Equal:
            Calculator::on_pushButton_equal_clicked();
            break;
    }
}

void Calculator::on_pushButton_pointer_clicked()
{
    if(flag)
    {
        ui->inputLabel->clear();
        flag = 0;
    }

    s_input = s_input + ".";
    ui->inputLabel->setText(ui->inputLabel->text() + QObject::tr("."));
}

void Calculator::on_pushButton_0_clicked()
{
    if(flag)
    {
        ui->inputLabel->clear();
        flag = 0;
    }

    s_input = s_input + "0";
    ui->inputLabel->setText(ui->inputLabel->text() + QObject::tr("0"));
}

void Calculator::on_pushButton_1_clicked()
{
    if(flag)
    {
        ui->inputLabel->clear();
        flag = 0;
    }

    s_input = s_input + "1";
    ui->inputLabel->setText(ui->inputLabel->text() + QObject::tr("1"));
}

void Calculator::on_pushButton_2_clicked()
{
    if(flag)
    {
        ui->inputLabel->clear();
        flag = 0;
    }

    s_input = s_input + "2";
    ui->inputLabel->setText(ui->inputLabel->text() + QObject::tr("2"));
}

void Calculator::on_pushButton_3_clicked()
{
    if(flag)
    {
        ui->inputLabel->clear();
        flag = 0;
    }

    s_input = s_input + "3";
    ui->inputLabel->setText(ui->inputLabel->text() + QObject::tr("3"));
}

void Calculator::on_pushButton_4_clicked()
{
    if(flag)
    {
        ui->inputLabel->clear();
        flag = 0;
    }

    s_input = s_input + "4";
    ui->inputLabel->setText(ui->inputLabel->text() + QObject::tr("4"));
}

void Calculator::on_pushButton_5_clicked()
{
    if(flag)
    {
        ui->inputLabel->clear();
        flag = 0;
    }

    s_input = s_input + "5";
    ui->inputLabel->setText(ui->inputLabel->text() + QObject::tr("5"));
}

void Calculator::on_pushButton_6_clicked()
{
    if(flag)
    {
        ui->inputLabel->clear();
        flag = 0;
    }

    s_input = s_input + "6";
    ui->inputLabel->setText(ui->inputLabel->text() + QObject::tr("6"));
}

void Calculator::on_pushButton_7_clicked()
{
    if(flag)
    {
        ui->inputLabel->clear();
        flag = 0;
    }

    s_input = s_input + "7";
    ui->inputLabel->setText(ui->inputLabel->text() + QObject::tr("7"));
}

void Calculator::on_pushButton_8_clicked()
{
    if(flag)
    {
        ui->inputLabel->clear();
        flag = 0;
    }

    s_input = s_input + "8";
    ui->inputLabel->setText(ui->inputLabel->text() + QObject::tr("8"));
}

void Calculator::on_pushButton_9_clicked()
{
    if(flag)
    {
        ui->inputLabel->clear();
        flag = 0;
    }

    s_input = s_input + "9";
    ui->inputLabel->setText(ui->inputLabel->text() + QObject::tr("9"));
}

void Calculator::on_pushButton_plus_clicked()
{
    if(flag)
    {
        ui->inputLabel->clear();
        flag = 0;
    }

    s_input = s_input + "+";
    ui->inputLabel->setText(ui->inputLabel->text() + QObject::tr("+"));
}

void Calculator::on_pushButton_minus_clicked()
{
    if(flag)
    {
        ui->inputLabel->clear();
        flag = 0;
    }

    s_input = s_input + "-";
    ui->inputLabel->setText(ui->inputLabel->text() + QObject::tr("-"));
}

void Calculator::on_pushButton_multiply_clicked()
{
    if(flag)
    {
        ui->inputLabel->clear();
        flag = 0;
    }

    s_input = s_input + "*";
    ui->inputLabel->setText(ui->inputLabel->text() + QObject::tr("×"));
}

void Calculator::on_pushButton_division_clicked()
{
    if(flag)
    {
        ui->inputLabel->clear();
        flag = 0;
    }

    s_input = s_input + "/";
    ui->inputLabel->setText(ui->inputLabel->text() + QObject::tr("÷"));
}

void Calculator::on_pushButton_left_clicked()
{
    if(flag)
    {
        ui->inputLabel->clear();
        flag = 0;
    }

    s_input = s_input + "(";
    ui->inputLabel->setText(ui->inputLabel->text() + QObject::tr("("));
}

void Calculator::on_pushButton_right_clicked()
{
    if(flag)
    {
        ui->inputLabel->clear();
        flag = 0;
    }

    s_input = s_input + ")";
    ui->inputLabel->setText(ui->inputLabel->text() + QObject::tr(")"));
}

void Calculator::on_pushButton_backspace_clicked()
{
    if(!s_input.empty())
    {
        s_input.pop_back();
    }

    ui->inputLabel->setText(QString::fromStdString(s_input));
}

void Calculator::on_pushButton_escape_clicked()
{
    ui->inputLabel->clear();
    s_input.clear();
}

Scaner CScan;
Printer CPrint;
Calculation CCalculate;

double ans;
QString output;
queue<string> qs;
bool error_flag = 1;    //算式是否无误

void Calculator::on_pushButton_equal_clicked()
{

    QObject::connect(&CScan, SIGNAL(sendError(QString)), this, SLOT(wrongInput(QString)));
    QObject::connect(&CCalculate, SIGNAL(sendError(QString)), this, SLOT(wrongInput(QString)));

    error_flag = 1;

    if(flag)
    {
        ui->inputLabel->clear();
    }

    s_input = s_input + "=";
    ui->inputLabel->setText(ui->inputLabel->text() + QObject::tr("="));


    qs = CScan.ToStringQueue(s_input);
    ans = CCalculate.CalculateStringQueue(qs, error_flag);

    if(error_flag)
    {
        ui->inputLabel->setText(output.setNum(ans, 'g', 10));
        s_input.clear();
    }

    flag = 1;

    QObject::disconnect(&CScan, SIGNAL(sendError(QString)), this, SLOT(wrongInput(QString)));
    QObject::disconnect(&CCalculate, SIGNAL(sendError(QString)), this, SLOT(wrongInput(QString)));
}

void Calculator::wrongInput(QString str)
{
    error_flag = 0;

    QMessageBox::warning(this, tr("ERROR"), str);

    ui->inputLabel->clear();

    s_input.clear();
}


void Calculator::on_pushButton_file_clicked()
{
    fileIoDialog f;
    f.exec();
}
