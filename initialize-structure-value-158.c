#include<stdio.h>
//global structure
struct Person
{
    int age;
    float salary;
};

int main()
{
    struct Person person1 = {27,26500.60};
    struct Person person2,person3;

    person2.age=21;
    person2.salary=26700.77;

    person3=person2;

    printf("Person1 : \n");
    printf("Age = %d\n",person1.age);
    printf("Salary = %.2f\n",person1.salary);
    printf("\n");
 
    printf("Person2 : \n");
    printf("Age = %d\n",person2.age);
    printf("Salary = %.2lf\n",person2.salary);
    printf("\n");
    
    printf("Person3 : \n");
    printf("Age = %d\n",person3.age);
    printf("Salary = %.2lf\n",person3.salary);

    getch ();
}