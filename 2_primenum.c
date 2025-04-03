#include<stdio.h>
int main()
{
    int num_329,count=0,i_329;
    printf(" Enter Any positive number: ");
    scanf("%d",&num_329);

    if(num_329 == 0 || num_329 == 1)
    count++;
    
    for(i_329=2; i_329<num_329; i_329++)
    {
        if(num_329%i_329 == 0)
        {
            count++;
            break;
        }
    }
    if(count == 0)
        printf("%d is a Prime number\n",num_329);
    else
        printf("%d is not a prime number\n",num_329);
    return 0;
}