#include<stdio.h>
int main()
{
    int num,rem,sum=0;
    printf("Enter any number to see it's reverse : ");       //Name : Sudip Chakrabarty
    scanf("%d",&num);                                    //Roll : 21053329
                                                             //Section : A10
    while(num!=0)                                        //Branch : CSE
    {
        rem = num%10;
        sum = sum*10+rem;
        num = num/10;
    }
    printf("Reverse of the number is : %d\n",sum);
}