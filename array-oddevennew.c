#include<stdio.h>
int main()
{
    int a[50],i,n;
    printf("How many numbers : ");
    scanf("%d",&n);

    printf("Enter values to see the output :\n");
    for(i=1; i<=n; i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Odd Numbers in Array are:\n");
    for(i=1; i<=n; i++)
    {
        if(i%2!=0)
        {
            printf("%d  ",a[i]);
        }
    }
    printf("\n");
    printf("Even Numbers in Array are:\n");
    for(i=1; i<=n; i++)
    {
        if(i%2==0)
        {
            printf("%d  ",a[i]);
        }
    }
    printf("\n");
    for(i=1; i<=n; i++)
    {
        printf("The inserted values are a[%d] = %d\n",i,a[i]);
    }
}