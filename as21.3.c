// Write a function to display employee data .[Refer structure from qu. 1 ]
#include <stdio.h>
#include<string.h>
struct Employee
{
      int EmployeeId;
    char name[20];
    float salary;
};

struct Employee input ( )
{
    struct Employee Em;
    printf("enter employee data:\n");
    printf( "EmployeeId :");
    scanf("%d", &Em.EmployeeId);
    fflush(stdin);
    printf(" Employee name:");
    fgets(Em.name, 20, stdin);
    Em.name[strlen(Em.name) - 1] ='\0';
    printf("Employee salary:");
    scanf("%f",&Em.salary);
    return Em;
}
void display (struct Employee Em)
{
    printf("display employee information:\n ");
    printf("EmployeeId = %d\nEmployeeName = %s\nsalary = %.2f ",Em.EmployeeId, Em.name,Em.salary);
}
int main()
{
    struct Employee Em2 ;
    Em2 = input();
    display(Em2);
    return 0;
}