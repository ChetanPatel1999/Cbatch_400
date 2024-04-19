#include<stdio.h>
void main()
{
   // int arr[]={12,34,56,78,90};
    int i,n;
    printf("enter array size :");
    scanf("%d",&n);
    int arr[n];
    printf("enter array element :\n");
    for(i=0;i<n;i++)
    {
     printf("enter array element pos %d :",i+1);   
     scanf("%d",&arr[i]);
    }
    printf("array element are :\n");
    for(i=0;i<n;i++)
    {
      printf("%d\n",arr[i]);
    }
    // arry element sum
    int sum=0;
    for(i=0;i<n;i++)
    {
      sum=sum+arr[i];
    }
    printf("array element sum = %d",sum);   
}