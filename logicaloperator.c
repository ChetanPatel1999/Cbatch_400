//logical operator 
#include<stdio.h>
void main()
{
	int ans;
	ans=12>6 && 6<9 && !(18==12);
    //ans=12>66 || 66<9 || 18==12;
    //ans=!(34%5==0);
	printf("ans = %d",ans);
}
