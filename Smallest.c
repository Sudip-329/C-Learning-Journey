#include<stdio.h>       //To find the smallest between two numbers.
int main()
{
    int num329,num3329;
    printf("Enter number1 : ");     //Name : Sudip Chakrabarty
    scanf("%d", &num329);             //Roll : 21053329
    printf("Enter number2 : ");     //Branch : CSE
    scanf("%d", &num3329);             //Section : A10
    if (num329<num3329)
    printf("Number 1 is the smallest");
    else if (num3329<num329)
    printf("Number 2 is the smallest");
    else
    printf("Both the number are equal");
    return 0;
}
 