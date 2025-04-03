#include<stdio.h>
int main()
{
    int num,temp,rem,sum=0;
    printf("Enter any number : ");
    scanf("%d",&num);

    temp = num;
    while(temp!=0)
    {
        rem = temp%10;
        sum = sum + rem*rem*rem;
        temp=temp/10;
    }
    if(num == sum)
    printf("Amgstrom number");
    else
    printf("Not an armstrong number");
    return 0;
}