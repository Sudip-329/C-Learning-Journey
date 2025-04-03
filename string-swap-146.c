#include<stdio.h>
int main()
{
    char str1[15] = "Bangladesh";
    char str2[15] = "India";
    char temp[15];

    printf("Before swaping\n");
    printf("String1 = %s\n",str1);
    printf("String2 = %s\n",str2);

    strcpy(temp,str1);
    strcpy(str1,str2);
    strcpy(str2,temp);

    printf("\nAfter swaping\n");
    printf("String1 = %s\n",str1);
    printf("String2 = %s\n",str2);

}