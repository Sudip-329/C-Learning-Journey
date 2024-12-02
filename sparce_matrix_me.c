#include <stdio.h>

int main()
{
    int m,n,i,j;
    printf("Enter matrix m X n :\n");
    scanf("%d",&m);
    scanf("%d",&n);
    int mat[m][n];
    int nozero=0;
    printf("Enter matrixs eliments:\n");
    for(i=0;i<m;i++)
    {
        for(j=0; j<n; j++)
        {
            scanf("%d",&mat[i][j]);
        }
    }
    
    for(i=0; i<m; i++)
    {
        for(j=0; j<n; j++)
        {
            printf("\t%d",mat[i][j]);
            if(mat[i][j]==0)
            {
               nozero++; 
            }
        }
        printf("\n");
    }
   
    if (nozero>((m*n)/2))
    {
        printf("It is a sparse matrix\n");
    }
    else
    {
        printf("It is a not sparse matrix\n");
    }
    return 0;
}