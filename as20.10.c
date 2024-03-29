// Write a program to print a string in reverse using a pointer.
#include <stdio.h>
#include <string.h>
void reverse_string(char *);
int main()
{
    char str[15];
    printf("enter string :");
    gets(str);
    reverse_string(str);
    return 0;
}
void reverse_string(char *str1)
{
    strrev(str1);
    printf(" reversed string is : %s", str1);
} 