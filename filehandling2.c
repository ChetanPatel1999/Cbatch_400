#include<stdio.h>
void main()
{
    int n,fact=1,i;
    FILE *ptr;
    ptr=fopen("facto.txt","a");//its append new data
    printf("enter a number :");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        fact=fact*i;
    }
    printf("factrorial of %d = %d",n,fact);
    fprintf(ptr,"factrorial of %d = %d\n",n,fact);
    fclose(ptr);
}