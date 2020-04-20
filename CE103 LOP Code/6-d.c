#include <stdio.h>
void main()
{
    int a[10],i,temp,n,swap;

    printf("enter 10 numbers : \n");
    for(i=0;i<=9;i++)
    {
        scanf("%d",&a[i]);
    }

    printf("if ascending then enter 1 if descending then enter 2");
    scanf("%d",&n);
    if(n==1)
    {
        for( ; ; )
        {
          swap=0;
          for(i=0;i<=8;i++)
          {
              if(a[i]>a[i+1])
               {
                 temp=a[i];
                 a[i]=a[i+1];
                 a[i+1]=temp;
                 swap=1;
               }
          }
         if(swap==0)
         break;
        }
            printf("ascending= \n");
             for(i=0;i<=9;i++)
              {
                printf("%d",a[i]);
              }
    }

    else
    for( ; ; )
        {
          swap=0;
          for(i=0;i<=8;i++)
          {
              if(a[i]<a[i+1])
               {
                 temp=a[i];
                 a[i]=a[i+1];
                 a[i+1]=temp;
                 swap=1;
               }
          }
         if(swap==0)
         break;
        }
            printf("descending= \n");
             for(i=0;i<=9;i++)
              {
                printf("%d",a[i]);
              }
}

