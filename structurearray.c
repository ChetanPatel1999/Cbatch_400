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
  struct pen p1[3];
  int i; 
  for(i=0;i<3;i++)
  {
   printf("enter pen%d info :\n",i+1);
   printf("enter name of pen :");
   scanf("%s",p1[i].name);
   printf("enter price of pen :");
   scanf("%d",&p1[i].price);
   printf("enter rating of pen :");
   scanf("%f",&p1[i].rating);
  }
  for(i=0;i<3;i++)
  {
    printf("pen%d info : \n",i+1);
    printf("name : %s\n",p1[i].name);
    printf("price : %d\n",p1[i].price);
    printf("ratiung : %.2f\n",p1[i].rating);
  }
}