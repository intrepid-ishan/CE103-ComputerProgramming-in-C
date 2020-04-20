#include<stdio.h>

void main()
{
    int a[10],b[10],c[10],i;

    printf("\n enter the 10 different values:");
    for(i=0;i<=9;i++)
      {
          scanf("%d", &a[i]);
      }

     printf("\n again\n enter the 10 different values:");
    for(i=0;i<=9;i++)
      {
          scanf("%d", &b[i]);
      }

    for(i=0;i<=9;i++)
      {
        c[i]=a[i] + b[i];
      }

    for(i=0;i<=9;i++)
      {
        printf("\n sum of respective number is %d", c[i]);
      }
}

