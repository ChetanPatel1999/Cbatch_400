// fuction in c
#include<stdio.h>
void fun1();
void fun2();
void fun3();
void fun1()
{
  fun2();
  printf("hi i am fucn1\n");
}
void fun2()
{
  fun3();
  printf("hi i am fucn2\n");
}
void fun3()
{
  printf("hi i am fucn3\n");
}
void main()
{
 printf("hi i am main\n");
  fun1();
}
