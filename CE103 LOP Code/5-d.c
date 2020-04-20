#include<stdio.h>
void main()
{
int sp,line,j,n;

printf("enter the value of n =\n");
scanf("%d", &n);

for(line=1;line<=n;line++)
     {
     	for(sp=1;sp<=n-line;sp++)
     	  {
     	  	printf(" ");
     	  }

      for(j=1;j<=line;j++)
        {
         printf("%d", j);
        }

      for(j=line-1;j>0;j--)
        {
        	printf("%d", j);
        }

      printf("\n");
     }


}

