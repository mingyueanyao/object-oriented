#include "printer.h"

#include <iostream>
#include <iomanip>
#include <fstream>
#include <string>
#include <queue>
using namespace std;

Printer::Printer()
{
}

/***********************
    Description:输出ans
    Input:无
    Output:ans
    Return:无
    Others:无
************************/
void Printer :: PrintAns(double ans)
{
    cout << setprecision(10);
    //避免出现'-0'的答案
    if(ans == 0)
    {
        cout << 0 << endl;
    }
    else
    {
        cout << ans << endl;
    }
}

/************************************
    Description:输出qs_output
    Input:元素类型为string对象的队列
    Output:队列中的元素，即string对象
    Return:无
    Others:无
*************************************/
void Printer :: PrintQueue(queue<string> qs_output)
{
    //循环输出直到队列为空
    //以此来输出整个队列
    while(!qs_output.empty())
    {
        cout << qs_output.front() << endl;
        //弹出已输出的队首元素以准备下一次输出
        qs_output.pop();
    }
}

/*****************************************************
    Description:输出"s_input = ans"
    Input:字符串类型的算式和double类型的答案
    Output:字符串类型的算式，等于号和double类型的答案
    Return:无
    Others:等号后有空格
******************************************************/
void Printer :: PrintExpreesion(string s_input, double ans)
{
    cout << s_input << " ";
    cout << setprecision(10);
    //避免出现'-0'的答案
    if(ans == 0)
    {
        cout << 0 << endl;
    }
    else
    {
        cout << ans << endl;
    }
}

/*****************************************
    Description:输出double类型的答案到文件
    Input:ofstream& ofile和double ans
    Output:无
    Return:无
    Others:无
******************************************/
void Printer :: PrintToFile(ofstream& ofile, double ans)
{
    ofile << setprecision(10);
    //避免出现'-0'的答案
    if(ans == 0)
    {
        ofile << 0 << endl;
    }
    else
    {
        ofile << ans << endl;
    }
}
