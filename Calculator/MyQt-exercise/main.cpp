#include<stdlib.h>
#include<iostream>
#include<fstream>
#include<string>
#include<string.h>
#include<queue>
#include"mainwindow.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc,argv);
    MainWindow w;
    w.show();
    return a.exec();
}
