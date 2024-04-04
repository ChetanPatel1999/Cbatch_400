//wap to display "good morning" if user enter 1
//display "good afternoon" if user enter 2
// display "good evening" if user enter 3
#include<stdio.h>
void main()
{
 int num;
 printf("enter a num :");
 scanf("%d",&num);
 if(num==1)
 {
 	printf("good morning\n");
 }
 if(num==2)
 {
 	printf("good after noon");
 }
 if(num==3)
   {
	 printf("good evening");
   }
 if(num>3)
  {
 	printf("wrong input please enter 1 or 2 or 3");
  }	
}
