#ifndef PRINT_H
#define PRINT_H

#include<iostream>
#include<queue>
using namespace std;

class Print
{
	public:
		//输出ans  
		void PrintAns(double ans);
		//输出qs_output 
		void PrintQueue(queue<string> qs_output);
		//输出ans到文件
		void PrintToFile(ofstream& ofile, double ans); 
		//输出"s_input = ans" 
		void PrintExpreesion(string s_input, double ans);
		
};

#endif
