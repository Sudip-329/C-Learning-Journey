#include <stdio.h>
int main()
{
  int row,col,n;
  printf("Enter range : ");
  scanf("%d",&n);
  for(row=1;row<=n;++row)
  {
    for(col=1;col<=row;++col)
    printf("%d ",(row-col)%2);
    printf("\n");
  }
  return 0;
}