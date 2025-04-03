#include<stdio.h>

enum days_of_week
{
    Sun,Mon,Tue,Wed,Thu,Fri,Sat
};

int main()
{
    enum days_of_week day1,day2,day3;

    day1 = Tue;
    day2 = Wed;
    day3 = Tue;
    
    int diff = day2-day1;

    printf("day diff = %d\n",diff);
    printf("day1 = %d\n",day1);
    printf("day2 = %d\n",day2);
    printf("day3 = %d\n",day3);

    getch();
}