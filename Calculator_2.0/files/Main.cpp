/***************************************************************   
    FileName: Main.cpp
	    
    Author:newmoon      
	Version :2.0        
	Date:16/07/27   
	
    Description:
		��������������ʽ 
	
	Function List:
		int main()	��������������ʽ
		                    
    History:               
    	<author>  <time>   <version >   <desc>        
    	newmoon   16/07/25    2.0     ����淶���
		newmoon	  16/07/27    2.1     ����淶���   
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
	
	string s_input = argv[argc-1];		//������ַ��� 
	queue<string> qs;		//���ֺ�������ֿ��Ķ��� 
	double ans;	//������ʽ�Ĵ� 
	   
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
