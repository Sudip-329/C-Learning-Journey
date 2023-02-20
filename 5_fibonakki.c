//Fibonakki Series.
#include<stdio.h>
int main()
{
    int first_329 = 0, second_329 = 1, count_329 = 0, fibo_329,n;
    printf("Enter total number : ");
    scanf("%d",&n);
    while(count_329<n)
    {
        if(count_329<=1)                      //Name : Sudip Chakrabarty
        {                                     
        fibo_329 = count_329;                 
        }                                     
        else
        { 
            fibo_329 = first_329 + second_329;
            first_329 = second_329;
            second_329 = fibo_329;
        }
        printf("%d ",fibo_329);
        count_329++;
    }
return 0;
}