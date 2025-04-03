#include<stdio.h>
int main()
{
    int num_329,count=0,i_329;
    printf(" Enter Any positive number: ");
    scanf("%d",&num_329);

    for(i_329=2; i_329<num_329; i_329++)
    {
        if(num_329%i_329 == 0)
        {
            count++;
            break;
        }
    }
    if(count == 0)
        printf("Prime number\n");
    else
        printf("Not a prime number\n");
    return 0;
}