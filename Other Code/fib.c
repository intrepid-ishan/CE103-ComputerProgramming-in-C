#include <stdio.h>
void main()
{
 int n,x=0,y=1,i,next_term;
 printf("enter the value of upto fibonacci is to be printed :\n");
 scanf("%d",&n);

 printf("series is :\n");
 printf("%d %d\t", x,y);

 for(i=0;i<n-2;i++)
 {
     next_term=x+y;
     x=y;
     y=next_term;
     printf("%d\t",y);
 }
}
