// Shared via Compiler App https://g633x.app.goo.gl/TPlw
#include<stdio.h>
void main()
{
	float gross_salary,hra,da,basic;
	printf("\n enter the basic salary ");
	scanf("%f",&basic);

	hra=basic*.09;
	da=basic*.06;
	gross_salary=basic+hra+da;

	printf("\n the value of gross salary is : %f", gross_salary);

}
