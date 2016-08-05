#include "scaner.h"
#include "printer.h"
#include "calculation.h"
#include "fileiodialog.h"
#include "ui_fileiodialog.h"

#include <queue>
#include <string>
#include <fstream>
#include <string.h>
#include <QFileDialog>
#include <QMessageBox>
using namespace std;

fileIoDialog::fileIoDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::fileIoDialog)
{
    ui->setupUi(this);
    this->setWindowTitle(tr("批量计算"));
    //设置窗口按钮风格
    this->setWindowFlags(Qt::WindowTitleHint
                         | Qt::WindowCloseButtonHint
                         | Qt::WindowMinimizeButtonHint);
}

fileIoDialog::~fileIoDialog()
{
    delete ui;
}

void fileIoDialog::on_pushButton_input_clicked()
{
    QString i_path;
    i_path = QFileDialog::getOpenFileName(this, tr("选择输入文件"), "/");
    ui->inputLine->setText(i_path);
}

void fileIoDialog::on_pushButton_output_clicked()
{
    QString o_path;
    o_path = QFileDialog::getOpenFileName(this, tr("选择输出文件"), "/");
    ui->outputLine->setText(o_path);
}

void fileIoDialog::on_pushButton_configure_clicked()
{
    QString i_file = ui->inputLine->text();
    QString o_file = ui->outputLine->text();

    string i_file_s = i_file.toStdString();
    string o_file_s = o_file.toStdString();

    Scaner CScan;
    Printer CPrint;
    Calculation CCalculate;

    queue<string> qs;	//数字和运算符分开的队列
    string s_input;	//输入的字符串
    double ans;	//四则算式的答案
    bool t_flag = 1;
    bool open = 1;

    ifstream ifile(i_file_s.c_str(), ios :: in);
    ofstream ofile(o_file_s.c_str(), ios :: out);

    if (ifile.is_open() && ofile.is_open())
    {
        //实际上等价于while (ifile >> s_input)。。。
        while (CScan.GetFileString(ifile, s_input))
        {
            qs = CScan.ToStringQueue(s_input);
            ans = CCalculate.CalculateStringQueue(qs, t_flag);
            CPrint.PrintToFile(ofile, ans);
        }
    }
    else
    {
        QMessageBox::warning(this, tr("未知错误"), tr("文件打开失败"));
        open = false;
    }

    //关闭读，写文件
    ifile.close();
    ofile.close();

    if (open)
    {
        QMessageBox::information(this, tr("计算完成"), tr("请前往查看"));
    }
}

void fileIoDialog::on_pushButton_cancle_clicked()
{
    this->close();
}
