#include<stdio.h>
int main()
{
    const int a = 10;
    //int *b;
    int *b = &a; //though it is constant ,still it can be changed;
    *b = 15;
    printf("%d",a);
}