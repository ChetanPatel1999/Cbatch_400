//use of continue statment 
#include<stdio.h>
void main()
{
    int i=0;
     while(i<=10)
     {
        i++;
        if(i==5)
        {
            continue;
        }
        printf("%d ",i);//1 2 3 4 6 ...11
        
     }
}
