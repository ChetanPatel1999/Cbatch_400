#include<stdio.h>
void main()
{
int num,a,b,ans;
do
{
  printf("welcome my calulater :\n");
  printf("press 1 for add :\n");
  printf("press 2 for sub :\n");
  printf("press 3 for mul :\n");
  printf("press 4 for div :\n");
  printf("press 5 for exit :\n");
  printf("press number  : ");
  scanf("%d",&num);
  switch(num)
  {
   case 1:
   printf("you choosed add :\n");
   printf("enter frist number :");
   scanf("%d",&a);
   printf("enter second number :");
   scanf("%d",&b);
   ans=a+b;
   printf("%d + %d = %d\n",a,b,ans);
   break;
   case 2:
   printf("you choosed sub :\n");
   printf("enter frist number :");
   scanf("%d",&a);
   printf("enter second number :");
   scanf("%d",&b);
   ans=a-b;
   printf("%d - %d = %d\n",a,b,ans);
   break;
   case 3:
   printf("you choosed mul :\n");
   printf("enter frist number :");
   scanf("%d",&a);
   printf("enter second number :");
   scanf("%d",&b);
   ans=a*b;
   printf("%d * %d = %d\n",a,b,ans);
   break;
   case 4:
   printf("you choosed div :\n");
   printf("enter frist number :");
   scanf("%d",&a);
   printf("enter second number :");
   scanf("%d",&b);
   ans=a/b;
   printf("%d / %d = %d\n",a,b,ans);
   break;
   case 5:break;
   default : printf("please press number 1 to 4\n");
  }
   
} 
while (num!=5);
  
  
}