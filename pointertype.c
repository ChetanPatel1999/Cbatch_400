//pointer type
//wild pointer
//NUll pointer
//dangling pointer
// double pointer
#include<stdio.h>
void main()
{
    int b=89;
    int *ptr;//wild pointer
    int *ptr1=NULL;// null pointer
    int a=56;
    if(ptr1==NULL)
    {
     ptr1=&a;
    }
    printf("value of a = %d\n",*ptr1);
  
}
