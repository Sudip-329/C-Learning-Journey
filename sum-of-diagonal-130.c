#include<stdio.h>
int main()
{
    int A[10][10],uppersum=0,lowersum=0,i,j,row,col;

    printf("How many row and col?");
    scanf("%d %d",&row,&col);

    printf("Enter the values for A matrix :\n");
    for(i=0; i<row; i++)
    {
        for(j=0; j<col; j++)
        {
            printf("A[%d][%d]=",i,j);
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

    printf("\n");
    //sum of diagonal element
    for(i=0; i<row; i++)
    {
        for(j=0; j<col; j++)
        {
            if(i==j)
            sum = sum + A[i][j];
        }
    }
    printf("Sum of diogonal matrix = %d\n",sum);
    
}