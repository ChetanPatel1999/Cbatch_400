//wap to print length of string.
// wap to print revers string
#include<stdio.h>
void main()
{
    char name[50];
    printf("enter a name :");
    gets(name);//chetan
    int i;
    for(i=0;name[i]!='\0';i++)
    {
    }
    printf("lenth of string = %d",i);
    printf("\nreverse string : ");
     for(i=i-1;i>=0;i--)
    {
        printf("%c",name[i]);
    }
  
}