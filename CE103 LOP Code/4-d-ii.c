// Shared via Compiler App https://g633x.app.goo.gl/TPlw
#include<stdio.h>
void main()
{
	int a,b,c,n;

printf("\n enter three different values: ");
scanf("%d %d %d",&a,&b,&c);

if(a>b&&a>c)
    {
     n=1;
    }

if(b>a&&b>c)
    {
     n=2;//if here the value gets printed the it will not come in use in switch statement i.e here it is assigned
    }

if(c>b&&c>a)
    {
     n=3;
    }

switch(n)
{
case 1:
printf("\n a is greater"); break;

case 2:
printf("\n b is greater"); break;

case 3:
printf("\n c is greater"); break;
}

}