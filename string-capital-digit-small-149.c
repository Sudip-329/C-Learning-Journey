#include<stdio.h>
int main()
{
    char str[100];
    int i,capital,small,digit,other;
    i=capital=small=digit=other=0;

    printf("Enter a string : ");
    gets(str);

   
    while((str[i])!='\0')
    {
        if(str[i]>=65 && str[i]<=90)
        capital++;

        else if(str[i]>=97 && str[i]<=122)
        small++;

        else if(str[i]>=48 && str[i]<=57)
        digit++;

        else
        other++;

        i++;
    }

    printf("Number of small = %d\n",small);
    printf("Number of capital = %d\n",capital);
    printf("Number of digit = %d\n",digit);
    printf("Number of other = %d\n",other);

}