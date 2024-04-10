#include<stdio.h>
void main()
{
    int num;
    float  kg,gram;
    printf("press 1 for weight : \n");
    printf("press 2 for indian currency : \n");
    printf("press 3 for days :  \n");
    printf("press 4 for  meter : \n");
    scanf("%d",&num);
    switch (num)
    {
        case 1:
        printf("enter a kilogram");
        scanf("%f",&kg);
        gram=kg*1000;
        printf("weight in gram = %.2f",gram);
        break;
        case 2:
        printf("enter currency in indian rs : ");
        scanf("%f",&kg);
        gram=kg/78;
        printf("currency in doller = %.2f",gram);
    }
    
}