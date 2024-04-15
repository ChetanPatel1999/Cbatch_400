//wap to print 1to 10 number using g0to 
#include<stdio.h>
void main()
{
int i=1;
 lab:
 if(i%2==0)
 {
     printf("%d\n",i);
 }
 i++;
 if(i<=10)
 {
    goto lab;
 }
}