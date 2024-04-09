//wap to check given char is vovel or consonenet.
#include<stdio.h>
void main()
{
  char ch;
  printf("enter a char:");
  scanf("%c",&ch);//2
  switch(ch)
  {
    case 'a':printf("vovel");break;
    case 'e':printf("vovel");break;
    case 'i':printf("vovel");break;
    case 'o':printf("vovel");break;
    case 'u':printf("vovel");break;
    default :printf("consonenet");
  }
}