#include<stdio.h>
int main()
{
    int num,rem,sum=0;
    printf("Enter any number : ");
    scanf("%d",&num);
    while(num!=0)
    {
        rem = num%10;
        sum = sum*10+rem;
        num = num/10;
    }
    printf("reverse of a number: %d\n", sum);
}