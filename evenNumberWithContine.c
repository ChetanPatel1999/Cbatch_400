//even numbre serise use of continue statment 
#include<stdio.h>
void main()
{
    int i=1;
     while(i<=20)
     {
        i++;//8
        if(i%2==1)
        {
            continue;
        }
        printf("%d ",i);  //2 4 6 8
     }
}
