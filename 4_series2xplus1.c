//To print 1 3 7 15 31 .......series.
#include<stdio.h>
int main()
{
    int n_329,i_329,s_329=0,result_329;           //Name : Sudip Chakrabarty
    printf("Enter total number : ");              
    scanf("%d",&n_329);                           
                                                  
    for(i_329=1; i_329<=n_329; i_329++)
    {
        result_329 = s_329*2+1;
        s_329=result_329;
        printf("  %d",result_329);
    }
    return 0;
}