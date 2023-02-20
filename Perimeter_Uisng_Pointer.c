#include <stdio.h>
float compute(float, float *);

int main()
{
   float r, area, perimeter;
   printf("\nEnter the radius of the circle :");
   scanf("%f",&r);
   area=compute(r, &perimeter);
   printf("\n AREA = %f", area);
   printf("\n PERIMETER = %f", perimeter);
   return 0;
}


float compute(float r, float *p)
{
   float a;
   a=(float)3.1415 * r * r;
   *p=(float)3.1415 * 2 * r;
   return a;
}