#include<stdio.h>
int main()
{
    int i,a[100],sum=0,average,n;

    printf("How many numbers : ");
    scanf("%d",&n);
    for(i=0; i<n; i++)
    {
        printf(" No %d :",i+1); 
        scanf("%d",&a[i]);
        sum+= a[i];
    }
    printf("Sum of the numbers is : %d\n",sum);
    average = (float)sum/n;
    printf("Average of the numbers is : %d",average);
    int min = a[0];
    int max = a[0];
    for(i=1; i<n; i++)
    {
        if( min > a[i])
        min = a[i];
        if(max<a[i])
        max = a[i];
    }
    printf("Maximum = %d",max);
    printf("Minimum = %d",min);
}