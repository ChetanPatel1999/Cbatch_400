// wap to print numbers between given range.
#include<stdio.h>
void main()
{
int s,e;
printf("enter start range : ");
scanf("%d",&s);
printf("enter ending range : ");
scanf("%d",&e);
int i;
printf("number between %d to %d : ",s,e);
for(i=s;i<=e;i++)
{
    printf("%d ",i);
}
}
