#include<stdio.h>
int main()
{
    char str1[] = "Sudip Chakrabarty";
    char str2[] = "Sudip";

    int d = strcmp ( str1,str2);

    if(d==0)
    {
        printf("Strings are equal");
    }
    else
    {
        printf("Strings are not equal");
    }
}