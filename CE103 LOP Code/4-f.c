#include <stdio.h>
void main()
{
    int a=5,n;
    for( ; ;)
    {
       printf("enter the number: \n");
       scanf("%d",&n);
       if(a==n)
       {
           printf("\n you win");
           break;
       }
    }
}
