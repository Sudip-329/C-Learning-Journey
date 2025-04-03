#include<stdio.h>
int main()
{
    int arr[100],*ptr,n,i;
    printf("Enter how many elements : ");
    scanf("%d",&n);
    for(i=0; i<n; i++)
    {
        scanf("%d",&arr[i]);
    }
    ptr = arr;
    int sum=0;
    for(i=0; i<n; i++)
    {
        sum = sum + *ptr;
        ptr++;
    }
    printf("the sum is %d",sum);
}