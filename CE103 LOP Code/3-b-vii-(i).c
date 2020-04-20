// Shared via Compiler App https://g633x.app.goo.gl/TPlw
#include<stdio.h>
void main()
{
	int a,b,temp;
	printf(" enter the two numbers \n first num: \n second num: ");
	scanf("%d %d %d",&a,&b);

	temp=b;
	b=a;
	a=temp;
	printf("\n swapped numbers are \n first num:%d \n second num:%d ",a,b);
}
