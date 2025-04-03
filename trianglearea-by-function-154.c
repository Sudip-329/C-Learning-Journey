#include<stdio.h>
double ta(double b, double h);
int main()
{
    double base, height, area;

    printf("Enter base : ");
    scanf("%lf",&base);

    printf("Enter height : ");
    scanf("%lf",&height);

    area = ta(base,height);

    printf("Area = %.2lf\n",area);
}

double ta(double b, double h)
{
    return 0.5 * b * h;
}