
#include<stdio.h>
int main()
{
    int num[20]={2,4,7,8,4,1,5,9,12,24,26,29,42,83,61,89,91,99,100,120},n,i;
    int max1 = num[0],max2;

    for(i=1; i<n; i++)
    {
        if (max1<num[i])
        max1 = num [i];
        if(max2<max1 && max2>num[i])
        max2= num[i];
    }
    printf("Maximum = %d\n",max2);
}