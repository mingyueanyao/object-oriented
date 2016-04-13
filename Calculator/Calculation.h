#include<stdlib.h>
#include<iostream>
#include<string>
#include<sstream>
#include<queue>
#include<stack>
using namespace std;
int mark;
stack<int>numberstack;
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
	if(characterstack[0]=='+')x=0;
	else if(characterstack[0]=='-')x=1;
	else if(characterstack[0]=='*')x=2;
	else if(characterstack[0]=='/')x=3;
	else if(characterstack[0]=='(')x=4;
	else if(characterstack[0]==')')x=5;
	else x=6;

	if(tempstr[0]=='+')y=0;
	else if(tempstr[0]=='-')y=1;
	else if(tempstr[0]=='*')y=2;
	else if(tempstr[0]=='/')y=3;
	else if(tempstr[0]=='(')y=4;
	else if(tempstr[0]==')')y=5;
	else y=6;

	return judge[x][y];
}
void calculate(char judge,string tempstr)
{
	int num,num1,num2,tempnum;
	if(judge=='>')
	{
		num1=numberstack.top();
		numberstack.pop();
		num2=numberstack.top();
		numberstack.pop();

		if(characterstack.top()[0]=='+')
		{
			num=num1+num2;
			numberstack.push(num);
			characterstack.pop();
		}

		else if(characterstack.top()[0]=='-')
		{
			num=num2-num1;
			numberstack.push(num);
			characterstack.pop();
		}

		else if(characterstack.top()[0]=='*')
		{
			num=num1*num2;
			numberstack.push(num);
			characterstack.pop();
		}

		else if(characterstack.top()[0]=='/')
		{
			num=num2/num1;
			numberstack.push(num);
			characterstack.pop();
		}

		while(!characterstack.empty()&&mark==0)
		{
			calculate(position(characterstack.top() ,tempstr),tempstr);
		}
	}

	else if(judge=='<')
	{
		mark=1;
		characterstack.push(tempstr);
	}

	else if(judge=='=')
	{
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
	}

	else
	{
		cout<<"wrong input"<<endl;
		system("pause");
	}
}
class Calculation
{
	public:
		void getStringQueue(queue<string>q)
		{
			q.push("#");
			characterstack.push("#");
			stringstream stream;
			string tempstr;
			int n=q.size(),tempnum;
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
};
