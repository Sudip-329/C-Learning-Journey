#include<stdio.h>
int main()
{
    int s1[100];
    printf("Enter a string : ");
    gets(s1);

    int len = strlen(s1);

    printf("Length = %d\n",len);
}