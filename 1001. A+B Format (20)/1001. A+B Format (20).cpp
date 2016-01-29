#include<stdio.h>
int main ()
{
  int a,b,c,d[7],i=0,j=0;
  scanf("%d %d",&a,&b);
  c=a+b;
  if(c==0) printf("%d",c);   
  else
	{
	  if(c<0) 
	  {
	    c=-c;
	    printf("-");
	  }
	  while(c>0)
	   {
		d[i]=c%10;
		c=c/10;
		i++;
		j++;
	   }	
	}
  for(;0<j;j--)
  {
  	printf("%d",d[j-1]);
  	if((j-1)%3==0&&j-1>0) printf(",");
  }
	return 0;
 } 
