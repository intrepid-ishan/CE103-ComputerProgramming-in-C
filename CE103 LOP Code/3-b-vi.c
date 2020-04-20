// Shared via Compiler App https://g633x.app.goo.gl/TPlw
#include<stdio.h>
void main()
{
	float r,l,b,ar,ac,pc,pr;
	printf("\n enter the radius  \n length \n breadth : ");
	scanf("%f %f %f",&r,&l,&b);

	ar=l*b;
	ac=3.14*r*r;
	pr=2*(l+b);
	pc=2*3.14*r;


	printf("\n area of circle:%f \n area of rectangle:%f \n perimeter of rectangle:%f \n perimter of circle:%f",ac,ar,pr,pc);


}
