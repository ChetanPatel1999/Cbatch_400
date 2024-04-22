//we can change variable value by using a pointer.
#include<stdio.h>
void main()
{
    int a=12,*ptr;
    ptr=&a;
    printf("value of a = %d\n",a);
    *ptr=56;
    printf("value of a = %d\n",a);
}
