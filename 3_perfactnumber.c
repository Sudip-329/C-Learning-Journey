#include<stdio.h>
int main()
{
    int i_329,n_329,sum=0,temp;
    printf("Enter any integer : ");
    scanf("%d",&n_329);

    for(i_329=1; i_329<n_329; i_329++)
    {
        temp = n_329%i_329;
        if(temp == 0)
        {
            sum= sum+i_329;
        }
    }
    if(sum==n_329)
    printf("The entered number %d is a perfact number.",n_329);
    else
    printf("The entered number %d is not a perfact number.",n_329);
    return 0;
}