#include<stdio.h>
#include<math.h>
int main()
{
    int mark_329,tm_329;
    printf("Enter your marks :");
    scanf("%d",&mark_329);
    tm_329=mark_329/10;
    switch (tm_329)
    {
    case 9:
        printf("The grade is O .");        //Name : Sudip Chakrabarty
        break;                             //Roll : 21053329
    case 8:
        printf("The grade is E .");
        break;    
    case 7:
        printf("The grade is A .");
        break;
    case 6:
        printf("The grade is B .");
        break;
    case 5:
        printf("The grade is C .");
        break;    
    case 4:
        printf("The grade is D .");
        break;
        
        default:
        printf("You are fail.");
        break;
    }
}