#include<stdio.h>
#include<string.h>
void main()
{
    char s1[]="chetan";
    char s2[]="chetan";
   // printf("string : %s\n",s1);
    //printf("string : %s\n",s2);
    // strupr(s);//its chamge all character uper case
    //strlwr(s);//its change all char in lower case 
    // strcpy(s2,"hi bro");//its copy "hi bro" into s2 
    // strcpy(s2,s1);//its copy s1 into s2 
   // strcat(s1,s2);// its combine s1 and s2 and assign in s1
    if(strcmp(s1,s2)== 0)
    {
        printf("both are same");
    }
    else{
          printf("both are diff ");
    }

    strrev(s1);
    printf("\nstring : %s",s1);

}