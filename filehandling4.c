// read a file using c program
//fgetc()// its read on char
#include<stdio.h>
void main()
{
    FILE *pf;
    char ch;
    pf=fopen("filehandling4.c","r");
   // fseek( pf,30,SEEK_SET);// its set pointer desired position  
    while(1)
    {
        ch=fgetc(pf);
        if(ch==EOF)
        break;
        printf("%c",ch);
    }
   // fseek(pf,0,SEEK_SET);
    int n=ftell(pf);// its return current position of pointer
    printf("\npointer position : %d \n",n);
    rewind(pf);// its set pointer at the begning
    n=ftell(pf);
    printf("pointer position : %d \n",n);
      while(1)
    {
        ch=fgetc(pf);
        if(ch==EOF)
        break;
        printf("%c",ch);
    }
    fclose(pf);
}