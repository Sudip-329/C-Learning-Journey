#include<stdio.h>
int main()
{
    int n,i;

    printf("Enter n = ");
    scanf("%d",&n);

    for ( i = 2; i<= n; i = i + 2)
    {
        printf("%d\n",i);
    }

}