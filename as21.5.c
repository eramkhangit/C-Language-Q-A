// Write a function to sort employee according to their salaries .[refer structure from qu.1]
#include <stdio.h>
#include <string.h>
struct Employee
{
    int EmployeeId;
    char name[20];
    float salary;
};
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
    int i, j;
    struct Employee temp;
    for (i = 1; i <= size - 1; i++)
    {
        for (j = 0; j <= size - 1 - i; j++)
        {
            if (Em[j].salary < Em[j + 1].salary)
            {
                temp = Em[j];
                Em[j] = Em[j + 1];
                Em[j + 1] = temp;
            }
        }
    }
}
void display(struct Employee Em)
{  
        printf("%d . %s  %.2f\n", Em.EmployeeId, Em.name, Em.salary);
}
int main()
{
    int i;
    struct Employee Em2[4];
    for (i = 0; i < 10; i++)
        Em2[i] = input();
    sort_salary(Em2, 10);
    for (i = 0; i < 10; i++)
        display(Em2[i]);
    return 0;
}