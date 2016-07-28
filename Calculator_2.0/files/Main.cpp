/***************************************************************   
    FileName: Main.cpp
	    
    Author:newmoon      
	Version :2.0        
	Date:16/07/27   
	
    Description:
		计算四则运算表达式 
	
	Function List:
		int main()	计算四则运算表达式
		                    
    History:               
    	<author>  <time>   <version >   <desc>        
    	newmoon   16/07/25    2.0     代码规范相关
		newmoon	  16/07/27    2.1     代码规范相关   
**************************************************************/ 
    
#include"Scan.h"
#include"Print.h"
#include"Calculation.h" 

#include<iostream>
#include<string.h>
#include<queue>
using namespace std;

int main(int argc, char* argv[])
{
	Scan CScan;
	Print CPrint;
	Calculation CCalculate;
	
	string s_input = argv[argc-1];		//输入的字符串 
	queue<string> qs;		//数字和运算符分开的队列 
	double ans;	//四则算式的答案 
	   
	qs = CScan.ToStringQueue(s_input); 
	ans = CCalculate.CalculateStringQueue(qs); 
	
	if (strcmp(argv[1], "-a") == 0)
	{
		CPrint.PrintAns(s_input, ans);		
	} 
	else
	{
		CPrint.PrintAns(ans);		
	}
	
	return 0;
}
