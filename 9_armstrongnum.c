// 153 = 1^3 + 5^3 + 3^3(armstrong number)370,371,407;

#include<stdio.h>
int main()
{
    int num_329,temp_329,rem_329,sum=0;
    printf("Enter any number : ");
    scanf("%d",&num_329);

    temp_329 = num_329;
    while(temp_329!=0)
    {
        rem_329 = temp_329%10;
        sum = sum + rem_329*rem_329*rem_329;
        temp_329=temp_329/10;
    }
    if(num_329 == sum)
    printf("%d is a Amgstrom number",num_329);
    else
    printf("%d is not an armstrong number",num_329);
    return 0;
}