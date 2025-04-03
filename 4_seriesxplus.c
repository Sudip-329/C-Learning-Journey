//To print 1 3 7 15 31 .......series.
#include<stdio.h>
int main()
{
    int n_329,i_329;                                    //Name : Sudip Chakrabarty
    printf("Enter total number : ");                    //Roll : 21053329
    scanf("%d",&n_329);                                 //Branch : CSE
                                                        //Section : A10
    for(i_329=1; i_329<=n_329; i_329=2*i_329+1)
    {
        printf("  %d",i_329);
    }
    return 0;
}