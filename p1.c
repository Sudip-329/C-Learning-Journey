#include<stdio.h>
int main()
{
    int i,j,n;
    char ch;
    printf("How many rows :");
    scanf("%d",&n);
    for ( i = 1; i <=n; i++)
    {    
        ch='A'+(i-1);
        for ( j =1; j <=i; j++)
        {
            printf("%c  ",ch);
            ch=ch-1;
        }
        printf("\n");
    }
 return 0;   
}