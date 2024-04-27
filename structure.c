#include<stdio.h>
#include<string.h>
struct pen
{
 char name[12];
 int price;
 float rating;
};
void main()
{
  struct pen p1,p2,p3; 
  printf("size of pen type variable : %d\n",sizeof(p1));
  strcpy(p1.name,"cello");
  p1.price=5;
  p1.rating=3.5;
  printf("pen1 info : \n" );
  printf("name : %s\n",p1.name);
  printf("price : %d\n",p1.price);
  printf("ratiung : %.2f\n",p1.rating);
  strcpy(p2.name,"parker");
  p2.price=10;
  p2.rating=4.5;
  printf("\npen2 info : \n" );
  printf("name : %s\n",p2.name);
  printf("price : %d\n",p2.price);
  printf("ratiung : %.2f\n",p2.rating);
}