#include<stdio.h>
#include<string.h>
void main()
{
  char str[10],orignal[10];
  int y;
  printf("enter the value of string:\n");
  scanf("%s",str);

  strrev(str);

  printf("reversed string is  ");
  printf("%s",str);
}
