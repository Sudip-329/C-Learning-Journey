//To find LCM between two numbers.
#include<stdio.h>
int LCM(int x_329 ,int y_329)
{
    int t1_329=x_329,t2_329=y_329,rem_329,gcd_329,lcm_329 ;
    while(t2_329!=0)         
    {
        rem_329 = t1_329%t2_329;                       //Name : Sudip Chakrabarty      Branch : CSE
        t1_329=t2_329;                                 //Roll : 21053329
        t2_329=rem_329;
    }
    gcd_329 = t1_329;
    lcm_329  = (x_329 * y_329)/gcd_329;
    printf("LCM = %d \n ", lcm_329 );
    return 0;
}

int main()
{
    int a_329,b_329;
    printf("Enter two numbers : ");
    scanf("%d %d",&a_329,&b_329);
    LCM(a_329,b_329);
}