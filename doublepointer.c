
// double pointer
#include<stdio.h>
void main()
{
    int a=12;
    int *ptr,**dp;
    ptr=&a;
    dp=&ptr;
    printf("%d %d %d %d %d %d %d %d",a,&a,ptr,*ptr,&ptr,dp,*dp,**dp);
  
}
