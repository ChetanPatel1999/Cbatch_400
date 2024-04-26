#include<stdio.h>
#include<string.h>
struct pen
{
 char name[15];
 int price;
 float rating;
};
void main()
{
  struct pen p1,p2,p3; 
  strcpy(p1.name,"cello");
  p1.price=5;
  p1.rating=3.5;
  printf("pen info : \n" );
  printf("name : %s\n",p1.name);
  printf("price : %d\n",p1.price);
  printf("ratiung : %.2f\n",p1.rating);
}