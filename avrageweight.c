//Write a  program that accepts two item's weight and number of purchases and calculates their Weight average value.
#include<stdio.h>
void main()
{
    float w1,w2,avrage;
    int n1,n2;
    printf("enter w1 : ");
    scanf("%f",&w1);
    printf("enter item count for w1 : ");
    scanf("%d",&n1);
    printf("enter w2 : ");
    scanf("%f",&w2);
    printf("enter item count for w2 : ");
    scanf("%d",&n2);
    avrage=((w1*n1)+(w2*n2))/(n1+n2);
    printf("avrage weight = %.2f",avrage);
}