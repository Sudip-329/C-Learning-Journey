#include<stdio.h>
int main()
{
    int choice;
    float temp, convertedtemp;

    printf("Temperature conversion menu\n");
    printf("1. Farenheit to celcious\n");
    printf("2. Celcious to Farenheight\n");
    printf("Enter your choice : ");
    scanf("%d",&choice);

    switch(choice)
    {
        case 1:
        {
            printf("Enter the Farenheight temperature :");
            scanf("%f",&temp);
            convertedtemp = (temp-32)/1.8;
            printf("The Temperature in celcious is :%f\n",convertedtemp);
            break;

        }
        case 2:
        {
            printf("Enter the celcious temperature :");
            scanf("%f",&temp);
            convertedtemp = (1.8*temp)+32;
            printf("The temperature in Farenheight :%f\n",convertedtemp);
            break;
        }
        default :
        printf("Not a correct option");
    }
}