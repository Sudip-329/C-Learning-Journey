//swap
#include<stdio.h>

int main()
{
    int num1,num2;
    printf("Enter two numbers : ");
    scanf("%d %d", &num1,&num2);

    printf("Before swapping a=%d and b=%d \n",num1,num2);
    swap(num1,num2);
    
    return 0;
}

void swap(int x,int y)
{
    int temp;                                       //Name : Sudip
    temp = x;
    x=y;
    y=temp;
    printf("\n After swap a=%d and b=%d",x,y);
}
