// Shared via Compiler App https://g633x.app.goo.gl/TPlw
#include<stdio.h>
void main()
{
  int n,y,a,sum=0;
  printf("enter a number which is to be checked whether it is armstrong or not = \n");
  scanf("%d", &n);

  y=n;

  while(n>0)
    {
    	a=n%10;
    	sum=sum + a*a*a;
    	n=n/10; // check carefully its / not %
    }

	if(sum==y)//is we use == or = there is no difference
	  {
	  	printf("entered number is armstrong");
	  }
	else
	  {
	  	printf("entered number is not armstrong");
	  }



}
