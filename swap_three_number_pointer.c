//To swap three numbers in cyclic order using Call by Reference.
#include <stdio.h>
int swapNumbers(int *x,int *y,int *z)
{
    int tmp;                               // Name : Sudip Chakrabarty   Roll No : 21053329
    tmp=*y;
    *y=*x;
    *x=*z;
    *z=tmp;
}
int main()
{
    int e1,e2,e3;
    int *p1,*p2,*p3;
	printf("\n\n Pointer : Swap numbers using call by reference :\n"); 
	printf("------------------------------------------------------\n");	
    printf(" Input the value of 1st number : ");
    scanf("%d",&e1);
	printf(" Input the value of 2nd number : ");
    scanf("%d",&e2);
	printf(" Input the value of 3rd number : ");
    scanf("%d",&e3);
	
	p1=&e1;
	p2=&e2;
	p3=&e3;
    printf("\n The value before swapping are :\n");
    printf(" Number 1 = %d\n Number 2 = %d\n Number 3 = %d\n",*p1,*p2,*p3);
    swapNumbers(p1,p2,p3);
    printf("\n The value after swapping are :\n");
    printf(" Number 1 = %d\n Number 2 = %d\n Number 3 = %d\n\n",*p1,*p2,*p3);
    return 0;
}