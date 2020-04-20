// Shared via Compiler App https://g633x.app.goo.gl/TPlw
#include<stdio.h>
void main()
{
	int a,a1,a2,a3;
	printf(" \n enter the three digit number:  ");
	scanf("%d",&a);

	a1=a/100;
	a2=a/10 - a1*10;
	a3=a - a1*100 -a2*10;

	printf("\n first num:%d \n sec num:%d \n third num:%d",a1,a2,a3);
}
