#include<stdio.h>
void main()
{
    FILE *pf;
    char ch[]="this is my second sentence";
    pf=fopen("abc.txt","w");
    fprintf(pf,"this is my frist sentence");
    fprintf(pf,ch);
    fclose(pf);
}