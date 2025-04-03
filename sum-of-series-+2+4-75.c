//1+2+3+4+..........n
#include<stdio.h>
int main()
{
    int n,sum=0,i;
    printf("Enter the last number of the series : ");
    scanf("%d",&n);
    printf("1+3+5+7+.......+%d",n);

    for(i=1;i<=n;i=i+2)
    {
        sum = sum + i;
    }

    printf(" = %d\n",sum);
    getch ();
}