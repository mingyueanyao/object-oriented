#ifndef SCANER_H
#define SCANER_H

#include <queue>
#include <QObject>
#include <QString>
#include <fstream>
using namespace std;

class Scaner : public QObject
{
    Q_OBJECT
public:
    explicit Scaner(QObject *parent = 0);

    //拆分接收的算式字符串
    queue<string> ToStringQueue(string s_input);

    //从文件中获取字符串算式
    bool GetFileString(ifstream& ifile, string& s_input);

signals:
    //发送算式错误信号
    void sendError(QString);

public slots:
};

#endif // SCANER_H
