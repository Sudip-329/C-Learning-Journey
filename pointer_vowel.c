// Find number of vowels in a string.
#include<stdio.h>
int main()
{
    char s[100];
    char *ptr;
    int nov=0;
    ptr = s;
    printf("Enter any string : ");
    gets(s);
    while(*ptr!='0')
    {
        if(*ptr=='a' || *ptr=='e' || *ptr=='i' || *ptr=='o' || *ptr=='u' ||
        *ptr=='A' || *ptr=='E' || *ptr=='I' || *ptr=='O' || *ptr=='U')
        nov++;
        ptr++;
    }
    printf("Total number of vowels : %d",nov);
    return 0;
}