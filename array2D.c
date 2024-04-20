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
}