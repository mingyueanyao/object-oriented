#include<stdlib.h>
#include<iostream>
#include<string>
#include<queue>
using namespace std;

class Scan
{
	public:
		queue<string> ToStringQueue(string input)
		{ 	
		   int j=0;	   
	       queue<string>q;
	       string str;
	
	       for(int i=0;i<input.size();i++)
	       {
		        if(input[i] == '+'||input[i] == '-'||input[i] == '*'||input[i] == '/'||input[i] == '('||input[i] == ')')
		       {
		   	        j=0;
		   	    
			        if(!str.empty())
			        {
				        q.push(str);
			        }
			    
			        str=input[i];
			        q.push(str);
				    str.clear();
		        }
		    
		        else
		        {
		    	    str=str+input[i];		    	
		    	    
					if(input[i]!='.')
					{
						j++;
					}  
					
		    	    if(j==11)
		    	    {
		    		    cout<<"wrong input"<<endl;
		    		    system("pause");
				    }
				
		    	    if(i==input.size()-1)
			        {
				        q.push(str);
			        }
		        }
	       }			
	        return q;
		}
};
