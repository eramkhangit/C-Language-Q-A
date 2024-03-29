// Write a program to calculate the length of the string using a pointer.
#include<stdio.h>
#include<string.h>
int string_length(char * );
int main()
{
    char str[10];
    int l;
    printf(" enter string : ");
    gets(str);
    
    printf("Length of string : %d ", string_length(str) );
    return 0;
}
int  string_length(char *s)
{  
    
    return  strlen(s);
}