//printing two d arraay
#include<stdio.h>
int main()
{
    int i,j;
    int A[3][4] =  { { 54,61,72,88},{91,10,11,12},{12,13,14,15} };
    
    for(i=0; i<3; i++)
    {
        for(j=0; j<4; j++)
        {
            printf("    %d",A[i][j]);
        }
        printf("\n");
    }
}
