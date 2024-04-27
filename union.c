#include<stdio.h>
#include<string.h>
union pen
{
 char name[8];
 int price;
 float rating;
};
void main()
{
  union pen p1;
  int i; 
   printf("size of union : %d\n",sizeof(p1));
   printf("enter pen1 info :\n");
   printf("enter name of pen :");
   scanf("%s",p1.name);
   printf("enter price of pen :");
   scanf("%d",&p1.price);
   printf("enter rating of pen :");
   scanf("%f",&p1.rating);
  
  
    printf("pen1 info : \n");
    printf("name : %s\n",p1.name);
    printf("price : %d\n",p1.price);
    printf("ratiung : %.2f\n",p1.rating);

}