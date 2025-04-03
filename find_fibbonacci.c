//To test whether a number num is a number in the Fibonacci sequence or not.
#include<stdio.h>

int fibbonacci(int n_329)
{
int t1_329=0, t2_329=1,nextterm_329 = 0,i_329=0;        //Name : Sudip Chakrabarty      Branch : CSE
while(nextterm_329<=n_329){                             //Roll : 21053329
    if (nextterm_329==n_329)
    {
        i_329++;
    }    
    nextterm_329 = t1_329 + t2_329;
    t1_329 = t2_329;
    t2_329 = nextterm_329;
}
if (i_329==1)
{
    printf("Entered number is a fibonacci number .\n");
}
else
printf("Entered number is not a fibbonacci number . \n");
}

int main()
{
    int n_329;
    printf("Enter the number that you want to test : \n");
    scanf("%d",&n_329);
    fibbonacci(n_329);
    return 0;    
}
