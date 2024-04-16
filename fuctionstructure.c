// fuction in c
#include<stdio.h>
void add();// fuction declaration
void main()
{
 printf("hi i am main fuction\n");
 add();// fuction calling
 printf("end main fuction\n");
}
void add()// fuction defination
{
 int a,b,c;
 printf("enter two number : ");
 scanf("%d%d",&a,&b);
 c=a+b;
 printf("sum = %d\n",c);
}