#include<stdio.h>
struct Person
{
    int age;
    float salary;
};

int main()
{
    struct Person person1,person2;

    person1.age = 23;
    person1.salary = 27500.50;

    printf("Person1 : \n");
    printf("Age = %d\n",person1.age);
    printf("Salary = %.2f\n",person1.salary);
    printf("\n");
 
    person2.age = 19;
    person2.salary = 17500.50;

    printf("Person2 : \n");
    printf("Age = %d\n",person2.age);
    printf("Salary = %.2f\n",person2.salary);

    getch ();
}