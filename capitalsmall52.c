#include<stdio.h>
int main()
{
    char ch;

    printf("Enter any latter : ");
    scanf("%c",&ch);

    if(ch>='a' && ch<='z')
    printf("Small Latter");

    else if(ch>='A' && ch<='Z')
    printf("Capital Latter");

    else
    printf("Not a Latter");

    getch();
}