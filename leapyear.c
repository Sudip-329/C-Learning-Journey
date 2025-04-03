#include<stdio.h>
int main()
{
    int year_329;
    printf("Enter any year : ");       //Name : Sudip Chakrabarty
    scanf("%d",&year_329);             //Roll : 21053329
                                       //Branch : CSE
    if(year_329%400==0)                //Section : A10
        printf("Leap Year");
    else if(year_329%4==0 && year_329%100!=0)
        printf("Leap Year");
    else
        printf("Not a leap year");
    return 0;
}