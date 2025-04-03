#include<stdio.h>
int main()
{
	int count_329,i_329,j_329,n_329;
	printf("Enter the limit till which you want to see the series: ");
	scanf("%d", &n_329);
	printf("The prime number series is: ");
    for (i_329=2; i_329<=n_329; i_329++)
	{
        count_329=0;
		for (j_329=1; j_329<=i_329; j_329++)
		{
			if (i_329%j_329==0)
			count_329++;
		}
		if (count_329==2)
	    printf("%d  ",i_329);
	}
	return 0;
}