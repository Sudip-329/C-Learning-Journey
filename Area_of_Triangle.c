#include<stdio.h>
int main()
{
    double s,a,b,c,area;

    printf("Enter the three values : ");
    scanf("%lf %lf %lf",&a,&b,&c);

    s = (a+b+c)/2;

    area = sqrt(s*(s-a)*(s-b)*(s-c));

    printf("The area is : %.2lf",area);

    return 0;

}