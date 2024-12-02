#include<stdio.h>
int main()
{
    int a=0,b=1;
    int c ,n,i;
    printf("Enter how many terms : ");
    scanf("%d",&n);
    printf("0    1  ");
    for (i=2; i<n; i++)
    {
        c = a+b;
        a=b;
        b=c;
        
        printf(" %d   ",c);
    }
}