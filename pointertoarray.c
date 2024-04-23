
#include<stdio.h>
void main()
{
 int arr[5],i;
 //int *ptr=&arr[0];
 int *ptr=arr;
 printf("enter array element :");
 for(i=0;i<5;i++)
 {
    scanf("%d",ptr);
    ptr++;
 }
 ptr=arr;
 printf("arr elemente are :");
 for(i=0;i<5;i++)
 {
    printf("%d ",*ptr);
    ptr++;
 }
 
  
}
