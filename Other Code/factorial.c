#include <stdio.h>
void main()
{
 int n,fact=1;
 printf("enter the digit of which factorial is to be printed:\n");//intialization
 scanf("%d",&n);

 if(n<=0)
 {
     printf("factorial is not possible");
 }
 else
 {
     while(n>0)
     {
        fact=fact*n;
        n=n-1;
     }
 }
 printf("%d \n",fact);
}

