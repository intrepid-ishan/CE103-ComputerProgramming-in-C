#include <stdio.h>
void main()
{
    int row1,col1,row2,col2;

    printf("enter the row of first matrix= \n");
    scanf("%d",&row1);

    printf("enter the col of first matrix= \n");
    scanf("%d",&col1);

    printf("enter the row of second matrix= \n");
    scanf("%d",&row2);

    printf("enter the col of second matrix= \n");
    scanf("%d",&col2);

    int m1[row1][col1],m2[row2][col2],mul[row1][col2],i,j,k;
    mul[0][0]=0;

    printf("\n enter the first matrix=");

    for(i=0;i<row1;i++)
      {
         for(j=0;j<col1;j++)
         {
             scanf("%d",&m1[row1][col1]);
         }
      }

    for(i=0;i<row1;i++)
      {
         for(j=0;j<col2;j++)
         {
             for(k=0;k<col1;k++)
             {
                 mul[row1][col2]=mul[row1][col2] +m1[i][k]*m2[k][j];
             }
         }
      }

for(i=0;i<row1;i++)
      {
         for(j=0;j<col2;j++)
         {
             printf("%d",&m1[row1][col2]);
         }
      }

}
