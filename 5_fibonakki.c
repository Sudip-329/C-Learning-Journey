//Fibonakki Series.
#include<stdio.h>
int main()
{
    int first_329 = 0, second_329 = 1,c_329,n_329;
    printf("Enter total number : ");
    scanf("%d",&n_329);
    for(c_329=0; c_329<=n_329; c_329 = first_329 + second_329)
        { 
            printf("%d ",c_329);
            first_329 = second_329;
            second_329 = c_329;
        }
    return 0;
}