//wap to check voter is eligible for casting vote or not.
#include<stdio.h>
void main()
{
 int age;
 printf("enter age :");
 scanf("%d",&age);
 if(age>=18)
 {
 	printf("voter is eligible for cast vote");
 }
 else
 {
  printf("voter is not eligible for cast vote");	
 }
}
