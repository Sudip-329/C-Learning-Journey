//Reverse an array by pointer.
#include<stdio.h>
int main()
{
    int size,i,arr[50];
    int *ptr;

    ptr = &arr[0];
    printf("Enter the size of the array : ");
    scanf("%d",&size);

    printf("Enter %d integers into array ",size);
    for(i=0; i<size; i++)
    {
        scanf("%d",ptr);
        ptr++;
    }
    ptr = &arr[size-1];
    printf("Elements in reverse order : ");
    for(i=size-1; i>=0; i--)
    {
        printf("\nElement %d is %d\n",i+1,*ptr);
        ptr--;
    }
    return 0;
}