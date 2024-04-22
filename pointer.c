//pointer= pointer is a special type variable.which store adress of another variable.
#include<stdio.h>
void main()
{
    int a=12,*ptr;
    ptr=&a;
    printf("value of a = %d\n",a);
    printf("address of a = %d\n",&a);
    printf("address of a by ptr = %d\n",ptr);
    printf("value of a by ptr= %d\n",*ptr);//12
}
