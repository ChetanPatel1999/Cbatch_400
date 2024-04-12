#include<stdio.h>
void main()
{
    int i=1,n,n1;
    printf("enter num for frist msg : ");
    scanf("%d",&n);
     printf("enter num for second msg: ");
    scanf("%d",&n1);
    while(i<=n)
    {
        printf("frist msg\n");
        i++;
    }
    i=1;
     while(i<=n1)
    {
        printf("second msg\n");
        i++;
    }
}