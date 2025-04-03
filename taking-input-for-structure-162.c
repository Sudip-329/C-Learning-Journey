#include<stdio.h>
//global structure
struct Person
{
    int age;
    float salary;
};

int main()
{
    struct Person person1,person2;

    printf("Enter data for person1 : \n");
    printf("Enter age : ");
    scanf("%d",&person1.age);

    printf("Enter salary : ");
    scanf("%f",&person1.salary);

    printf("Person1 : \n");
    printf("Age = %d\n",person1.age);
    printf("Salary = %.2f\n",person1.salary);
    printf("\n");
 
    printf("Enter data for person2 : \n");
    printf("Enter age : ");
    scanf("%d",&person2.age);

    printf("Enter salary : ");
    scanf("%f",&person2.salary);

    printf("Person2 : \n");
    printf("Age = %d\n",person2.age);
    printf("Salary = %.2lf\n",person2.salary);

    getch ();
}