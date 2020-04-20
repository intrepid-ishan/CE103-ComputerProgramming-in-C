// Shared via Compiler App https://g633x.app.goo.gl/TPlw
#include<stdio.h>
void main()
{
	int P,T;
	float R,S_I;
	printf("\n enter the principal amount \n enter rate of interest \n time  : ");
	scanf("%d %f %d",&P,&R,&T);

	S_I=P*R*T/100;


	printf("\n simple interest is : %f",S_I);


}
