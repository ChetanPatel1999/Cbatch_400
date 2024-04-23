//if we increase pointer by one so its value increase by 4 
// if pointer type is integer.
#include<stdio.h>
void main()
{
    int a=12,*ptr;
    ptr=&a;
    printf("adress  of a = %d\n",&a);
    printf("value of  ptr= %d\n",ptr);
    //ptr++;
    ptr=ptr+1;
    printf("after increase by one value of  ptr= %d\n",ptr);
   
}
