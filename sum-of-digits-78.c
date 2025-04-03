//1*4*2+2*7*8+3*10*14+.....+n1*n2*n3
#include<stdio.h>
int main()
{
    int n1,n2,n3,sum=0,a=1,b=4,c=2;

    printf("Enter n1, n2 , n3 : ");
    scanf("%d %d %d",&n1,&n2,&n3);

    while(a<=n1 && b<=n2 && c<=n3)
    {
        sum = sum + a*b*c;
        a = a + 1;
        b = b + 3;
        c = c + 6;
    }
    printf("= %d",sum);
    getch();
}