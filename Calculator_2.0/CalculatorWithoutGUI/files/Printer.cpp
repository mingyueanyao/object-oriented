/********************************************************************************  
    FileName: Print.cpp
	    
    Author:newmoon      
	Version :2.2        
	Date:16/07/29   
	
    Description:
		����ʵ��Print���е���ط��� 
	
	Function List:
		void PrintAns(double ans)	���ans 	
		void PrintQueue(queue<string> qs_output)	���qs_output
		void PrintToFile(ofstream& ofile, double ans)	���ans���ļ�
		void PrintExpreesion(string s_input, double ans)	���"s_input = ans" 
			
		                    
    History:               
    	<author>  <time>   <version >   <desc>        
		newmoon   16/07/25    2.0     ����淶���
		newmoon	  16/07/27    2.1     �����������
		newmoon   16/07/29    2.2     ����������ļ�   
********************************************************************************/ 

#include"Printer.h"

#include<iostream>
#include<iomanip>
#include<fstream>
#include<queue>
using namespace std;

/***********************   
    Description:���ans 
    Input:�� 
    Output:ans  
    Return:��   
    Others:�� 
************************/ 
void Printer :: PrintAns(double ans)
{
	cout << setprecision(10);
	if(ans == 0)
	{
		cout << 0 << endl;
	}
	else
	{
		cout << ans << endl;
	}	
}

/************************************   
    Description:���qs_output    
    Input:Ԫ������Ϊstring����Ķ��� 
    Output:�����е�Ԫ�أ���string����   
    Return:��   
    Others:�� 
*************************************/    
void Printer :: PrintQueue(queue<string> qs_output)
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

/*****************************************************   
    Description:���"s_input = ans"     
    Input:�ַ������͵���ʽ��double���͵Ĵ� 
    Output:�ַ������͵���ʽ�����ںź�double���͵Ĵ�  
    Return:��   
    Others:�Ⱥź��пո� 
******************************************************/ 
void Printer :: PrintExpreesion(string s_input, double ans)
{
	cout << s_input << " ";
	cout << setprecision(10);
	if(ans == 0)
	{
		cout << 0 << endl;
	}
	else
	{
		cout << ans << endl;
	}	
}

/*****************************************   
    Description:���double���͵Ĵ𰸵��ļ�    
    Input:ofstream& ofile��double ans
    Output:��  
    Return:��   
    Others:�� 
******************************************/
void Printer :: PrintToFile(ofstream& ofile, double ans)
{
	ofile << setprecision(10);
	if(ans == 0)
	{
		ofile << 0 << endl;
	}
	else
	{
		ofile << ans << endl;
	}	
}