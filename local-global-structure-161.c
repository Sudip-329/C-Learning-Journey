#include<stdio.h>
//global structure
struct Person
{
    int age;
    float salary;
};
struct Person person1,person2;//global variable

int main()
{
    struct Person
    {
        int age;
        float salary;
    };//local structure(if used here)
    
    struct Person person1,person2;//if used here then local variable
    person1.age = 23;
    person1.salary = 27500.50;

    printf("Person1 : \n");
    printf("Age = %d\n",person1.age);
    printf("Salary = %.2lf\n",person1.salary);
    printf("\n");
 
    person2.age = 19;
    person2.salary = 17500.50;

    printf("Person2 : \n");
    printf("Age = %d\n",person2.age);
    printf("Salary = %.2lf\n",person2.salary);

    getch ();
}