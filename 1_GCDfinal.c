#include <stdio.h>
int main()
{
    int n1_329, n2_329, i, gcd;

    printf("Enter two integers: ");
    scanf("%d %d", &n1_329, &n2_329);

    for(i=1; i <= n1_329 && i <= n2_329; i++)
    {
        if(n1_329%i==0 && n2_329%i==0)
        gcd = i;
    }
    printf("G.C.D of %d and %d is %d", n1_329, n2_329, gcd);
    return 0;
}