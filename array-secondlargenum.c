//To find 2nd large number.
#include<stdio.h>
int main()
{
    int a[100],i,large1,n,large2=0;
    printf("Enter how many numbers : ");
    scanf("%d",&n);
    for(i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }
    large1 = a[0];
    for(i=0; i<n; i++)
    {
        if(large1<a[i]);
        large2 = large1;
        large1=a[i];
    }
    printf("Second large number is %d\n",large1);
    for(i=0; i<n; i++)
    printf("Value of a[%d] is %d\n",i,a[i]);
}