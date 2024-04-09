//wap to check given number is even or odd.
#include<stdio.h>
void main()
{
  int ch;
  printf("enter a number:");
  scanf("%d",&ch);//2
  switch(ch%2==0)
  {
    case 1:printf("even");break;
    case 0:printf("odd number");break;
  }
}