#ifndef SCAN_H
#define SCAN_H

#include<iostream>
#include<queue>
using namespace std;

class Scan
{
	public:
		//��ֽ��յ���ʽ�ַ��� 
		queue<string> ToStringQueue(string s_input);
		
		//���ļ��л�ȡ�ַ�����ʽ 
		bool GetFileString(ifstream& ifile, string& s_input);
};

#endif
