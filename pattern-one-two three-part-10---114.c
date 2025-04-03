#include<stdio.h>
int main()
{
   int n,col,row,count=0;

   printf("Enter n : ");
   scanf("%d",&n);

   for(row=1; row<=n; row++)
   {
       for(col=1; col<=row; col++)
       printf("  %d",++count);
    
   printf("\n");}
}