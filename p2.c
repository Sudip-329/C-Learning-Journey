#include<stdio.h>
int main()
{
    int a_329[5]={2,5,16,18,23},b_329[5],i;
    for(i=0; i<5; i++)
    {
        printf(" a_329[%d] = %d\t ",i,a_329[i]);
        b_329[i]=a_329[4-i];
        printf(" b_329[%d] = %d\n ",i,b_329[i]);
    }
    return 0;
}