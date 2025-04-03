//x power y
#include<stdio.h>

void Power(double a, double b)
    {
        double result=1, i;
        for(i=1; i<=b; i++)
        {
            result= result*a;
        }
    printf("%.2lf ^ %.2lf = %.2lf",a,b,result);   
    }

int main()
{
    double x;
    double y;
    printf("Enter x: \n");
    scanf("%lf", &x); 
    printf("Enter y: \n");
    scanf("%lf", &y);
    
    Power(x, y);

    return 0;
}
