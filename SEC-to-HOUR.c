#include<stdio.h>
int main()
{
   long sec1, sec2, hr_329, min_329, t_329;
   printf("Enter the time in seconds : ");
   scanf("%ld", &sec1);
   
   hr_329=sec1/3600;      //Name: Sudip Chakrabarty
   t_329=sec1%3600;       //ROLL: 21053329
   min_329=t_329/60;      //BRANCH: CSE
   sec2=t_329%60;         //SECTION: A10

   printf("%ld Seconds =  %ld Hours  %ld Minutes  %ld Seconds", sec1, hr_329, min_329, sec2);
   return 0;
}
