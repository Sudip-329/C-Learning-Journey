#include<stdio.h>
int main()
{
    char ch;
    printf("Eenter a Latter : ");
    scanf("%c",&ch);

    if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=="u")
    printf("vowel");

    else
    printf("Consonent");

    return 0;

}