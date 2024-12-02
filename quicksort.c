#include <stdio.h>  

void quicksort(int arr[25], int first, int last)
{
    int start, end, pivot, temp;

    if (first < last)
    {
        pivot = first;
        start = first;
        end = last;
        while (start < end)
        {
            while (arr[start] <= arr[pivot] && start < last)
                start++;

            while (arr[end] > arr[pivot])
                end--;

            if (start < end)   //if it satisfy then swap
            {
                temp = arr[start];
                arr[start] = arr[end];
                arr[end] = temp;
            }
        }

        temp = arr[pivot];    //when all conditions are end then swap pivot and end element only
        arr[pivot] = arr[end];    //not start element
        arr[end] = temp;

        quicksort(arr, first, end - 1);   //now left and right side not sorted but left elements are 
        quicksort(arr, end + 1, last);   // smaller than the pivot .again perform same method to right
    }                                     //and left.   and  end is pivot after sorting (it maybe middle
}                                          //or any pos)  no need to sort again we will sort from
                                           // end-1 and end+1
int main()
{
    int i, count, arr[25];

    printf("How many elements? : ");  // array size
    scanf("%d", &count);

    printf("Enter %d elements: ", count);
    for (i = 0; i < count; i++)  //taking array elements
        scanf("%d", &arr[i]);

    quicksort(arr, 0, count - 1); //calling function   and sending array 1st pos and last pos as argument

    printf("Order of Sorted elements: ");//after soring print
    for (i = count-1; i >-1; i--)
        printf(" %d", arr[i]);


    /*for(i=0;i<count;i++)   for ascending order
    printf(" %d",arr[i]);*/

    return 0;
}