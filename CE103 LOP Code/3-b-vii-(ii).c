// Shared via Compiler App https://g633x.app.goo.gl/TPlw
#include<stdio.h>
void main()
{
	int a,b;
	printf(" enter the two numbers \n first num: \n second num: ");
	scanf("%d %d %d",&a,&b);

	b=a+b;
	a=b-a;
	b=b-a;
	printf("\n swapped numbers are \n first num:%d \n second num:%d ",a,b);
}
