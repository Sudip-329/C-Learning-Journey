//To display values in reverse order from an integer array using pointer.
#include <stdio.h>
int main()
{                                           // Name : Sudip Chakrabarty   Roll No : 21053329
	int i_329, n_329,arr_329[100];
	int *a_329;
    a_329=&arr_329[0];
    printf("\n\nEnter the size of array A : \n");
	scanf("%d", &n_329);

    printf("Enter Elements of the List : \n");
	for (i_329 = 0; i_329 < n_329; i_329++) 
    {
		scanf("%d", a_329 + i_329);
	}
    printf("Reverse order of given in integers :\n");
    for (i_329 = n_329-1; i_329 >=0; i_329--)
    {
	printf("%d  ",*(a_329+i_329));
	}
    return 0;
}