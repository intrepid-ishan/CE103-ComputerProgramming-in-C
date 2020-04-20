// Shared via Compiler App https://g633x.app.goo.gl/TPlw
#include<stdio.h>
#include<math.h> //bcoz we are using sqrt
void main()
{
	int a,b,d,c;
	float r1,r2;

printf("\n enter coeefficent of quadratic equation \n a \n b \n c : ");
scanf("%d %d %d", &a, &b, &c);

d=(b*b) - (4*a*c);
//three cases depending upon values of d
if(d>0)
    {
    	r1=(-b + sqrt(d))/(2*a);
    	r2=(-b - sqrt(d))/(2*a);
     printf("\n roots are distinct and real %f %f", r1, r2);
    }

if(d==0)
    {
    	r1=r2=-b/(2*a);
     printf("\n roots are equal: %f %f", r1, r2);
    }

if(d<0)
    {
     printf("\n roots are imaginary");
    }

}
