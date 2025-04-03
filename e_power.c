//To compute the power series (e to the power x).
#include<stdio.h>
double epower(double x_329)
{
    double m_329,sumr_329=1,sump_329=1,total_329=1;
    for(m_329=1;m_329<=100;m_329++)                    //Name : Sudip Chakrabarty      Branch : CSE
    {                                                  //Roll : 21053329
        sumr_329=sumr_329*x_329;
        sump_329=sump_329*m_329;
        total_329=total_329+(sumr_329/sump_329);
    }
    return total_329; 
}
int main(void)
{
    double x_329,result_329;
    printf("Enter the value of x : ");
    scanf("%lf",&x_329);
    result_329=epower(x_329);
    printf("The value of expotential : %.3lf\n",result_329);
}