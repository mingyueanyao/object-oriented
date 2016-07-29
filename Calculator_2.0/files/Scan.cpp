/****************************************************************************************  
    FileName: Scan.cpp
	    
    Author:newmoon      
	Version :2.2        
	Date:16/07/29   
	
    Description:
		定义实现Scan类中的相关方法 
	
	Function List:
		queue<string> ToStringQueue(string s_input) 拆分算式中数字和运算符
		bool Scan :: GetFileString(ifstream& ifile, string& s_input)	从文件中获取算式	
		                    
    History:               
    	<author>  <time>   <version >   <desc>        
		newmoon   16/07/25    2.0     代码规范相关
		newmoon   16/07/27    2.1     区分负号和减号
		newmoon   16/07/29    2.2     不获取算式等号   
*****************************************************************************************/
 
#include"Scan.h"

#include<iostream>
#include<fstream>
#include<queue>
using namespace std;

/********************************************************   
    Description:接收一个字符串算式，
		将算式中的数字和运算符拆分并存入一个队列， 
		最后返回这个队列。   
    Input:一个字符串类型的算式               
    Output:无   
    Return:一个元素为string对象的队列 
    Others:算式中的数字位数（包括小数位）超过十位则报错 
********************************************************/
queue<string> Scan :: ToStringQueue(string s_input)
{	
	int cnt = 0;	//统计数字位数的变量 	
	string t_str;	//暂存连接起来的数字的中间变量
	queue<string> qs;	//返回的队列 
	int len = s_input.size() - 1;	//遍历的长度，不包括等号 

	//遍历整个算式字符串以拆分数字和运算符
	//碰到数字先接到中间变量上
	//碰到运算符则先前的数字入队 
	for (int i = 0; i < len; i++)
	{
		//遍历到运算符 
		if (s_input[i] == '+' || s_input[i] == '-'
		        || s_input[i] == '*' || s_input[i] == '/'
		        || s_input[i] == '(' || s_input[i] == ')')
		{
			//特判以'-'开头的算式，变成'0-'的形式 
			if (s_input[i] == '-' && i == 0)
			{
				qs.push("0");
			}
			
			//中间变量若不为空（如以"-"开头） 
			//中间变量里接起来的数字入队 
			if (!t_str.empty())
			{
				qs.push(t_str);
				//清空中间变量以便下次连接 
				t_str.clear();
				//重置位数统计以便下次统计 
				cnt = 0;
			}

			//遍历到的运算符入队 
			switch (s_input[i])
			{
				case '+':
					qs.push("+");
					break;
				case '-':
					qs.push("-");
					break;
				case '*':
					qs.push("*");
					break;
				case '/':
					qs.push("/");
					break;
				case '(':
					qs.push("(");
					break;
				case ')':
					qs.push(")");
					break;
			}
			
			//特判算式里正常带括号的负数 
			if ((s_input[i] == '(' || s_input[i] == '+'
				|| s_input[i] == '-' || s_input[i] == '*'
				|| s_input[i] == '/') && s_input[i + 1] == '-')
			{
				t_str = t_str + s_input[i + 1];
				//跳过负号继续遍历 
				i++;
			}
		}

		//遍历到数字 
		else
		{
			//接到中间变量上以组成数字 
			t_str = t_str + s_input[i];

			//统计数字位数 
			if (s_input[i] != '.')
			{
				cnt++;
			}
 
			if (cnt > 10)
			{
				cout << "数字位数超过十位" << endl;
				exit(1);
			}

			//以数字结尾的算式需要特判
			//避免漏掉最后一个数字 
			if (i == len - 1)
			{
				qs.push(t_str);
			}
		}
	}

	return qs;
}

/***********************************  
    Description:从文件中获取算式 
    Input:文件流引用ifstream& ifile               
    Output:无   
    Return:布尔类型 
    Others:正常获取即返回真 
************************************/
bool Scan :: GetFileString(ifstream& ifile, string& s_input)
{
	if (ifile >> s_input)
	{
		return true;
	}
	else
	{
		return false;
	}
}
 
