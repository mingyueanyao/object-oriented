#include "calculation.h"

#include <queue>
#include <stack>
#include <sstream>
#include <QMessageBox>
using namespace std;

Calculation::Calculation(QObject *parent) : QObject(parent)
{
}

int mark;	//是否继续计算
double answer;	//最终的计算结果

stack<double> NumStack; //储存数字的栈
stack<string> CharStack;    //储存运算符的栈

//用于运算优先级判断的数组
//行表示运算符栈顶的运算符
//列表示算式当前遍历到的运算符
//">"表示栈顶优先级高，应弹出来进行计算
//"<"表示栈顶优先级低，遍历到的运算符直接入栈
//"="表示遍历到底,NumStack最后一个元素即答案
//或是遍历到")"且栈顶为"("，应弹出栈顶继续遍历
//"0"表示算式有误
                   //'+', '-', '*', '/', '(', ')', '#'
char order[7][7] = {{'>', '>', '<', '<', '<', '>', '>'}, //'+'
                    {'>', '>', '<', '<', '<', '>', '>'}, //'-'
                    {'>', '>', '>', '>', '<', '>', '>'}, //'*'
                    {'>', '>', '>', '>', '<', '>', '>'}, //'/'
                    {'<', '<', '<', '<', '<', '=', '0'}, //'('
                    {'>', '>', '>', '>', '0', '>', '>'}, //')'
                    {'<', '<', '<', '<', '<', '0', '='}  //'#'
};

/**********************************************
    Description:返回优先级数组位置
    Input:运算符栈的栈顶元素string CharStackTop
        算式当前遍历到的运算符string t_str
    Output:无
    Return:优先级数组的字符型元素order[x][y];
    Others:无
***********************************************/
char Calculation :: GetPosition(string CharStackTop, string t_str)
{
    int x, y;

    switch (CharStackTop[0])
    {
        case '+':
            x = 0;
            break;
        case '-':
            x = 1;
            break;
        case '*':
            x = 2;
            break;
        case '/':
            x = 3;
            break;
        case '(':
            x = 4;
            break;
        case ')':
            x = 5;
            break;
        case '#':
            x = 6;
            break;
    }

    switch (t_str[0])
    {
        case '+':
            y = 0;
            break;
        case '-':
            y = 1;
            break;
        case '*':
            y = 2;
            break;
        case '/':
            y = 3;
            break;
        case '(':
            y = 4;
            break;
        case ')':
            y = 5;
            break;
        case '#':
            y = 6;
            break;
    }

    return order[x][y];
}

/******************************************
    Description:用两个栈来计算表达式
    Input:优先级数组元素char order
        算式当前遍历到的运算符string t_str
    Output:无
    Return:无
    Others:答案存在全局变量ans里
*******************************************/
void Calculation :: CalculateByStack(char order, string t_str, bool &error_flag)
{
    char m_order;	//表示优先级数组中的位置
    double num, num1, num2;	//用于辅助计算

    //借助优先级数组进行具体计算
    switch (order)
    {
        //栈顶的运算符优先级较高
        //弹出栈顶的运算符和两个数来计算
        case '>':
            if(NumStack.empty())
            {
                error_flag = 0;
                emit sendError(tr("输入的算式有误"));      
                return;
            }
            else
            {
                num1 = NumStack.top();
                NumStack.pop();
            }

            if(NumStack.empty())
            {
                error_flag = 0;
                emit sendError(tr("输入的算式有误"));                
                return;
            }
            else
            {
                num2 = NumStack.top();
                NumStack.pop();
            }

            switch (CharStack.top()[0])
            {
                case '+':
                    num = num1 + num2;
                    NumStack.push(num);
                    CharStack.pop();
                    break;
                case '-':
                    num = num2 - num1;
                    NumStack.push(num);
                    CharStack.pop();
                    break;
                case '*':
                    num = num1 * num2;
                    NumStack.push(num);
                    CharStack.pop();
                    break;
                case '/':
                    num = num2 / num1;
                    NumStack.push(num);
                    CharStack.pop();
                    break;
            }

            //下一个栈顶元素优先级仍然较高则继续计算
            while(!CharStack.empty() && mark)
            {
                m_order = GetPosition(CharStack.top(), t_str);
                CalculateByStack(m_order, t_str, error_flag);
            }

            break;
        //栈顶运算符优先级较低
        //遍历到运算符直接入栈
        case '<':
            mark = 0;
            CharStack.push(t_str);
            break;
        case '=':
            //表示遍历结束
            if (t_str[0] == '#')
            {
                //最终答案
                answer = NumStack.top();
                mark = 0;

                NumStack.pop();
                CharStack.pop();
            }
            //遍历到")"且栈顶为"("，应弹出栈顶继续遍历
            else
            {
                CharStack.pop();
                mark = 0;
            }

            break;
        //算式有误的"0"情况
        default:
            emit sendError(tr("输入算式有误")); 
            error_flag = 0;
            return;
    }
}

/*******************************************
    Description:计算并返回算式的答案
    Input:拆分好好的算式队列queue<string> qs
    Output:无
    Return:算式的答案
    Others:无
********************************************/
double Calculation :: CalculateStringQueue(queue<string> qs, bool &error_flag)
{
    if(!error_flag)
    {
        return 0;
    }

    //辅助判断遍历结束
    qs.push("#");
    CharStack.push("#");

    char m_order;	//表示优先级数组中的位置
    string t_str;	//遍历到的队列元素
    double t_num;	//辅助将string转为double
    int n = qs.size();  //每次循环qs.size()都会减小
    stringstream stream;	//辅助将string转为double

    //遍历队列开始计算
    for (int i = 0; i < n; i++)
    {
        if(!error_flag)
        {
            break;
        }

        mark = 1;	//是否继续计算
        t_str = qs.front();
        qs.pop();

        //遍历到运算符，进行相应计算
        if (t_str == "+" || t_str == "-" || t_str == "*"
            || t_str == "/" || t_str == "("
                || t_str == ")" || t_str == "#")
        {
            //借助优先级数组判断运算的优先级
            m_order = GetPosition(CharStack.top(), t_str);
            //实际的计算
            CalculateByStack(m_order, t_str, error_flag);
        }
        //遍历到数字，转为double并入栈
        else
        {
            stream.clear();
            stream << t_str;
            stream >> t_num;
            NumStack.push(t_num);
        }
    }

    return answer;
}
