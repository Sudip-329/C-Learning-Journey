#include<stdio.h>
int main()
{
    int num;

    printf("Enter an integer number : ");
    scanf("%d",&num);

    int result = square(num);
    printf("The square of the number is : %d\n",result);

}

int square(int a)
{
    return a*a;
}