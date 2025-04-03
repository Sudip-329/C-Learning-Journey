#include<stdio.h>
int main()
{
    int A[10][10],B[10][10],C[10][10];
    int i,j,numberofrows,numberofcolumns;

    printf("Enter the number of rows and column : ");
    scanf("%d %d", &numberofrows,&numberofcolumns);
    
    //taking values
    printf("Enter A matrix values:\n");
    for(i=0; i<numberofrows; i++)
    {
        for(j=0; j<numberofcolumns; j++)
        {
            printf("A[%d][%d] = ",i,j);
            scanf("%d",&A[i][j]);
        }
        printf("\n");
    }

    //printing a matrix
    printf("A = ");
    for(i=0; i<numberofrows; i++)
    {
        printf("\t");
        for(j=0; j<numberofcolumns; j++)
        {
            printf("%d ",A[i][j]);
        }
        printf("\n");
    }

    //taking b values
    printf("Enter B matrix values:\n");
    for(i=0; i<numberofrows; i++)
    {
       for(j=0; j<numberofcolumns; j++)
        {
            printf("B[%d][%d] = ",i,j);
            scanf("%d",&B[i][j]);
        }
        printf("\n");
    }
    
    //printing b matrix
    printf("B = ");
    for(i=0; i<numberofrows; i++)
    {
        printf("\t");
        for(j=0; j<numberofcolumns; j++)
        {
            printf("%d ",B[i][j]);
        }
        printf("\n");
    }
    
    //doing the addition
    for(i=0; i<numberofrows; i++)
    {
        for(j=0; j<numberofcolumns; j++)
        {
           C[i][j] = A[i][j] + B[i][j];
        }
        printf("\n");
    }
    
    //printing the result
    printf("\nA + B = ");
    for(i=0; i<numberofrows; i++)
    {
        for(j=0; j<numberofcolumns; j++)
        {
            printf("%d ",C[i][j]);
        }
        printf("\n");
        printf("\t");
    }
    
}