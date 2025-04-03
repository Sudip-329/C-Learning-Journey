#include<stdio.h>
int main()
{
    while(1) {
    int n,i,fact=1;

    printf("Enter any positive number : ");
    scanf("%d",&n);

    for(i=1; i<=n; i++)
    {
        fact = fact * i;
    }

    printf("%d\n",fact);
    }
}