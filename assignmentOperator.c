#include<stdio.h>
void main()
{
	int a=12,b=5;
	//a=a+b;
	//a+=b;
	//printf("a = %d\nb = %d\n",a,b);
    //	a*=b;//a=a*b;
    //	printf("a = %d\nb = %d\n",a,b);
    //  b/=b;
    //  printf("a = %d\nb = %d\n",a,b);
    b%=a;
     printf("a = %d\nb = %d\n",a,b);//a=12,b=5
}
