#ifndef PRINTER_H
#define PRINTER_H

#include <queue>
#include <string>
using namespace std;

class Printer
{
public:
    Printer();

    //输出ans
    void PrintAns(double ans);
    //输出qs_output
    void PrintQueue(queue<string> qs_output);
    //输出ans到文件
    void PrintToFile(ofstream& ofile, double ans);
    //输出"s_input = ans"
    void PrintExpreesion(string s_input, double ans);
};

#endif // PRINTER_H
