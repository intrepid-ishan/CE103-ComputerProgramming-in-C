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



    printf("\n enter the first matrix=\n");

    for(i=0;i<row1;i++)
      {
         for(j=0;j<col1;j++)
         {
             scanf("%d",&m1[i][j]);
         }
      }
         printf("\n enter the second matrix=\n");

    for(i=0;i<row2;i++)
      {
         for(j=0;j<col2;j++)
         {
             scanf("%d",&m2[i][j]);
         }
      }

    for(i=0;i<row1;i++)
      {
         for(j=0;j<col2;j++)
         {
             mul[i][j]=0;
             for(k=0;k<col1;k++)
             {
                 mul[i][j]=mul[i][j] +m1[i][k]*m2[k][j];
             }
         }
      }

for(i=0;i<row1;i++)
      {
         for(j=0;j<col2;j++)
         {
             printf("%d\t",mul[i][j]);
         }
         printf("\n");
      }
}
