// write a program to reverse the string .
#include<stdio.h>
int main()
{   int i,j;
    char str[10];
    printf(" enter string :");
    fgets(str,10,stdin);
    printf(" reversed of string :");
    for( i= 10-1; i>=0 ; i--)     
     printf("%c",str[i]);
}