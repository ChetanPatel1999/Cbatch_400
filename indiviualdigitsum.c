//wap to print sum of indiviul  digit of  3 digit number.
#include<stdio.h>
void main()
{
 int num,r,s,t,sum;
 printf("enter a num :");
 scanf("%d",&num);
 r=num/100;
 s=(num/10)%10;
 t=num%10;
 sum=r+s+t;
 printf("sum of individula digit : %d",sum);

}