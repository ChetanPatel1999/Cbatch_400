#include<stdio.h>
// with return with argument
int factorial(int num)//1
{
  static int fact=1;//run only once
  fact=fact*num;//120
  num--;//0
  if(num>0)
  {
    factorial(num);
  }

  return fact;
}
void main()
{
  int n;
  printf("enter a num : ");
  scanf("%d",&n);  
  printf("factorial of %d = %d",n,factorial(n));
}