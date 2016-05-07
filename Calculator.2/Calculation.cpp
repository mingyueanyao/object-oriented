#include"Calculation.h"
#include<stdlib.h>
#include<iostream>
#include<string>
#include<sstream>
#include<queue>
#include<stack>
using namespace std;
int mark;

stack<double>numberstack;
stack<string>characterstack;

char judge[7][7]= {{'>','>','<','<','<','>','>'},
	{'>','>','<','<','<','>','>'},
	{'>','>','>','>','<','>','>'},
	{'>','>','>','>','<','>','>'},
	{'<','<','<','<','<','=','0'},
	{'>','>','>','>','0','>','>'},
	{'<','<','<','<','<','0','='}
};

char position(string characterstack,string tempstr )
{
	int x,y;
	
	switch(characterstack[0])
	{
		case '+':
			x=0;
			break;
		case'-':
			x=1;
			break;
		case'*':
			x=2;
			break;
		case'/':
			x=3;
			break;
		case'(':
			x=4;
			break;
		case')':
			x=5;
			break;
		case'#':
			x=6;
			break;
	}

	switch(tempstr[0])
	{
		case'+':
			y=0;
			break;
		case'-':
			y=1;
			break;
		case'*':
			y=2;
			break;
		case'/':
			y=3;
			break;
		case'(':
			y=4;
			break;
		case')':
			y=5;
			break;
		case'#':
			y=6;
			break;
	}

	return judge[x][y];
}

void calculate(char judge,string tempstr)
{
	double num,num1,num2;
	switch(judge)
	{
		case'>':
			num1=numberstack.top();
			numberstack.pop();
			num2=numberstack.top();
			numberstack.pop();
			switch(characterstack.top()[0])
			{
				case'+':
					num=num1+num2;
					numberstack.push(num);
					characterstack.pop();
					break;
				case'-':
					num=num2-num1;
					numberstack.push(num);
					characterstack.pop();
					break;
				case'*':
					num=num1*num2;
					numberstack.push(num);
					characterstack.pop();
					break;
				case'/':
					num=num2/num1;
					numberstack.push(num);
					characterstack.pop();
					break;
			}

			while(!characterstack.empty()&&mark==0)
			{
				calculate(position(characterstack.top() ,tempstr),tempstr);
			}

			break;
		case'<' :
			mark=1;
			characterstack.push(tempstr);
			break;
		case'=':
			if(tempstr[0]=='#')
			{
				cout<<numberstack.top()<<endl;
				numberstack.pop();
				characterstack.pop();
			}
			else
			{
				characterstack.pop();
				mark=1;
			}

			break;
		default:
			cout<<"wrong input"<<endl;
			system("pause");
	}
}
void Calculation::getStringQueue(queue<string>q)
{
	q.push("#");
	characterstack.push("#");
	stringstream stream;
	string tempstr;
	int n=q.size();
	double tempnum;
	for(int i=0; i<n; i++)
	{
		mark=0;
		tempstr=q.front();
		q.pop();
		if(tempstr=="+"||tempstr=="-"||tempstr=="*"||tempstr=="/"||tempstr=="("||tempstr==")"||tempstr=="#")
		{
			calculate(position(characterstack.top() ,tempstr),tempstr);
		}

		else
		{
			stream.clear();
			stream<<tempstr;
			stream>>tempnum;
			numberstack.push(tempnum);
		}
	}
}
