// write a program to count the occurrance of a given character in a given string .
#include<stdio.h>
int main()
{
    int count =0 ,i;
    char str[20] , temp ;
    printf(" enter the string :");
    gets(str);
    printf(" enter the occurrance character :");
    scanf("%c",&temp);
    for(i=0; str[i]; i++)
    {    
        if (str[i] == temp)
        count++;
    }
    printf(" no. of occuranced character :  %d",count);
    return 0;
}