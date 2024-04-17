#include<stdio.h>
// with return with argument
int factorial(int num)//5
{
 int fact=1;
  while(num!=0)
  {
    fact=fact*num;// 120
    num--;//0
  }
  return fact;
}
void main()
{
 printf("factorial of 5 = %d",factorial(5));
}