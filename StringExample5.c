//String in c language
#include<stdio.h>
void main()
{
    char name[15];
    printf("enter a name :");
    fgets(name,15,stdin);// its take string from keybord
    fputs(name,stdout);// its display on consol screen
   // printf("name = %s\n",name);
  
}