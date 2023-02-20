//To check given number positive,negative or zero.
#include<stdio.h>
int main()
{
    int x_329;
    printf("Enter thr number : ");
    scanf("%d",&x_329);

    if(x_329>0)
    printf("%d is a positive number\n",x_329);
    else if(x_329==0)
    printf("%d is zero",x_329);
    else
    printf("%d is a negative number\n",x_329);
    return 0;
}