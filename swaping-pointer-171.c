#include<stdio.h>
int main()
{
    int x=10,y=20,temp;
    int *ptr1,*ptr2;

    ptr1 = &x;
    ptr2 = &y;

    //swaping
    temp = *ptr1;
    *ptr1 = *ptr2;
    *ptr2 = temp;

    printf(" X= %d\n",*ptr1);//x can be written
    printf(" y= %d\n",*ptr2);//y can be written

    getch();
}