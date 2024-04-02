//Ternary operator
//wap to print greatest number btween three number. 
#include<stdio.h>
void main()
{
 int num1,num2,num3,ans;
 printf("enter two number : ");
 scanf("%d%d%d",&num1,&num2,&num3);
 //ans=num1>num2?num1:num2;
 //ans=ans>num3?ans:num3;
 //ans=num1>num2?(num1>num3?num1:num3):(num2>num3?num2:num3);
 ans=num1>num2 && num1>num3 ? num1 :(num2>num3 && num2>num1?num2:num3);
 printf("greatest number = %d",ans);	
}
