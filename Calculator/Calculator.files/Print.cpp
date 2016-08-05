#include"Print.h"
#include<iostream>
#include<fstream>
#include<string>
#include<queue>
using namespace std;

void Print::putout(double res,string in,string out)
{
	string ofile=out;

	if(in=="0")
	{
		cout<<res<<endl;
	}

	else if(out!="0")
	{

		ofstream outfile(ofile.c_str(),ios::app);
		if(!outfile)
		{
			cerr<<"outfile open error!"<<endl;
			exit(1);
		}

		outfile<<res<<endl;
		
		outfile.close();	
	}
	
	else
	{
		cout<<in<<" "<<res<<endl;
	}
	
}
