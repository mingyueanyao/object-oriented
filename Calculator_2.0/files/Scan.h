#ifndef SCAN_H
#define SCAN_H

#include<iostream>
#include<queue>
using namespace std;

class Scan
{
	public:
		//拆分接收的算式字符串 
		queue<string> ToStringQueue(string s_input);
		
		//从文件中获取字符串算式 
		bool GetFileString(ifstream& ifile, string& s_input);
};

#endif
