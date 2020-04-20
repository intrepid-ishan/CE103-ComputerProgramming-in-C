#include<stdio.h>
void main()
{
   int n=2,i,sum=0;

   for(i=1;i<=10;i++)
   {
       sum=sum+n;
       n=n+2;
   }
   printf("sum of first 10 even numbers is:%d",sum);
}
