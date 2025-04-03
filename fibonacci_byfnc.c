//To see fibonakki series.
#include<stdio.h>
int fibonacci(int a_329)
{
    int X_329=0, Y_329=1, nextterm_329=0, i_329=1;
    printf("The %d terms of fibbonacci series : ",a_329);
    while(i_329<=a_329)
    {
        nextterm_329 = X_329 + Y_329;                    //Name : Sudip Chakrabarty      Branch : CSE
        printf(" %d ",X_329);                            //Roll : 21053329
        X_329 = Y_329;
        Y_329 = nextterm_329;
        i_329++;
    }
}
int main()
{
    int num_329;
    printf("Enter how many terms you want to see : ");
    scanf("%d",&num_329);
    fibonacci(num_329);
    return 0;
}