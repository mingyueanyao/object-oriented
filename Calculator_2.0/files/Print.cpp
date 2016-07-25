#include<iostream>
#include<queue>
#include"Print.h"
using namespace std;

void Print::PrintStringQueue(queue<string> qs_output)
{
	while(!qs_output.empty())
	{
		cout << qs_output.front() << endl;
		qs_output.pop();
	}
}
