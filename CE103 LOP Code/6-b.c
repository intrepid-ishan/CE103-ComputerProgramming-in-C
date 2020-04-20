#include<stdio.h>

void main()
{
    int a[10],ceven=0,codd=0,i;

    printf("\n enter the 10 different values:");
    for(i=0;i<=9;i++)
      {
          scanf("%d", &a[i]);
      }

    for(i=0;i<=9;i++)
      {
        if(a[i]%2==0)
          {
             ceven++;
          }
        else
          {
             codd++;
          }

      }

    printf("from total 10 values\n even are:%d \nodd are:%d", ceven,codd);
}

