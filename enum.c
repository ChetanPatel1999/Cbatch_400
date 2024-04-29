#include<stdio.h>
enum day{mon,tue,wed=12,thur,fri,sat=65,sun};
enum status{working=1,notworkin=0} ;
void main()
{  
 printf("value of mon :%d\n",mon);
 printf("value of tue :%d\n",tue);
 printf("value of wed :%d\n",wed);
 printf("value of thur:%d\n",thur);
 printf("value of fri :%d\n",fri);
 printf("value of sat :%d\n",sat);
 printf("value of sun :%d\n",sun);
}