#ifndef PRINT_H
#define PRINT_H

#include<iostream>
#include<queue>
using namespace std;

class Print
{
	public:
		//Êä³öans  
		void PrintAns(double ans);
		//Êä³öqs_output 
		void PrintAns(queue<string> qs_output);
		//Êä³ö"s_input = ans" 
		void PrintAns(string s_input, double ans);
};

#endif
