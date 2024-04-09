//wap to print day name according to number using switch case.
#include<stdio.h>
void main()
{
  int num;
  printf("enter a num :");
  scanf("%d",&num);//2
  switch(num)
  {
    case 1:printf("monday");break;
    case 2:printf("tuesday");break;
    case 3:printf("wednusday");break;
    case 4:printf("thursday");break;
    case 5:printf("friday");break;
    case 6:printf("seturday");break;
    case 7:printf("sunday");break;
    default :printf("enter please number 1 to 7");
  }

}