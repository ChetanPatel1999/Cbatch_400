// wap to find greatest number btween  without using and operater..
#include<stdio.h>
void main()
{
  int num1,num2,num3;
  printf("enter three number : ");
  scanf("%d%d%d",&num1,&num2,&num3);//12 55 177
  if(num1>num2)
  {
    if(num1>num3)
    {
       
       printf("greatest = %d",num1); 
    }
    else{
        printf("greatest = %d",num3); 
    }
  }
  else
  {
      if(num2>num3)
      {
        printf("greatest = %d",num2); 
      }
      else
      {
        printf("greatest = %d",num3); 
      }
  }

}

 