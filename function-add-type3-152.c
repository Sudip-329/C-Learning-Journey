#include<stdio.h>
int main()
{
   sum(10,20,30);

   sum(2,3,4);

   sub(9,8);
}


void sum (int a, int b, int c)
{
    printf("The sum is : %d\n",a+b+c);
}

void sub(int a,int b)
{
    printf("The subtraction is : %d\n",a-b);
}