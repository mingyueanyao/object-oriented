#ifndef CALCULATION_H
#define CALCULATION_H

#include <queue>
#include <string>
#include <QObject>
#include <QString>
using namespace std;

class Calculation : public QObject
{
    Q_OBJECT
public:
    explicit Calculation(QObject *parent = 0);
    //计算并返回算式的答案
    double CalculateStringQueue(queue<string> qs, bool& error_flag);
    //返回当前情况在优先级数组里的位置
    char GetPosition(string CharStackTop, string t_str);
    //借助优先级数组，用两个栈来计算表达式
    void CalculateByStack(char order, string t_str, bool& error_flag);

signals:
    void sendError(QString);

public slots:
};

#endif // CALCULATION_H
