#include<stdlib.h>
#include<iostream>
#include<string>
#include<queue>
using namespace std;

class Print
{
	public:
		void getStringQueue(queue<string>q)
		{
			int n=q.size();
			for(int i=0; i<n; i++)
			{
				cout<<q.front();
				q.pop();
			}
		}
};
