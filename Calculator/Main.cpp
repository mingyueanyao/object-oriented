#include<stdlib.h>
#include<iostream>
#include<string>
#include<queue>
#include"Scan.h"
#include"Print.h"
using namespace std;
 
int main()
{
	Scan scan;
	Print print;
	string input;
	queue<string>q;
	
	getline(cin,input);
	q=scan.ToStringQueue(input);
	print.getStringQueue(q);
	
	system("pause");
	return 0;
 } 
