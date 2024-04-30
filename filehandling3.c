// read a file using c program
#include<stdio.h>
void main()
{
    FILE *pf;
    char ch[15];
    pf=fopen("abc.txt","r");
    while(1)
    {
     if(fscanf(pf,"%s",ch)==EOF)
     {
        break;
     }
     printf("%s ",ch);
    }
    
    fclose(pf);
}