#include<stdio.h>
int main()
{
    FILE *file;

    file = fopen("test.txt","w");

    if(file==NULL)
    {
        printf("File doesnt exist");
    }
    
    else
    {
        printf("file is opened");
        fclose(file);
    }
    

    getch();
}