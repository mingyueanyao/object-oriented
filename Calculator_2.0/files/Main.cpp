#include<iostream>
#include<queue>
#include"Scan.h"
#include"Print.h" 
using namespace std;

int main()
{
	Scan getStr;
	Print printQue;
	
	string s_input;				//������ַ��� 
	queue<string> qs_output;	//����Ķ��� 
	
	//������ʽ�ַ��� 
	cin >> s_input;
	//��ȡ���ֺ��������ֺõĶ��� 
	qs_output = getStr.ToStringQueue(s_input);
	//������ֺ��������ֺõĶ��� 
	printQue.PrintStringQueue(qs_output);
	
	return 0;
}
