//local variable and global variable
#include<stdio.h>
int glob =15;// global varible
void fun()
{
 glob=89;	
}
void main()
{
 int a=12;// local variable
 a=90;	
 glob=67;	
}
