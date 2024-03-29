// Write a function to find the highest salary employee from a given array of 10 employee . [Refer structure from qu.1]
#include <stdio.h>
#include <string.h>
struct Employee
{
    int EmployeeId;
    char name[20];
    float salary;
};
void sort_salary(struct Employee Em[], int);
struct Employee input()
{
    int i;
    struct Employee Em;

    for (i = 0; i < 10; i++)
    {
        printf("enter employee data:\n");
        printf("EmployeeId :");
        scanf("%d", &Em.EmployeeId);
        fflush(stdin);
        printf(" Employee name:");
        fgets(Em.name, 20, stdin);
        Em.name[strlen(Em.name) - 1] = '\0';
        printf("Employee salary:");
        scanf("%f", &Em.salary);
        return Em;
    }
}
void sort_salary(struct Employee Em[], int size)
{
    int i;
    struct Employee max;
    max.salary = Em[0].salary;
    for (i = 0; i < size; i++)
    {
        if (Em[i].salary > max.salary)
            max.salary = Em[i].salary;
    }
    printf("Highest salary of Employee :\n");
    printf("salary= %0.2f ",max.salary);
}
int main()
{
    int i;
    struct Employee Em2[10];
    for (i = 0; i < 10; i++)
        Em2[i] = input();
    sort_salary(Em2, 10);
    return 0;
}