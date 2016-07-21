#include<iostream>
#include<queue>
#include"Scan.h"
#include"Print.h" 
using namespace std;

int main()
{
	Scan getStr;
	Print printQue;
	
	string input;
	queue<string> output;
	
	cin>>input;
	output=getStr.ToStringQueue(input);
	printQue.PrintStringQueue(output);
	
	return 0;
}
