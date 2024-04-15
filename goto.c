//example of goto stmnt
//wap to print msg five times
#include<stdio.h>
void main()
{
int i=1;
 lab:
 printf("msg\n");
 i++;
 if(i<=5)
 {
    goto lab;
 }

}