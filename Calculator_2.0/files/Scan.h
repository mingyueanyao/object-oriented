#ifndef SCAN_H
#define SCAN_H

#include<iostream>
#include<queue>
using namespace std;

class Scan
{
	public:
		//接收一个字符串算式，
		//将算式中的数字和运算符拆分并存入一个队列，
		//最后返回这个队列。
		queue<string> ToStringQueue(string s_input);
};

#endif
