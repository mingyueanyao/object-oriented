#include"Print.h"
#include<stdlib.h>
#include<iostream>
#include<string>
#include<queue>
using namespace std;

void Print::getStringQueue(queue<string>q)
		{
			int n=q.size();
			for(int i=0; i<n; i++)
			{
				cout<<q.front();
				q.pop();
			}
		}
