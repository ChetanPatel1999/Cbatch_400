// wap to find greatest number btween three number.
#include<stdio.h>
void main()
{
  int num1,num2,num3;
  printf("enter three number : ");
  scanf("%d%d%d",&num1,&num2,&num3);
  if(num1>num2 && num1>num3)
  {
    printf("greatest number = %d",num1);
  }
  else if(num2>num1 && num2>num3)
  {
    printf("greatest number = %d",num2);
  }
  else
  {
    printf("greatest number = %d",num3);
  }

 
}