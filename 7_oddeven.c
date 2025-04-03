#include<stdio.h>
int main()
{
    int x_329,y_329,i_329;
    printf("Enter starting number of series : ");     
    scanf("%d",&x_329);
    printf("Enter ending number of the series : ");     //Name : Sudip Chakrabarty
    scanf("%d",&y_329);                                 //Roll : 21053329
    printf("The odd numbers are : ");                   //Branch : CSE
    for(i_329=x_329; i_329<=y_329; i_329++)             //Section : A10
    {
        if(i_329%2!=0)
        printf("%d ",i_329);
    }
    printf("\n");
    printf("The even numbers are : ");
    for(i_329=x_329; i_329<=y_329; i_329++)
    {
        if(i_329%2==0)
        printf("%d ",i_329); 
    }
    return 0;
}