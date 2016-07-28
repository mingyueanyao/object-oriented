/*************************************************************************  
    FileName: Print.cpp
	    
    Author:newmoon      
	Version :2.0        
	Date:16/07/25   
	
    Description:
		定义实现Print类中的相关方法 
	
	Function List:
		void PrintAns(double ans)	输出ans 	
		void PrintAns(queue<string> qs_output)	输出qs_output
		void PrintAns(string s_input, double ans)	输出"s_input = ans" 
			
		                    
    History:               
    	<author>  <time>   <version >   <desc>        
    	newmoon   16/07/25    2.0     代码规范相关
		newmoon	  16/07/27    2.1     重载输出函数   
*************************************************************************/ 

#include"Print.h"
#include<iostream>
#include<queue>
using namespace std;

/************************************   
    Description:输出ans 
    Input:无 
    Output:ans  
    Return:无   
    Others:无 
*************************************/ 
void Print :: PrintAns(double ans)
{
	cout << ans << endl;
}

/************************************   
    Description:输出qs_output    
    Input:元素类型为string对象的队列 
    Output:队列中的元素，即string对象   
    Return:无   
    Others:无 
*************************************/    
void Print::PrintAns(queue<string> qs_output)
{
	//循环输出直到队列为空
	//以此来输出整个队列 
	while(!qs_output.empty())
	{
		cout << qs_output.front() << endl;
		//弹出已输出的队首元素以准备下一次输出	 
		qs_output.pop();
	}
}

/************************************   
    Description:输出"s_input = ans"     
    Input:字符串类型的算式和double类型的答案 
    Output:字符串类型的算式，等于号和double类型的答案  
    Return:无   
    Others:等号后有空格 
*************************************/ 
void Print :: PrintAns(string s_input, double ans)
{
	cout << s_input;
	cout << "= ";
	cout << ans <<endl;
}
