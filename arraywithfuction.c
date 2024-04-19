#include<stdio.h>
int arrsum(int a[],int size)//a=arr,size=n
{
 int sum=0,i;
  for(i=0;i<size;i++)
  {
    sum=sum+a[i];
  }
 return sum;
}
int maxval(int a[],int size)
{
    // 12 34 567 89 99
    int max=a[0],i;//567
    for(i=0;i<size;i++)
    {
        if(max<a[i])
        {
            max=a[i];
        }
    }
    return max;
}
void main()
{
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

    int res=arrsum(arr,n); 
    printf("sum of array element =%d ",res); 
    res=maxval(arr,n);
    printf("\nmax value = %d",res);

}