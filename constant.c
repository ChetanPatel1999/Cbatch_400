//constant in c language
// wap to calculate area of circle.
// pi*r*r;
#include<stdio.h>
void main()
{
  const float pi=3.141;
  float radius,area;
  printf("enter radius of circle :");
  scanf("%f",&radius);
  area=pi*radius*radius;
  printf("area of circle : %.2f",area); 
}
