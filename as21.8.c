// Write a program to store information of 10 students and display them using structure .
#include <stdio.h>
#include <string.h>
struct student
{
    int StudentId , class ;
    char name[20];
};
int main()
{
    struct student st1;
    st1 = input();
    display_info(st1);
    return 0;
}

struct student input()
{
    struct student st;
    printf("Enter the students data:");
    scanf("%d", &st.StudentId);
    fflush(stdin);
    fgets(st.name, 20, stdin);
    st.name[strlen(st.name) - 1] = '\0';
    scanf("%d", &st.class);
    return st;
}

void display_info(struct student st2)
{
    printf("Display students information:\n");
    printf("%d %s %d ", st2.StudentId, st2.name, st2.class);
}// check it again 