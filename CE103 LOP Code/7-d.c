#include<stdio.h>
#include<string.h>
void main()
{
char str[10],i,j,orignal[10],temp;

printf("enter the string: \n");
scanf("%s",str);

strcpy(orignal,str);

for(i=0,j=strlen(str)-1;i<j;i++,j--)
  {
   temp=str[j];
   str[j]=str[i];
   str[i]=temp;
  }

printf("%s",str);
}
