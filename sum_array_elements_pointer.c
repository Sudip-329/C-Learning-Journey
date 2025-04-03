//To compute the sum of all elements in an array using pointer.
#include <stdio.h>
#include <conio.h>
void main()
{                                                 // Name : Sudip Chakrabarty   Roll No : 21053329
	int i_329, n_329, sum_329 = 0,arr_329[100];
	int *a_329;
    a_329=&arr_329[0];
    printf("\n\nEnter the size of array A : \n");
	scanf("%d", &n_329);

    printf("Enter Elements of the List \n");
	for (i_329 = 0; i_329 < n_329; i_329++) 
    {
		scanf("%d", a_329 + i_329);
	}
    for (i_329 = 0; i_329 < n_329; i_329++)
    {
		sum_329 = sum_329 + *(a_329 + i_329); 
	}
    printf("Sum of all elements in array = %d\n", sum_329);
    getch();
}