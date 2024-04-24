
#include<stdio.h>
#include<stdlib.h>
void main()
{
 int i,n,n1;
 printf("enter size of dayanamic arrry : ");
 scanf("%d",&n);
 int *temp;
 int *ptr=(int*)calloc(n,sizeof(int));
 temp=ptr;
 printf("arr address are :");
 for(i=0;i<n;i++)
 {
    printf("%d ",ptr);
    ptr++;
 }
 ptr=temp;
  printf("enter size of new incresing dayanamic arrry : ");
 scanf("%d",&n1);
  int *newptr=(int*)realloc(ptr,n1*sizeof(int));
  printf("newarr address are :");
  for(i=0;i<n1;i++)
  {
    printf("%d ",newptr);
    newptr++;
  }

 free(temp);
   
}
