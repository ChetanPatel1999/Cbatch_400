// read a file using c program
//fputc()// its write on char
#include<stdio.h>
void main()
{
    FILE *pf;
    pf=fopen("abc.txt","w");
    fputc('A',pf);
    fputc('B',pf);
    fputc('C',pf);
    fclose(pf);
}