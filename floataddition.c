#include<stdio.h>
void main()
{
	printf("addition programm : -\n");
	float num1,num2,sum;
	printf("enter frist number : ");
	scanf("%f",&num1);
	printf("enter second number : ");
	scanf("%f",&num2);
	printf("value of num1 = %.2f \n",num1);
	printf("value of num2 = %.2f \n",num2);
	sum=num1+num2;
	printf("sum of %.2f and %.2f = %.2f",num1,num2,sum);
	
}
