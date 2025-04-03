#include<stdio.h>
int main()
{
    double num1_329, num2_329;                        //Name : Sudip Chakrabarty
    int ch_329;                                       //Roll : 21053329
    printf("Enter two numbers: ");                    //Branch : CSE
    scanf("%lf %lf", &num1_329, &num2_329);           //Section : A10
    
    printf(" 1.add\n 2.substract\n 3.multiply\n 4.divide\n");
    scanf("%d", &ch_329);

    {
        switch(ch_329)
        {
        case(1):
        {
            printf("The addition of two number is %.2lf", num1_329+num2_329);
            break;
        }
        case(2):
        {
            printf("The substraction of two number is %.2lf", num1_329-num2_329);
            break;
        }
        case(3):
        {
            printf("The multiplication of two number is %.2lf", num1_329*num2_329);
            break;
        }
        case(4):
        {
            printf("The division of two number is %.2lf", num1_329/num2_329);
            break;
        }
        default:
        {
            printf("This program is confined to only addtion, substraction, multiplication, and division");
        }
        }
    }
    return 0;
}