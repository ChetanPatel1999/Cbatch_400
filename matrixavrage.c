#include<stdio.h>
void main()
{
  //  int mat[3][3]={{12,34,56},{44,55,66},{11,22,33}};
    int r,c;
    printf("enter matrix row : ");
    scanf("%d",&r);
    printf("enter matrix column : ");
    scanf("%d",&c);
    int mat[r][c];
    int i,j;
    printf("enter matrix element :\n");
     for(i=0;i<r;i++)//i=3
    {
       for(j=0;j<c;j++)
       {
         printf("enter element matrix pos mat[%d][%d] :",i+1,j+1);
         scanf("%d",&mat[i][j]);
       }
    }
    printf("matrix element are : \n");
    for(i=0;i<r;i++)//i=2
    {
       for(j=0;j<c;j++)
       {
         printf("%d ",mat[i][j]);
       }
       printf("\n");
    }
    // avrage of matrix
    int sum=0;
    float avrage;
    for(i=0;i<r;i++)
    {
       for(j=0;j<c;j++)
       {
         sum=sum+mat[i][j];
       }
       
    }
    printf("sum of matrix elemet : %d\n",sum);
    avrage=(float)sum/(r*c);
    printf("avrage of matrix elemet : %.2f\n",avrage)2
    ;
}