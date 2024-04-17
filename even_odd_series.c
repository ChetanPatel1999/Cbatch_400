#include<stdio.h>
void even_odd_series()
{
    int i;
    printf("even series: ");
    for(i=1;i<=20;i++)
    {
          if(i%2==0)
          {
            printf("%d ",i);
          }
    }
    printf("\nodd series: ");
    for(i=1;i<=20;i++)
    {
          if(i%2!=0)
          {
            printf("%d ",i);
          }
    }
}
void main()
{
 even_odd_series();
}