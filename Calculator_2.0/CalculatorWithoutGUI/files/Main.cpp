/****************************************************   
    FileName: Main.cpp
	    
    Author:newmoon      
	Version :2.2        
	Date:16/07/29   
	
    Description:
		��������������ʽ 
	
	Function List:
		int main()	��������������ʽ
		                    
    History:               
    	<author>  <time>   <version >   <desc>        
		newmoon   16/07/25    2.0     ��������һ�� 
		newmoon	  16/07/27    2.1     �������ڶ���
		newmoon   16/07/29    2.2     ������������ 
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
	
	string arg_1 = argv[1];	//�����һ������ 
	queue<string> qs;	//���ֺ�������ֿ��Ķ��� 
	string s_input;	//������ַ��� 	 
	double ans;	//������ʽ�Ĵ�
	
	if (arg_1.compare("-f") == 0) 
	{
		//�򿪶���д�ļ� 
		ifstream ifile(argv[2], ios :: in);
		ofstream ofile(argv[3], ios :: out);
		
		if (ifile.is_open() && ofile.is_open())
		{
			//ʵ���ϵȼ���while (ifile >> s_input)������ 
			while (CScan.GetFileString(ifile, s_input))
			{		
				qs = CScan.ToStringQueue(s_input);
				ans = CCalculate.CalculateStringQueue(qs);
				CPrint.PrintToFile(ofile, ans); 
			}
		}
		else 
		{
			cout << "�ļ���ʧ�ܣ�" << endl; 
		}
		
		//�رն���д�ļ� 
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
