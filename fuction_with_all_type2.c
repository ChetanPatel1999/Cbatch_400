#include<stdio.h>
// noretun type but with argument
void even(int num)// num=n
{
 if(num%2==0)
 {
    printf("num is even");
 }
 else{
    printf("num is odd");
 }
}
// with return with argument
int add(int a,int b,int d)
{
 int c;
 c=a+b+d;
 return c;
}
void main()
{
 int res,x=12,y=5,z=7;
 res=add(x,y,z);
 printf("sum = %d\n",res);
 printf("sum= %d",add(1,2,3));
 //int n=121;
 //even(n);
}