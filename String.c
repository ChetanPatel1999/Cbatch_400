//String in c language
#include<stdio.h>
void main()
{
    //char name[]={'c','h','e','t','\0'};
    char name[]="chetan patel";
    printf("name = %s\n",name);
    int i,count=0;
    for(i=0;name[i]!='\0';i++)
    {
        printf("%c",name[i]);
        if(name[i]=='a')
        {
            count++;
        }
    }
    printf("\ntotal \"a\" count = %d",count);
  
}