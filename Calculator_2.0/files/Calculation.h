#ifndef CALCULATION_H
#define CALCULATION_H

#include<iostream>
#include<queue>
#include<stack>
using namespace std;

class Calculation
{
	public: 
		//计算并返回算式的答案 
		double CalculateStringQueue(queue<string> qs);
		//返回当前情况在优先级数组里的位置 
		char GetPosition(string CharStackTop, string t_str);
		//借助优先级数组，用两个栈来计算表达式 
		void CalculateByStack(char order, string t_str);	
};

#endif
