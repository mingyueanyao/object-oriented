#include<stdlib.h>
#include<iostream>
#include<string>
#include<string.h>
#include<queue>
#include"Scan.h"
#include"Print.h"
#include"Calculation.h"
using namespace std;

int main(int argc, char* argv[])
{
	Scan scan;
	Print print;
	Calculation calculation;
	string input=argv[argc-1];
	queue<string>q;

	if(strcmp(argv[1],"-a")==0)
	{
		cout<<input<<"= ";
	}

	q=scan.ToStringQueue(input);
	calculation.getStringQueue(q);

	system("pause");
	return 0;
}
