#include<stdio.h>
// with return no argument
float add()
{
 float c,a,b;
 printf("enter two values :");
 scanf("%f%f",&a,&b);
 c=a+b;
 return c;
}
void main()
{
  float res;
  res=add();
  printf("sum = %.2f",res);
}