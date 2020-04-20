// Shared via Compiler App https://g633x.app.goo.gl/TPlw
#include<stdio.h>
void main()
{
  int n,i,flag=0;
  printf("enter a number which is to be checked whether it is prime or not = \n");
  scanf("%d", &n);

    i=1;
  while(i<=n) //condition how much time loop must rotate
    {
    	 if(n%i==0)//necessary
    	   {
      flag=flag +1;
         }
      i++;
    }

	if(flag==2)//prefer condition of equality not use equal to
	  {
	  	printf("entered number is prime");
	  }
	else
	  {
	  	printf("entered number is not prime");
	  }



}
