#include<iostream>
#include<queue>
#include"Scan.h"
using namespace std;

queue<string> Scan::ToStringQueue(string s_input)
{
	queue<string> qs_output;
	string t_str;
	int cnt = 0;

	for (int i = 0; i<s_input.size(); i++)
	{
		if (s_input[i] == '+' || s_input[i] == '-'
		        || s_input[i] == '*' || s_input[i] == '/'
		        || s_input[i] == '(' || s_input[i] == ')')
		{
			if (!t_str.empty())
			{
				qs_output.push(t_str);
				t_str.clear();
				cnt = 0;
			}

			switch (s_input[i])
			{
				case'+':
					qs_output.push("+");
					break;
				case'-':
					qs_output.push("-");
					break;
				case'*':
					qs_output.push("*");
					break;
				case'/':
					qs_output.push("/");
					break;
				case'(':
					qs_output.push("(");
					break;
				case')':
					qs_output.push(")");
					break;
			}

			continue;
		}

		else
		{
			t_str = t_str + s_input[i];

			if (s_input[i] != '.')
			{
				cnt++;
			}

			if (cnt > 10)
			{
				cout << "数字位数超过十位" << endl;
				exit(1);
			}

			if (i == s_input.size()-1)
			{
				qs_output.push(t_str);
			}

			continue;
		}
	}

	return qs_output;
}
