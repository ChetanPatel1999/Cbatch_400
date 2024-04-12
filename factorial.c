//wap to print factorial of any given number.
#include<stdio.h>
void main()
{
    int num,fect=1;
    printf("enter a num :");
    scanf("%d",&num);//5
    while(num!=0)
    {
      fect=fect*num;//120
      num--;//0
    }
    printf("factorila = %d",fect);
}