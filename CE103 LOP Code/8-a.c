#include <stdio.h>

struct emp
{
 char ename[20];
 int id;
 float basic_salary,total_salary;
}e1,e2,e3;          //if array then do e[3] and in scanf do e[i].name/id/basic_salary using for loop and print it using for loop
void main()

{
int n;

printf("enter the name of first emp: \n ");
scanf("%s",e1.ename);
printf("enter the id of first emp:\n");
scanf("%d",&e1.id);
printf("emter the basic salary of first emp:\n");
scanf("%f",&e1.basic_salary);
e1.total_salary=e1.basic_salary+e1.basic_salary*(0.3)+e1.basic_salary*(0.2);

printf("enter the name of second emp: \n ");
scanf("%s",e2.ename);
printf("enter the id of second emp:\n");
scanf("%d",&e2.id);
printf("emter the basic salary of second emp:\n");
scanf("%f",&e2.basic_salary);
e2.total_salary=e2.basic_salary+e2.basic_salary*(0.3)+e2.basic_salary*(0.2);

printf("enter the name of third emp: \n ");
scanf("%s",e3.ename);
printf("enter the id of third emp:\n");
scanf("%d",&e3.id);
printf("emter the basic salary of third emp:\n");
scanf("%f",&e3.basic_salary);
e3.total_salary=e3.basic_salary+e3.basic_salary*(0.3)+e3.basic_salary*(0.2);


printf("\ntotal salary of first emp is:%f\n",e1.total_salary);
printf("\ntotal salary of first emp is:%f\n",e2.total_salary);
printf("\ntotal salary of first emp is:%f\n",e3.total_salary);

/*to find the greater of all the salary*/
if(e1.total_salary>e2.total_salary)
{
      if(e1.total_salary>e3.total_salary)
      {
        printf("\ntotal salary of 1st emp is greater");
      }
}

if(e2.total_salary>e1.total_salary)
{
      if(e2.total_salary>e3.total_salary)
      {
        printf("\ntotal salary of 2nd emp is greater");
      }
}

if(e3.total_salary>e1.total_salary)
{
      if(e3.total_salary>e2.total_salary)
      {
        printf("\ntotal salary of 3rd emp is greater\n\n");
      }
}
 /*now acording to users choice printf the entered details*/
 printf("\n enter 1 if u want the details of first emp:\n  enter 2 if u want the details of second emp:\n enter 3 if u want the details of third emp:\n\n\n");
 scanf("%d",&n);


 if(n==1)
 {
   printf("id is %d\n",e1.id);
   printf("name is %s\n",e1.ename);
   printf("basic salary is %f\n",e1.basic_salary);
   printf("total salary is %f\n",e1.total_salary);
 }

 if(n==2)
 {
   printf("id is %d\n",e2.id);
   printf("name is %s\n",e2.ename);
   printf("basic salary is %f\n",e2.basic_salary);
   printf("total salary is %f\n",e2.total_salary);
 }

 if(n==3)
 {
   printf("id is %d\n",e3.id);
   printf("name is %s\n",e3.ename);
   printf("basic salary is %f\n",e3.basic_salary);
   printf("total salary is %f\n",e3.total_salary);
 }


}
