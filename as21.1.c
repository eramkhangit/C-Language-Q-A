// Define a structure Employee with member variables id , name , salary .
#include <stdio.h>
#include <string.h>
int main()
{
    struct Employee
    {
        int EmployeeId;
        char name[20];
        float salary;
    } Em;

    Em.EmployeeId = 1;
    strcpy(Em.name, " Eram ");
    Em.salary = 1020.0;

    printf(" EmployeeId = %d  , EmployeeName = %s , salary = %.2f ", Em.EmployeeId, Em.name, Em.salary);
    return 0;
}