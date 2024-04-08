// wap to check given number is zero negative postive.
#include<stdio.h>
void main()
{
  int num;
  printf("enter a num : ");
  scanf("%d",&num);
  if(num==0)
  {
    printf("num is zero");
  } 
  else if(num>0)
  {
    printf("num is positive");
  } 
  else
  {
    printf("num is negative ");
  }
}