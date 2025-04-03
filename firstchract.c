//Fast character of each word.
#include<stdio.h>
#include<string.h>                                  //Name : Sudip Chakrabarty  //Roll : 21053329
int main()                                          //Branch : cse
{
    char a_329[100],i_329,len_329;

    printf("Enter a string : ");
    gets(a_329);
     
    len_329 = strlen(a_329);

    printf("%c",a_329[0]);

    for(i_329=1; i_329<=len_329; i_329++)
    {
        if(a_329[i_329]==' ')
        {
            printf("%c",a_329[i_329+1]);
        }
    }
    
}