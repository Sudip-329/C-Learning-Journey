#include<stdio.h>
int fact(int a);
int main()
{
    int num, num1, diff, result1, result2, result3;
    double result4;

    printf("Enter the value of n: \n");
    scanf("%d", &num);

    printf("Enter the value of r, it should be less or equal to n: \n");
    scanf("%d", &num1);

    diff=num-num1;
    
    result1=fact(num);
    result2=fact(diff);
    result3=fact(num1);

    result4=(((double)result1)/(result2*result3));

    printf("The nCr factor of n=%d, r=%d is %.2lf", num, num1, result4);
    return 0;
}   

int fact(int a)
{
    int result=1, i;
    for (i=a; i>=1; i--)
    {
        result=result*i;
    }

    return result;
}