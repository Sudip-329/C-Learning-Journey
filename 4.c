// Class Assignment, Question-4
#include <stdio.h>
 int main()
{
  long array[100], *maximum, size, c, location = 1;
 
  printf("Enter the number of elements in array\n");
  scanf("%ld", &size);
 
  printf("Enter %ld integers\n", size);
 
  for ( c = 0 ; c < size ; c++ )
    scanf("%ld", &array[c]);
 
  maximum  = array;
  *maximum = *array;
 
  for (c = 1; c < size; c++)
  {
    if (*(array+c) > *maximum)
    {
       *maximum = *(array+c);
       location = c+1;
    }
  }
 
  printf("Maximum element is present at location number %ld and it's value is %ld.\n", location, *maximum);
  return 0;
}
