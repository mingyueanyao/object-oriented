#include<iostream>
#include<queue>
#include"Print.h"
using namespace std;

void Print::PrintStringQueue(queue<string> output)
{
	while(!output.empty())
	{
		cout<<output.front()<<endl;
		output.pop();
	}
}
