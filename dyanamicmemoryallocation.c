
#include<stdio.h>
#include<stdlib.h>
void main()
{
 int i;
 int *temp;
 int *ptr=(int*)malloc(5*sizeof(int));
 temp=ptr;
 printf("enter array element :");
 for(i=0;i<5;i++)
 {
    scanf("%d",ptr);
    ptr++;
 }
 ptr=temp;
 printf("arr elemente are :");
 for(i=0;i<5;i++)
 {
    printf("%d ",*ptr);
    ptr++;
 }
   
}
