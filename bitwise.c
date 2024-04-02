#include<stdio.h>
void main()
{
	int a=12,b=3;
	int ans;
	ans=a & b;
	printf("a & b = %d\n",ans);
		ans=a | b;
	printf("a | b = %d\n",ans);
	ans=a ^ b;
	printf("a ^ b = %d\n",ans);
	ans=a<< b;
	printf("a << b = %d\n",ans);
	ans=a>> b;
	printf("a >> b = %d\n",ans);
	ans=~a;
	printf("~ a = %d",ans);
}
