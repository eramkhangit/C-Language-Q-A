//write a program to calculate the length of the string.( without using built-in function).
#include<stdio.h>
int main()
{ 
    char str[10] ;
    int i, count = 0 ;
    printf(" enter the string :");  
    gets(str);
    for( i=0 ; str[i]; i++)
   { count++;}
    printf("%d",count);
    return 0; 
}