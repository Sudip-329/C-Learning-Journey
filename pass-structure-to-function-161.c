#include<stdio.h>
struct Person
{
    char name[20];
    int age;
    float salary;
};

void display (struct Person p)
{
    printf("Name : %s\n",p.name);
    printf("Age : %d\n",p.age);
    printf("Salary : %.2f\n",p.salary);
}

int main()
{
    struct Person person1, person2;
    
    strcpy(person1.name,"Sudip");
    person1.age = 22;
    person1.salary = 12300.50;
    display (person1);
    
    
    strcpy(person2.name,"Sudip Chakrabarty");
    person2.age = 29;
    person2.salary = 1237979700.50;
    display (person2);

    getch();
}