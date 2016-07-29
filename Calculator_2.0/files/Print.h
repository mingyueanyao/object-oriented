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
		void PrintQueue(queue<string> qs_output);
		//���ans���ļ�
		void PrintToFile(ofstream& ofile, double ans); 
		//���"s_input = ans" 
		void PrintExpreesion(string s_input, double ans);
		
};

#endif
