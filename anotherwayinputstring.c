//String in c language
#include<stdio.h>
void main()
{
    char name[50];
    printf("enter a name :");
    //scanf("%s",name);//sigle word
    scanf("%[^\n]s",name);//multiple word
    printf("name = %s\n",name);
  
}