//wap to check given num is even-positive
// even-negative ,odd-positive, odd-negative.
#include<stdio.h>
void main()
{
    int num;
    printf("enter a num :");
    scanf("%d",&num);
    if(num%2==0)
    {
        //even
        if(num<0)  
        {
           printf("even - negative") ;
        } 
        else
        {
           printf("even - positive") ;   
        } 
    }
    else
    {
        //odd
         if(num<0)
         {
            printf("odd - negative");
         } 
         else
         {
            printf("odd - positive");      
         } 
    }
}