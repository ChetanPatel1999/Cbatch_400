//wap to display left dignoal of a matrixs and sum of left digonal.
#include<stdio.h>
void main()
{
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
    if(r==c)
    {
       printf("left digonal of matrix : "); 
     for(i=0;i<r;i++)
     {
        //02 11 20
        printf("%d ",mat[i][(r-1)-i]);
     }
    }
    else
    {
        printf("your matrix is not square matric");
    }
}
