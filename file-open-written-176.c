#include<stdio.h>
int main()
{
    FILE *file;
    char name[20] = "Sudip Chakrabarty";
    int length = strlen(name);
    int i;
    file = fopen("test.txt","a");//a-name will be doubled

    if(file==NULL)
    {
        printf("File doesnt exist");
    }
    
    else
    {
        printf("file is opened\n");
        for(i=0; i<length; i++)
        {
            fputc(name[i],file);
        }
        printf("File is written successfully");
        fclose(file);
    }
    

    getch();
}