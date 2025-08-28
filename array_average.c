#include<stdio.h>
int main()
{
    int a[10];
    int count = 10;
    int sum=0,i;
    float average = 0.0f;
    printf("Enter 10 numbers : \n");
    for(i=0; i<10; i++)
    {
    printf("array[%d] ",i);
    scanf("%d",&a[i]);
    }

    for(i=0; i<count; i++)
    {
        sum = sum + a[i];
    }
    printf("%d\n",sum);
    printf("The average is : %.2f\n",(float)sum/10);
}