// write a function to find the repeated character in a given string .
void repeated_char(char b[]);
#include<stdio.h>
#include<string.h>
int main()
{
    char str[100];
    printf("enter string :");
    fgets(str, 100, stdin);
    repeated_char( str);
    return 0;
}
void repeated_char(char b[])
{   int j,i=0;
    char temp;
    for(i=0; b[i]; i++)
    {   temp = '0';
         for(j= i+1; b[j] ; j++ )
          if (b[j] == b[i])
         {
          temp = b[i];
           printf("%c ", temp);
         }
    }
}