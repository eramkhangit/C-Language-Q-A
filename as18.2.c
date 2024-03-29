// write a function to reverse a string .
#include <stdio.h>
#include <string.h>
void reverse_string(char *str);
int main()
{
    char str[100];
    printf("enter string:");
    fgets(str, 100, stdin);
    reverse_string(str);
    return 0;
}
void reverse_string(char str[])
{
    printf("reversed string : %s", strrev(str));
}