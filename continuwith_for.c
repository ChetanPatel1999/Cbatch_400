//use of continue statment 
#include<stdio.h>
void main()
{
    int i;
    for(i=1;i<=10;i++)
    {
        if(i==5)
        {
            continue;
        }
        printf("%d ",i);//1 2 3 4 6 7 8 9 10 
    }
}
