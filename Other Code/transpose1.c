#include<stdio.h>
void main()
{
    int i,j,a[3][3]={
                      {0,0,0},
                      {1,1,1},
                      {2,2,2},
                      },b[3][3];

    for(i=0;i<3;i++)
    {
      for(j=0;j<3;j++)
      {
         b[j][i]=a[i][j];
         printf("%d\t",b[j][i]);
      }
      printf("\n");
    }
}
