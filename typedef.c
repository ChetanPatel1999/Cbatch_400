#include<stdio.h>
#define  pf printf // macros 
struct pen_of_cello_12_5_2024
{
 char name[12];
 int price;
 float rating;
};
typedef int i;
typedef long long int lli;
typedef double db;
typedef char cr;
typedef struct pen_of_cello_12_5_2024 pc24;
void main()
{
 pc24 p1,p2;   
 i  a;
 db b;
 cr c;
 lli d;
 pf("size of pen : %d\n",sizeof(p1));
 pf("size of int : %d\n",sizeof(a));
 pf("size of double : %d\n",sizeof(b)); 
 pf("size of char : %d\n",sizeof(c)); 
 pf("size of long long int : %d\n",sizeof(d));  
}