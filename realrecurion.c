#include<stdio.h>
// with return with argument
int factorial(int num)//5
{
 if(num==0)
 {
 return 1;
 }
 return num*factorial(num-1);
}
void main()
{
  int n;
  printf("enter a num : ");
  scanf("%d",&n);  
  printf("factorial of %d = %d",n,factorial(n));
}