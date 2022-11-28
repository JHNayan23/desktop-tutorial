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

    person1.age = 20;
    person1.salary = 12750.50;

    printf("Age = %d\n",person1.age);
    printf("salary = %.2f\n",person1.salary);

    person2.age = 21;
    person2.salary = 22750.50;

    printf("Age = %d\n",person2.age);
    printf("salary = %.2f\n",person2.salary);

    return 0;
}


