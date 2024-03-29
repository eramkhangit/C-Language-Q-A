// write a program to read and display a 2D array of string in C language.
#include<stdio.h>
int main()
{
   int i, j;
   char str[3][20];
   printf("enter 5 strings:");
   for(i=0;i<5; i++)
   {
        fgets(str[i] , 20, stdin);
           printf(" display string : %s", str[i]);
        }
    }
