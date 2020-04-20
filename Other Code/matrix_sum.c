#include<stdio.h>

void main()
{
    int n,a[10][10],b[10][10],c[10][10],i,j;

    printf(" \n enter the value of n for n*n= ");
    scanf("%d", &n);

    printf("enter diff values of first matrix according to row and coulumn  = ");
    for(i=0;i<n;i++)
      {
          for(j=0;j<n;j++)
           {
               scanf("%d",&a[i][j]);
           }
      }

    printf("enter diff values of second matrix according to row and coulumn  = ");
    for(i=0;i<n;i++)
      {
          for(j=0;j<n;j++)
           {
               scanf("%d",&b[i][j]);
           }
      }

    printf("\n sum of both matrix is\n");
    for(i=0;i<n;i++)
      {
          for(j=0;j<n;j++)
           {
               c[i][j]=a[i][j]+b[i][j];
               printf("%d\t",c[i][j]);
           }
           printf("\n");
      }
}
