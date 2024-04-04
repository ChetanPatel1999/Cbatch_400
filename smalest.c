//wap to print smallest nuber btween two number
#include<stdio.h>
void main()
{
int num1,num2;
printf("enter two number : ");
scanf("%d%d",&num1,&num2);//12 55
if(num1<num2)
{
 printf("smallest number : %d",num1);
}
else
{
  printf("smallest number : %d",num2);
}
}