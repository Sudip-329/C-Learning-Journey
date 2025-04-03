#include<stdio.h>
#include<math.h>
int main()
{
    double x = -1.4;
    double x2 =3.4;
    double result = floor(x);
    double result2 = floor(x2);

    printf("floor(%.2lf) = %.3lf\n",x,result);
    printf("floor(%.2lf) = %.3lf\n",x2,result2);


}