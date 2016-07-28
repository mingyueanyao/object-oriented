/**************************************************************************  
    FileName: Calculation.cpp
	    
    Author:newmoon      
	Version :2.0        
	Date:16/07/25   
	
    Description:
		����ʵ��Calculation���е���ط��� 
	
	Function List:	 
		double CalculateStringQueue(queue<string> qs)	���㲢������ʽ�Ĵ�  
		void CalculateByStack(char order, string t_str)	������ջ��������ʽ
		char GetPosition(string CharStackTop, string t_str)	�������ȼ�����λ��
			
		                    
    History:               
    	<author>  <time>   <version >   <desc>        
    	newmoon   16/07/27    2.0     ����淶���   
**************************************************************************/

#include"Calculation.h"
#include<iostream>
#include<sstream> 
#include<queue>
#include<stack>
using namespace std;

int flag;	//�Ƿ�������� 
double ans;	//���յļ����� 

stack<double> NumStack;	//�������ֵ�ջ 
stack<string> CharStack;	//�����������ջ 

//�����������ȼ��жϵ�����
//�б�ʾ�����ջ���������
//�б�ʾ��ʽ��ǰ�������������
//">"��ʾջ�����ȼ��ߣ�Ӧ���������м���
//"<"��ʾջ�����ȼ��ͣ��������������ֱ����ջ
//"="��ʾ��������,NumStack���һ��Ԫ�ؼ��� 
//���Ǳ�����")"��ջ��Ϊ"("��Ӧ����ջ����������
//"0"��ʾ��ʽ���� 
				   //'+', '-', '*', '/', '(', ')', '#' 
char order[7][7] = {{'>', '>', '<', '<', '<', '>', '>'}, //'+'
					{'>', '>', '<', '<', '<', '>', '>'}, //'-'
					{'>', '>', '>', '>', '<', '>', '>'}, //'*'
					{'>', '>', '>', '>', '<', '>', '>'}, //'/'
					{'<', '<', '<', '<', '<', '=', '0'}, //'('
					{'>', '>', '>', '>', '0', '>', '>'}, //')'
					{'<', '<', '<', '<', '<', '0', '='}  //'#'
};

/**********************************************   
    Description:�������ȼ�����λ��    
    Input:�����ջ��ջ��Ԫ��string CharStackTop
		  ��ʽ��ǰ�������������string t_str 
    Output:��  
    Return:���ȼ�������ַ���Ԫ��order[x][y];   
    Others:�� 
***********************************************/
char Calculation :: GetPosition(string CharStackTop, string t_str)
{
	int x, y;
	
	switch (CharStackTop[0])
	{
		case '+':
			x = 0;
			break;
		case '-':
			x = 1;
			break;
		case '*':
			x = 2;
			break;
		case '/':
			x = 3;
			break;
		case '(':
			x = 4;
			break;
		case ')':
			x = 5;
			break;
		case '#':
			x = 6;
			break;
	}

	switch (t_str[0])
	{
		case '+':
			y = 0;
			break;
		case '-':
			y = 1;
			break;
		case '*':
			y = 2;
			break;
		case '/':
			y = 3;
			break;
		case '(':
			y = 4;
			break;
		case ')':
			y = 5;
			break;
		case '#':
			y = 6;
			break;
	}

	return order[x][y];
}

/************************************   
    Description:������ջ��������ʽ    
    Input:���ȼ�����Ԫ��char order
		  ��ʽ��ǰ�������������string t_str
    Output:��   
    Return:��  
    Others:�𰸴���ȫ�ֱ���ans�� 
*************************************/
void Calculation :: CalculateByStack(char order, string t_str)
{
	char m_order;	//��ʾ���ȼ������е�λ��
	double num,num1,num2;	//���ڸ������� 
	
	//�������ȼ�������о������ 
	switch (order)
	{
		//ջ������������ȼ��ϸ�
		//����ջ����������������������� 
		case '>':
			num1 = NumStack.top();
			NumStack.pop();
			num2 = NumStack.top();
			NumStack.pop();
			
			switch (CharStack.top()[0])
			{
				case '+':
					num = num1 + num2;
					NumStack.push(num);
					CharStack.pop();
					break;
				case '-':
					num = num2 - num1;
				    NumStack.push(num);
					CharStack.pop();
					break;
				case '*':
					num = num1 * num2;
					NumStack.push(num);
					CharStack.pop();
					break;
				case '/':
					num = num2 / num1;
					NumStack.push(num);
					CharStack.pop();
					break;
			}
			
			
			//��һ��ջ��Ԫ�����ȼ���Ȼ�ϸ���������� 
			while(!CharStack.empty() && flag)
			{
				m_order = GetPosition(CharStack.top(), t_str);
				CalculateByStack(m_order, t_str);
			}

			break;
		//ջ����������ȼ��ϵ�
		//�����������ֱ����ջ 
		case '<':
			flag = 0;
			CharStack.push(t_str);
			break;
		case '=':
			//��ʾ�������� 
			if (t_str[0] == '#')
			{
				//���մ� 
			    ans = NumStack.top();
			    			    
				NumStack.pop();
				CharStack.pop();
			}
			//������")"��ջ��Ϊ"("��Ӧ����ջ����������
			else
			{
				CharStack.pop();
				flag = 0;
			}

			break;
		//��ʽ�����"0"��� 
		default:
			cout << "�������ʽ����" << endl;
			exit(1);
	}
}

/************************************   
    Description:���㲢������ʽ�Ĵ�     
    Input:��ֺúõ���ʽ����queue<string> qs 
    Output:��   
    Return:��ʽ�Ĵ�   
    Others:�� 
*************************************/
double Calculation :: CalculateStringQueue(queue<string> qs)
{
	//�����жϱ������� 
	qs.push("#");
	CharStack.push("#");
	
	char m_order;	//��ʾ���ȼ������е�λ�� 
	string t_str;	//�������Ķ���Ԫ�� 
	double t_num;	//������stringתΪdouble
	int n = qs.size();	//ÿ��ѭ��qs.size()�����С 
	stringstream stream;	//������stringתΪdouble
	
	//�������п�ʼ���� 	
	for (int i = 0; i < n; i++)
	{
		flag = 1;	//�Ƿ�������� 
		t_str = qs.front();
		qs.pop();
		
		//�������������������Ӧ���� 
		if (t_str == "+" || t_str == "-" || t_str == "*" 
			|| t_str == "/" || t_str == "(" 
				|| t_str == ")" || t_str == "#")
		{
			//�������ȼ������ж���������ȼ� 
			m_order = GetPosition(CharStack.top(), t_str);
			//ʵ�ʵļ��� 
			CalculateByStack(m_order, t_str);
		}
		//���������֣�תΪdouble����ջ		 
		else
		{
			stream.clear();
			stream << t_str;
			stream >> t_num;
			NumStack.push(t_num);
		}
	}
	
	return ans;
}
