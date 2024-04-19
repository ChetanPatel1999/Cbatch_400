#include<stdio.h>
void main()
{
   int arr[10],i;
   printf("size of arr = %d\n",sizeof(arr));
   for(i=0;i<10;i++)
   {
    printf("%d\n",&arr[i]);
   }    
}