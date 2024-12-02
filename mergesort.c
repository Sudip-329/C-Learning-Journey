#include<stdio.h>
#include<conio.h>

void merge(int a[], int lb, int mid, int ub)
{
    int i = lb;  //lb = lowerbound = min
    int j = mid+1;   //ub = upper bound  = max
    int k = lb;
    int b[100];
    while(i<= mid && j<= ub)
    {
        if(a[i]<=a[j])
        {
            b[k] = a[i];
            i++;
        }
        else  //a[i]>=a[j]
        {
            b[k]= a[j];
            j++;
        }
        k++;
    }

    if(i>mid)  //means j has element left 
    {
        while(j<=ub)
        {
            b[k] = a[j];
            j++;
            k++;
        }
    }
    else  //(j>mid)  means i has element left but j has finished
    {
        while(i<=mid)
        {
            b[k] = a[i];
            i++;
            k++;
        }
    }
    for(k=lb; k<=ub; k++) //sending all the elements to the main array
    a[k]=b[k];
}





void sortm(int ar[],int min,int max)
{
    int mid;
    if(min<max)
    {
        mid=(min+max)/2;
        sortm(ar,min,mid);
        sortm(ar,mid+1,max);
        merge(ar,min,mid,max);
    }
}

int main()
{
    int arr[30]; //taking array
    int i,size;

    printf (" How many numbers you want to sort?: ");
    scanf("%d",&size);  // array size
    printf("\n Enter %d elements :\n ",size);
    for(i=0; i<size; i++)
    {
        scanf("%d",&arr[i]);  // taking elements  
    }
    sortm(arr,0,size-1); // dending array max and min position
    printf("\n Sorted elements after using merge sort:\n\n");
    for(i=0; i<size; i++)
    printf(" %d ",arr[i]);
    return 0;
}