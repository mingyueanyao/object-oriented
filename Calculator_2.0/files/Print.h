#ifndef PRINT_H
#define PRINT_H

#include<iostream>
#include<queue>
using namespace std;

class Print
{
	public:
		//���ans  
		void PrintAns(double ans);
		//���qs_output 
		void PrintAns(queue<string> qs_output);
		//���"s_input = ans" 
		void PrintAns(string s_input, double ans);
};

#endif
