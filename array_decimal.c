#include<stdio.h>
int main()
{
    int a[20],r,n,i,count;
    printf("Enter a decimal number");
    scanf("%d",&n);
    for(i=0; n!=0; i++)
    {
        r=n%2;
        a[i]=r;
        n=n/2;
        count++;
    }

    for(i=0; i<count; i++)
    {
        printf("%d",a[count-i-1]);
    }
    return 0;
}