// Shared via Compiler App https://g633x.app.goo.gl/TPlw
#include<stdio.h>
void main()
{
	int a,b,c;

printf("\n enter three integer,seprated by spaces: ");
scanf("%d %d %d", &a, &b, &c);//seprated by spaces

if(a>b&&a>c)
    {
     printf("\n a is greater");
    }

else if(b>a&&b>c)
    {
     printf("\n b is greater");
    }

else if(c>b&&c>a)
    {
     printf("\n c is greater");
    }

}
