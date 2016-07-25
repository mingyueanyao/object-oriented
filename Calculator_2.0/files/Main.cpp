#include<iostream>
#include<queue>
#include"Scan.h"
#include"Print.h" 
using namespace std;

int main()
{
	Scan getStr;
	Print printQue;
	
	string s_input;				//输入的字符串 
	queue<string> qs_output;	//输出的队列 
	
	//输入算式字符串 
	cin >> s_input;
	//获取数字和运算符拆分好的队列 
	qs_output = getStr.ToStringQueue(s_input);
	//输出数字和运算符拆分好的队列 
	printQue.PrintStringQueue(qs_output);
	
	return 0;
}
