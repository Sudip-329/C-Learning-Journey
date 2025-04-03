#include<stdio.h>
int main()
{
   int A[10][10],transpose[10][10],i,j,row,col;

   printf("Enter the no of rows and cols of the matrix : ");
   scanf("%d %d",&row,&col);

   printf("Enter the values for A matrix :\n");
   for(i=0; i<row; i++)
   {
       for(j=0; j<col; j++)
       {
           printf("A[%d][%d] = ",i,j);
           scanf("%d",&A[i][j]);
       }
   }

    printf("\nEntered Matrix\n");
    for(i=0; i<row; i++)
    {
        for(j=0; j<col; j++)
        {
            printf("%d ",A[i][j]);
        }
        printf("\n");
    }

    // doing transepose matrix
    for(i=0; i<row; i++)
    {
        for(j=0; j<col; j++)
        {
            transpose [j][i] = A[i][j];
        }
    }

    //printing the result
    printf("\nTransepose Matrix\n");
    for(i=0; i<col; i++)
    {
        for(j=0; j<row; j++)
        {
            printf("%d ",transpose[i][j]);
        }
        printf("\n"); 
    }

}