#include<stdio.h>
int main()
{
    char str[] = "Sudip Chakrabarty";

    strupr(str);
    printf("str = %s\n", str);

    
    strlwr(str);
    printf("str = %s\n", str);
}