
#include<stdio.h>
#include<stdlib.h>
void main()
{
 int i,n;
 printf("enter size of dayanamic arrry : ");
 scanf("%d",&n);
 int *temp;
 int *ptr=(int*)calloc(n,sizeof(int));
 temp=ptr;
 printf("enter array element :");
 for(i=0;i<n;i++)
 {
    scanf("%d",ptr);
    ptr++;
 }
 ptr=temp;
 printf("arr elemente are :");
 for(i=0;i<n;i++)
 {
    printf("%d ",*ptr);
    ptr++;
 }
 ptr=temp;
 free(ptr);//after free memory of any pointer pinter become dangling ponter 
   
}
