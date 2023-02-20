#include<stdio.h>
int main()
{
    float f,c;
    printf("Enter farenheight temp : ");
    scanf("%f",&f);

    c = (f-32)/1.8;

    printf("Centigrade : %.2f\n",c);
    return 0;
}