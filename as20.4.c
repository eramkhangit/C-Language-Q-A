// Write a program in C to demonstrate how to handle the pointers in program .
#include<stdio.h>
void demonstrate(int *);
int main()
{
    int a ; 
    printf("enter value of a:");
    scanf("%d",&a);
    demonstrate(&a);

    return 0;
}
void demonstrate(int *b)
{
    printf("&a = %p and value = %d ",b,*b);
}