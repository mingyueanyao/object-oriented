#include<stdlib.h>
#include<iostream>
#include<string>
#include<queue>
using namespace std;

class Scan
{
	public:
		queue<string> ToStringQueue(string input)
		{
			int cnt=0;
			queue<string>q;
			string str;

			for(int i=0; i<input.size(); i++)
			{
				if(input[i] == '+'||input[i] == '-'||input[i] == '*'||input[i] == '/'||input[i] == '('||input[i] == ')')
				{
					if(!str.empty())
					{
						q.push(str);
					}

					if(input[i]=='-'&&i==0)
					{
						str=str+input[i];

					}

					else if(input[i]=='-'&&q.back()=="(")
					{
						str=str+input[i];
					}

					else
					{
						cnt=0;
						str=input[i];
						q.push(str);
						str.clear();
					}

				}

				else
				{
					str=str+input[i];

					if(input[i]!='.')
					{
						cnt++;
					}

					if(cnt==11)
					{
						cout<<"wrong input"<<endl;
						system("pause");
					}

					if(i==input.size()-1)
					{
						q.push(str);
					}
				}
			}
			return q;
		}
};
