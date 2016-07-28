/*************************************************************************  
    FileName: Print.cpp
	    
    Author:newmoon      
	Version :2.0        
	Date:16/07/25   
	
    Description:
		����ʵ��Print���е���ط��� 
	
	Function List:
		void PrintAns(double ans)	���ans 	
		void PrintAns(queue<string> qs_output)	���qs_output
		void PrintAns(string s_input, double ans)	���"s_input = ans" 
			
		                    
    History:               
    	<author>  <time>   <version >   <desc>        
    	newmoon   16/07/25    2.0     ����淶���
		newmoon	  16/07/27    2.1     �����������   
*************************************************************************/ 

#include"Print.h"
#include<iostream>
#include<queue>
using namespace std;

/************************************   
    Description:���ans 
    Input:�� 
    Output:ans  
    Return:��   
    Others:�� 
*************************************/ 
void Print :: PrintAns(double ans)
{
	cout << ans << endl;
}

/************************************   
    Description:���qs_output    
    Input:Ԫ������Ϊstring����Ķ��� 
    Output:�����е�Ԫ�أ���string����   
    Return:��   
    Others:�� 
*************************************/    
void Print::PrintAns(queue<string> qs_output)
{
	//ѭ�����ֱ������Ϊ��
	//�Դ�������������� 
	while(!qs_output.empty())
	{
		cout << qs_output.front() << endl;
		//����������Ķ���Ԫ����׼����һ�����	 
		qs_output.pop();
	}
}

/************************************   
    Description:���"s_input = ans"     
    Input:�ַ������͵���ʽ��double���͵Ĵ� 
    Output:�ַ������͵���ʽ�����ںź�double���͵Ĵ�  
    Return:��   
    Others:�Ⱥź��пո� 
*************************************/ 
void Print :: PrintAns(string s_input, double ans)
{
	cout << s_input;
	cout << "= ";
	cout << ans <<endl;
}
