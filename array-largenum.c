//To find large numbers.
#include<stdio.h>
int main()
{
    int a[100],i,large,n;
    printf("Enter  numbers : ");
    scanf("%d",&n);
    for(i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }
    large = a[0];
    for(i=0; i<n; i++)
    {
        if(large<a[i]);
        large = a[i];
    }
    printf("large number is %d\n",large);
    for(i=0; i<n; i++)
    printf("Value of a[%d] is %d\n",i,a[i]);
}