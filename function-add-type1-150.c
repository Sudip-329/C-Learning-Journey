#include<stdio.h>

int sum (a,b)//can be written int sum (int a,int b); 
int a,b;
{
    return a+b;
}

int main()
{
    int num1,num2;
    printf("Enter two numbers : ");
    scanf("%d %d", &num1,&num2);

    printf("The sum is : %d\n",sum (num1,num2));
}
