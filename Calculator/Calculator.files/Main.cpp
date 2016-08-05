#include<iostream>
#include<fstream>
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
	string input;
	double result;
	queue<string>q;

	if(strcmp(argv[1],"-a")==0)
	{
		input=argv[argc-1];
		q=scan.ToStringQueue(input);
		result=calculation.getStringQueue(q);
		print.putout(result,input,"0");
	}

	else if(strcmp(argv[1],"-f")==0)
	{
		string ifile=argv[2];

		ifstream infile(ifile.c_str(),ios::in);
		if(!infile)
		{
			cerr<<" infile open error!"<<endl;
			exit(1);
		}

		while(!infile.eof())
		{
			getline(infile,input,'\n');
			q=scan.ToStringQueue(input);
			result=calculation.getStringQueue(q);
			print.putout(result,input,argv[3]);
		}

		infile.close();
	}

	else
	{
		input=argv[argc-1];
		q=scan.ToStringQueue(input);
		result=calculation.getStringQueue(q);
		print.putout(result,"0","0");
	}

	return 0;
}
