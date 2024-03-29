// Write a function to sort employee according to their names [refer structure from question 1 ].
#include<stdio.h>
#include<string.h>

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

    for (i = 0; i < 4; i++)
    {
        printf("enter employee data:\n");
        printf("EmployeeId :");
        scanf("%d", &Em.EmployeeId);
        fflush(stdin);
        printf(" Employee name:");
        fgets(Em.name, 20, stdin);
        Em.name[strlen(Em.name) - 1] = '\0';
        return Em;
    }
}
void sortByEmployeeName(struct Employee Em [], int size )
{
    int i, j;
    struct Employee temp;
    for (i = 1; i <= size - 1; i++)
    {
        for (j = 0; j <= size - 1 - i; j++)
        {
            if (  (strlen(Em[j].name))  <  (strlen(Em[j + 1].name ))  ) 
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
        printf("%d . %s\n", Em.EmployeeId, Em.name);
}
int main()
{
    int i;
    struct Employee Em2[4];
    for (i = 0; i < 4; i++)
        Em2[i] = input();
    sortByEmployeeName(Em2, 4);
    for (i = 0; i < 4; i++)
        display(Em2[i]);
    return 0;
}