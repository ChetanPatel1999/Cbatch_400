//recursion:-when a fuction call itself is called recurtion.
//wap to print a msg five times;
#include<stdio.h>
//int i=0;// global varible
void main()
{
    static int i=0;// its exicute only once time in a programm
    printf("ask me\n");
    i++;
    if(i<5)
    {
        main();//recursive calling
    }
} 