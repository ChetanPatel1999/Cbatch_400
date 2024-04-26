#include<stdio.h>
#include<string.h>
void main()
{
    char s[]="chetan patel";
    int l=strlen(s);//length of  string
    printf("string length = %d\n",l);
    int i;
    for(i=0; i<strlen(s);i++)
    {
      printf("%c",s[i]);  
    }
}