/**************************************************************************  
    FileName: Scan.cpp
	    
    Author:newmoon      
	Version :2.0        
	Date:16/07/27   
	
    Description:
		����ʵ��Scan���е���ط��� 
	
	Function List:
		queue<string> ToStringQueue(string s_input) �����ʽ�����ֺ������	
		                    
    History:               
    	<author>  <time>   <version >   <desc>        
    	newmoon   16/07/25    2.0     ����淶���
		newmoon   16/07/27    2.1     ���ָ��źͼ���   
**************************************************************************/
 
#include"Scan.h"
#include<iostream>
#include<queue>
using namespace std;

/********************************************************   
    Description:����һ���ַ�����ʽ��
				����ʽ�е����ֺ��������ֲ�����һ�����У� 
				��󷵻�������С�   
    Input:һ���ַ������͵���ʽ               
    Output:��   
    Return:һ��Ԫ��Ϊstring����Ķ��� 
    Others:��ʽ�е�����λ��������С��λ������ʮλ�򱨴� 
********************************************************/
queue<string> Scan::ToStringQueue(string s_input)
{
	queue<string> qs;	//���صĶ��� 
	string t_str;		//�ݴ��������������ֵ��м���� 
	int cnt = 0;		//ͳ������λ���ı��� 

	//����������ʽ�ַ����Բ�����ֺ������
	//���������Ƚӵ��м������
	//�������������ǰ��������� 
	for (int i = 0; i<s_input.size(); i++)
	{
		//����������� 
		if (s_input[i] == '+' || s_input[i] == '-'
		        || s_input[i] == '*' || s_input[i] == '/'
		        || s_input[i] == '(' || s_input[i] == ')')
		{
			//������'-'��ͷ����ʽ�����'0-'����ʽ 
			if (s_input[i] == '-' && i == 0)
			{
				qs.push("0");
			}
			
			//�м��������Ϊ�գ�����"-"��ͷ�� 
			//�м�������������������� 
			if (!t_str.empty())
			{
				qs.push(t_str);
				//����м�����Ա��´����� 
				t_str.clear();
				//����λ��ͳ���Ա��´�ͳ�� 
				cnt = 0;
			}

			//���������������� 
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
			
			//������ʽ�����������ŵĸ��� 
			if (s_input[i] == '(' && s_input[i + 1] == '-')
			{
				t_str = t_str + s_input[i + 1];
				//�������ż������� 
				i++;
			}
		}

		//���������� 
		else
		{
			//�ӵ��м��������������� 
			t_str = t_str + s_input[i];

			//ͳ������λ�� 
			if (s_input[i] != '.')
			{
				cnt++;
			}
 
			if (cnt > 10)
			{
				cout << "����λ������ʮλ" << endl;
				exit(1);
			}

			//�����ֽ�β����ʽ��Ҫ����
			//����©�����һ������ 
			if (i == s_input.size() - 1)
			{
				qs.push(t_str);
			}
		}
	}

	return qs;
}
