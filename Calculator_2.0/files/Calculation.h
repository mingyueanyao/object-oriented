#ifndef CALCULATION_H
#define CALCULATION_H

#include<iostream>
#include<queue>
#include<stack>
using namespace std;

class Calculation
{
	public: 
		//���㲢������ʽ�Ĵ� 
		double CalculateStringQueue(queue<string> qs);
		//���ص�ǰ��������ȼ��������λ�� 
		char GetPosition(string CharStackTop, string t_str);
		//�������ȼ����飬������ջ��������ʽ 
		void CalculateByStack(char order, string t_str);	
};

#endif
