#include<stdio.h>
void main()
{
  //  int mat[3][3]={{12,34,56},{44,55,66},{11,22,33}};
    int r,c;
    printf("enter matrix row : ");
    scanf("%d",&r);
    printf("enter matrix column : ");
    scanf("%d",&c);
    int mat1[r][c],mat2[r][c],summat[r][c];
    int i,j;
    printf("enter matrix1 element :\n");
     for(i=0;i<r;i++)//i=3
    {
       for(j=0;j<c;j++)
       {
         printf("enter element matrix1 pos mat[%d][%d] :",i+1,j+1);
         scanf("%d",&mat1[i][j]);
       }
    }
      printf("enter matrix2 element :\n");
     for(i=0;i<r;i++)//i=3
    {
       for(j=0;j<c;j++)
       {
         printf("enter element matrix2 pos mat[%d][%d] :",i+1,j+1);
         scanf("%d",&mat2[i][j]);
       }
    }
    printf("matrix1 element are : \n");
    for(i=0;i<r;i++)//i=2
    {
       for(j=0;j<c;j++)
       {
         printf("%d ",mat1[i][j]);
       }
       printf("\n");
    }
     printf("\nmatrix2 element are : \n");
    for(i=0;i<r;i++)//i=2
    {
       for(j=0;j<c;j++)
       {
         printf("%d ",mat2[i][j]);
       }
       printf("\n");
    }
    // sum of two matrix
     for(i=0;i<r;i++)//i=2
    {
       for(j=0;j<c;j++)
       {
        summat[i][j]=mat1[i][j]+mat2[i][j];
       }
      
    }
    printf("\nsummatrix element are : \n");
    for(i=0;i<r;i++)//i=2
    {
       for(j=0;j<c;j++)
       {
         printf("%d ",summat[i][j]);
       }
       printf("\n");
    }
    
    
}