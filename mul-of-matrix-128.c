#include<stdio.h>
int main()
{
    int first[10][10],second[10][10],result[10][10],r1,r2,c1,c2,i,j,k,sum=0;

    printf("How many rows and columns for first matrix : ");
    scanf("%d %d",&r1,&c1);

    printf("How many rows and columns for second matrix : ");
    scanf("%d %d",&r2,&c2);

    while(c1!=r2)
    {
        printf("Error !! Column of first matrix not equal to second matrix ");

        printf("How many rows and columns for first matrix : ");
        scanf("%d %d",&r1,&c1);

        printf("How many rows and columns for second matrix : ");
        scanf("%d %d",&r2,&c2);
    }

    //taking input for first matrix
    printf("\nEnter values for first matrix : ");
    for(i=0; i<r1; i++)
    {
        for(j=0; j<c1; j++)
        {
            printf("First Matrix [%d][%d] = ",i,j);
            scanf("%d",&first[i][j]);
        }
    }

    //taking input for second matrix
    printf("\nEnter values for second matrix : ");
    for(i=0; i<r2; i++)
    {
        for(j=0; j<c2; j++)
        {
            printf("Second Matrix [%d][%d] = ",i,j);
            scanf("%d",&second[i][j]);
        }
    }

    //printing first matrix
    printf("\n\nFirst Matrix =\n");
    for(i=0; i<r1; i++)
    {
        printf("\t");
        for(j=0; j<c1; j++)
            printf("%d ",first[i][j]);
        printf("\n");    
    }
    
    //printing second matrix
    printf("\n\nSecond Matrix =\n");
    for(i=0; i<r2; i++)
    {
        printf("\t");
        for(j=0; j<c2; j++)
            printf("%d ",second[i][j]);
        printf("\n");
    }

    //multiplying two matrix
    for(i=0; i<r1; i++)
    {
        for(j=0; j<c2; j++)
        {
            for(k=0; k<c1; k++)
            {
                sum = sum + first[i][k] * second[k][j];
            }
            result[i][j] = sum;
            sum = 0;
        }
    }

    //printing result matrix
    printf("\n\nResult Matrix\n");
    for(i=0; i<r1; i++)
    {
        printf("\t");
        for(j=0; j<c2; j++)
        {
        printf("%d ",result[i][j]);
        }
        printf("\n");
    }
    return 0;
}