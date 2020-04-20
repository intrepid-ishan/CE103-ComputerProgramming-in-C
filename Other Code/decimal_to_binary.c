#include<stdio.h>   // 2-3 things to be done to convert the decimal into binary
void main()         // 1) to find reminder 2)to store it 3)then divide the number by 2
{                   // check the above process by taking example of 46
int n,i,rem,binary[20],j;
printf("enter the value of decimal which is to be converted in binary:");
scanf("%d",&n);

for(i=0;n>0;i++)
{
    rem=n%2;
    binary[i]=rem; //array is to be taken to store multiple reminder
    n=n/2;
}

for(j=i-1;j>=0;j--)
{
    printf("%d",binary[j]);
}

}
                    //after storing the reminder we need to reverse it by taking another for loop and ------in this for loop take j=i-1 bcoz the value of i will be example:6

