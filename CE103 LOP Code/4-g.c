// Shared via Compiler App https://g633x.app.goo.gl/TPlw
#include<stdio.h>
void main()
{
	int marks,n;
	printf("\n enter marks :");
	scanf(" %d", &marks);

	 if(marks>90&&marks<=100)
	   {
	   	n=1;
	   }

	 if(marks>80&&marks<=90)
	   {
	   	n=2;
	   }

	 if(marks>70&&marks<=80)
	   {
	   	n=3;
	   }

	 if(marks>60&&marks<=70)
	   {
	   	n=4;
	   }
	 if(marks>50&&marks<=60)
	   {
	   	n=5;
	   }

	 if(marks>40&&marks<=50)
	   {
	   	n=6;
	   }
	 if(marks==40)
	   {
	   	n=7;
	   }
	 if(marks<40)
	   {
	   	n=8;
	    }

switch(n)
{
case 1 :
	        printf("\n A+");
	        break;
case 2 :
	        printf("\n A");
	        break;
case 3 :
	        printf("\n B+");
	        break;
case 4 :
	        printf("\n B");
	        break;
case 5 :
	        printf("\n C+");
	        break;
case 6 :
	        printf("\n C");
	        break;
case 7 :
	        printf("\n D");
	        break;
case 8 :
	        printf("\n F");
	        break;
}


}
