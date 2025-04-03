#include<stdio.h>
#include<math.h>
int main()
{
    int x_329,y_329,n_329;
    printf("It is a program to evaluate the equation y = x power n \n");
    printf("Enter the value of x : ");
    scanf("%d",&x_329);
    printf("Enter the non-negative value of n : ");
    scanf("%d",&n_329);
     
    if(n_329>=0)
    {
        y_329= pow(x_329,n_329);
        printf("Y= X^n = (%d)^%d = %d",x_329,n_329,y_329);   
    }
    else
    printf("Invalid Input");
}