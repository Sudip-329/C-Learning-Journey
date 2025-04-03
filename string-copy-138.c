#include<stdio.h>
int main()
{
    char source[]="C Programming";
    char target[15];

    strcpy(target,source);

    printf("Source String = %s\n",source);
    printf("Target String = %s\n",target);
}