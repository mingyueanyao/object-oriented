#include<iostream>
#include<queue>
#include"Scan.h"
using namespace std;

queue<string> Scan::ToStringQueue(string input)
{
	queue<string> output;
	string t_str;
	int cnt=0;
	
	for(int i=0;i<input.size();i++)
	{
		if(input[i]=='+'||input[i]=='-'||input[i]=='*'||input[i]=='/'||input[i]=='('||input[i]==')')
		{
			if(!t_str.empty())
			{
				output.push(t_str);
				t_str.clear();
				cnt=0;
			}
			
			switch(input[i])
			{
				case'+':
					output.push("+");
					break;
				case'-':
					output.push("-");
					break;
				case'*':
					output.push("*");
					break;
				case'/':
					output.push("/");
					break;
				case'(':
					output.push("(");
					break;
				case')':
					output.push(")");
					break;		
			}
			
			continue;
		}
		
		else
		{
			t_str=t_str+input[i];
			
			if(input[i]!='.')
				cnt++;
				
				
			if(cnt>10)
			{
				cout<<"数字位数超过十位"<<endl;
				exit(1);
			}
				 
			if(i==input.size()-1)
				output.push(t_str);
				
			continue;
		}
	}
	
	return output;
}
