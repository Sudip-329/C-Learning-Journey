#include<stdio.h>
int main()
{
    int array1[5]={5,10,15,20,25},array2[5],i;
    
    printf("Array1 : ");
    for(i=0; i<5; i++)
    {
        printf("  %d",array1[i]);
    }
    for(i=0; i<5; i++)
    {
        array2[i] = array1[i];
    }
    printf("\nArray2 : ");
    for(i=0; i<5; i++)
    {
        printf("  %d",array2[i]);
    }
    getch();
}