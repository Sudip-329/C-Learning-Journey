#include<stdio.h>
int main()
{
    int n,row,col,nq=0,dq=65;

    printf("Enter any number : ");
    scanf("%d",&n);

    for( row=1; row<=n; row++)
    {
    
        if(row%2==0)
        {
            for(col=1;col<=row;col++)
            dq++;
            printf("%c",dq);
        }
        for( col=1; col<=row; col++)
        {
            nq++;
            printf("%d  ",nq);
        }
        printf("\n");
    }
}