#include<stdio.h>
#include<string.h>
void main()
{
  char str[10];
  int cipher_key,y,i;

  printf("enter the string which is to be encrypted:\n");
  scanf("%s",str);

  printf("enter the cipher key:\n");
  scanf("%d",&cipher_key);

  y=strlen(str);

  for(i=0;i<=y-1;i++)
  {
     str[i]=str[i] + cipher_key;
  }

 // for(i=0;i<=y-1;i++)
  {
     printf("encrypted string is %s \n",str);
  }
}
