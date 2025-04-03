#include<stdio.h>
void display (int (*b)[3])
{
    for( int i=0; i<3; i++)
    {
    printf("Address %d ",(*b+i));
    printf("    Value %d \n",*(*b+i));
    }
}
int main()
{
    int z[3] = {10,20,30};
    display (&z);
}