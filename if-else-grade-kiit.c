#include<stdio.h>
#include<math.h>
int main()
{
    int mark_329,tm_329;
    printf("Enter your marks :");
    scanf("%d",&mark_329);
    tm_329=mark_329/10;                        //Name : Sudip Chakrabarty
                                               //Roll : 21053329
    if(tm_329==9)                              //Branch : CSE
    {                                          //Section : A10
        printf("The grade is O .");
    }
    else if(tm_329==8)
    {
        printf("The grade is E .");
    }   
    else if(tm_329==7)
    {
        printf("The grade is A .");
    }
    else if(tm_329==6)
    {
        printf("The grade is B .");
    }
    else if(tm_329==5)
    {
        printf("The grade is C .");
    }       
    else if(tm_329==4)
    {
        printf("The grade is D .");
    }
    else
        printf("You are fail.");

   return 0;
}