#include<stdio.h>
int main()
{
    int result = sum(5,6);
    printf("The sum is : %d\n",result);
    
    result = sum(4,6);
    printf("The sum is : %d\n",result);
}


int sum (int a, int b)
{
    return a+b;
}