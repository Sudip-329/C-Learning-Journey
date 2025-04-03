#include<stdio.h>
int main()
{
    int n;
    n=1;

    while(n<=16)
    {
        printf("%d\n",n);
        n++;//n++ should not stay outside.
    
    if(n>10){

    break;
    }
    }

  
    getch ();
}