#include<stdio.h>
int main()
{
    int num,i;
    while(1)
    {
        printf("Enter any number : ");
        scanf("%d",&num);
        for(i=1;i<=10;i++)
        {
            printf("%d x %d = %d\n",num,i,num*i);

        }
        printf("\n");
    }
    return 0;
    
}