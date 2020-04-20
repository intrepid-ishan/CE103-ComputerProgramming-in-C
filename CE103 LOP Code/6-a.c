#include<stdio.h>

void main()
{
    int a[10],sum=0,i;

    printf("\n enter the 10 different values:");
    for(i=0;i<=9;i++)
      {
          scanf("%d", &a[i]);
      }

    for(i=0;i<=9;i++)
      {
        sum=sum + a[i];
      }

    printf("sum of the 10 different values is :%d", sum);
}
