// wap to print odd numbers between given range.
#include<stdio.h>
void main()
{
int s,e;
printf("enter start range : ");
scanf("%d",&s);
printf("enter ending range : ");
scanf("%d",&e);
int i;
printf("odd number between %d to %d : ",s,e);
for(i=s;i<=e;i++)
{
   if(i%2!=0)
   {
     printf("%d ",i);
   }
}
}