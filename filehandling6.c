// read a file using c program
//fputs()// its write inside file
#include<stdio.h>
void main()
{
    FILE *pf;
    char ch[50];
    pf=fopen("abc.txt","w");
    fputs("this sentence write in file using fputs fuction",pf);
    fclose(pf);
    pf=fopen("abc.txt","r");
    fgets(ch,50,pf);
    printf("%s",ch);
    fclose(pf);
}