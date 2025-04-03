#include <stdio.h>
int main()
{
    int a[10],i;
    printf("Enter 10 Numbers:\n");
    /*For accepting 5-integer numbers from user*/
    for(i=0;i<10;i++)
    scanf("%d",&a[i]);

    printf("Odd Numbers in Array are:\n");
    for(i=0;i<10;i++)
    {
        if(a[i]%2!=0) //Check number is odd
	    {               
		printf("%d ",a[i]);
	    }
    }
    printf("\nEven numbers in array are:\n");
    for(i=0; i<10; i++)
    {
        if(a[i]%2==0)
        {
        printf("%d ",a[i]);
        }
    }
    return 0;
}