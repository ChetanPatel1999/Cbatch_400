//use of break statment 
#include<stdio.h>
void main()
{
   int i=1;
   while(i<=10)
   {
    printf("%d ",i); //1 2 3 4 5 6
    if(i>5)
    {
      break;
    }
    i++;//6
   }
}
