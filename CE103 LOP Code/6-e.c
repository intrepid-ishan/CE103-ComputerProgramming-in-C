#include <stdio.h>
void main()
{
    int a[3][3],flag=0,i,j;


    printf("enter the 9 values of matrix = \n");
    for(i=0;i<3;i++)
      {
        for(j=0;j<3;j++)
        {
            scanf("%d",&a[i][j]);
        }
      }

for(i=0;i<3;i++)
      {
        for(j=0;j<3;j++)
        {
            if(a[i][j] != a[j][i])
            {
               flag=flag +1;
               break;
            }
        }
      }

if(flag==1)
{
    printf("matrix is not symmetric");
}

else
{
    printf("matrix is symmetric");
}


}
