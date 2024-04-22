//wap to display right dignoal of a matrixs and sum of right digonal.
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
    // display right digonal
   /*/ printf("right digonal elemets : ");
    for (i=0;i<c;i++)
    {
        printf("%d ",mat[i][i]);
    }*/
     // display right digonal alternet way
    if(r==c)
    {
         int sum=0;
     printf("right digonal elemets :\n ");
    for(i=0;i<r;i++)//i=2
    {
       for(j=0;j<c;j++)
       {
        if(i==j)
        {
             printf("%d ",mat[i][j]);
             sum=sum+mat[i][j];
        }
        else
        {
            printf("  "); 
        }
       }
       printf("\n");
    } 
    printf("sum of digonal = %d",sum);
    }
    else
    {
        printf("your matrix is not square matric");
    }
}
