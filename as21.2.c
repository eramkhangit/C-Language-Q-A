// Write a function to take input employee data from the user .[ Refer structure from qu. 1 ]
#include <stdio.h>
struct Employee
{
    int EmployeeId;
    char name[20];
    float salary;
};

int main()
{
    struct Employee Em;
    printf("enter employee data EmployeeId , name and salary : ");
    scanf("%d", &Em.EmployeeId);
    fflush(stdin);
    fgets(Em.name, 20, stdin);
    scanf("%f", Em.salary);
    return 0;
}
