#include<stdio.h>
int main()
{
    char str[100];
    printf("\nEnter a string : ");
    gets(str);
    
    printf("str = %s\n",str);
    strrev(str);

    printf("str = %s\n",str);
}