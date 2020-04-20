// Shared via Compiler App https://g633x.app.goo.gl/TPlw
#include<stdio.h>
void main()
{
	int a,b,c,max;
	printf("\n enter the different three numbers : ");
	scanf("%d %d %d",&a,&b,&c);

	max=(a>b)?((a>c)?a:c):((b>c)?b:c);

	printf("\n max value is : %d",max);


}
