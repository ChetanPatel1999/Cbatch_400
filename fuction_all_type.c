#include<stdio.h>
// no return type no argument
/*void add()
{
 int a,b,c;
 printf("enter two number : ");
 scanf("%d%d",&a,&b);
 c=a+b;
 printf("sum = %d\n",c);
}*/
// no return type but with argument
void add(int a,int b,int d)
{
 int c;
 c=a+b+d;
 printf("sum = %d\n",c);
}
void main()
{
 int x=4,y=6,z=5;
 add(x,y,z);
 //add(12,8,9);
}