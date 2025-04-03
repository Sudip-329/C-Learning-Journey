//To add two numbers using call by reference.
#include <stdio.h>
long addTwoNumbers(long *n1_329, long *n2_329) 
{
   long sum_329;                               // Name : Sudip Chakrabarty   Roll No : 21053329
   sum_329 = *n1_329 + *n2_329;                // Branch : CSE
   return sum_329;
}
int main()
{
   long fno_329, sno_329, sum_329,*fno1_329,*sno1_329;
   
   printf("\n\n Pointer : Add two numbers using call by reference:\n");   
   
   printf(" Input the first number : ");
   scanf("%ld", &fno_329);
   printf(" Input the second  number : ");
   scanf("%ld", &sno_329); 
   fno1_329=&fno_329;
   sno1_329=&sno_329;
   sum_329 = addTwoNumbers(fno1_329, sno1_329);
   printf(" The sum of %ld and %ld  is %ld\n\n", fno_329, sno_329, sum_329);
   return 0;
}
