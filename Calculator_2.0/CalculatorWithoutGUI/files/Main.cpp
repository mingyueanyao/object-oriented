/****************************************************   
    FileName: Main.cpp
	    
    Author:newmoon      
	Version :2.2        
	Date:16/07/29   
	
    Description:
		计算四则运算表达式 
	
	Function List:
		int main()	计算四则运算表达式
		                    
    History:               
    	<author>  <time>   <version >   <desc>        
		newmoon   16/07/25    2.0     计算器第一步 
		newmoon	  16/07/27    2.1     计算器第二步
		newmoon   16/07/29    2.2     计算器第三步 
***************************************************/ 
    
#include"Scaner.h"
#include"Printer.h"
#include"Calculation.h" 

#include<iostream>
#include<fstream>
#include<queue>
using namespace std;

int main(int argc, char* argv[])
{
	Scaner CScan;
	Printer CPrint;
	Calculation CCalculate;
	
	string arg_1 = argv[1];	//储存第一个参数 
	queue<string> qs;	//数字和运算符分开的队列 
	string s_input;	//输入的字符串 	 
	double ans;	//四则算式的答案
	
	if (arg_1.compare("-f") == 0) 
	{
		//打开读，写文件 
		ifstream ifile(argv[2], ios :: in);
		ofstream ofile(argv[3], ios :: out);
		
		if (ifile.is_open() && ofile.is_open())
		{
			//实际上等价于while (ifile >> s_input)。。。 
			while (CScan.GetFileString(ifile, s_input))
			{		
				qs = CScan.ToStringQueue(s_input);
				ans = CCalculate.CalculateStringQueue(qs);
				CPrint.PrintToFile(ofile, ans); 
			}
		}
		else 
		{
			cout << "文件打开失败！" << endl; 
		}
		
		//关闭读，写文件 
		ifile.close();
		ofile.close();
	}
	else
	{		
		s_input = argv[argc - 1];
		qs = CScan.ToStringQueue(s_input);
		ans = CCalculate.CalculateStringQueue(qs);
		
		if (arg_1.compare("-a") == 0)
		{
			CPrint.PrintExpreesion(s_input, ans);
		}
		else
		{
			CPrint.PrintAns(ans);
		}
	} 
	  	
	return 0;
}
