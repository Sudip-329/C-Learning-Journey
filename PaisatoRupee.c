//Name: Sudip Chakrabarty
//Roll No.: 21053329
//Branch: Computer Science and Engineering
#include<stdio.h>
int main()
{
   int paisa329,rupee329,paisa1329;
   printf("Enter the amount of paisa : ");
   scanf("%d", &paisa329);
   
   rupee329 = paisa329/100;
   paisa1329 = paisa329%100;
   printf("%d Paisa = %d Rupee and %d Paisa",paisa329,rupee329,paisa1329);
return 0;
   
}

