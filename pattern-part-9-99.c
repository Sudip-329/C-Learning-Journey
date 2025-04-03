#include<stdio.h>
int main()
{
    int n,row,col;

    printf("Enter any number : ");
    scanf("%d",&n);

    for(row=1; row<=n; row++)
    {
        //printng space
        for(col=1; col<=n-row; col++)
        {
            printf(" ");
        }
        //printing number 
        for(col=1; col<=row; col++)
        {
            printf("%d",row);
        }
        printf("\n");

    }
}