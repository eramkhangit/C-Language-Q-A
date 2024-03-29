// write a program to sort 10 city names stored in two dimensional arrays , taken from the user.
#include<stdio.h>
#include<string.h>
int main()
{
    char str[10][20], temp[20];
    int i,j;
    printf("enter 10 city name:");
    for(i=0 ; i<10; i++)
      gets(str[i]); // we can't use fgets() because when we use it then we need to manage '\0'. so that we use gets().
    for(i=0; i<10; i++)
    {   
         for(j=i+1; j<10; j++)
         {   
           if(strcmp(str[i] , str[j]) > 0 )
           {
            strcpy( temp , str[i]);
            strcpy( str[i] , str[j] );
            strcpy( str[j] , temp);
           }
         } 
    }
    printf("sorted string name are:");
    for(i=0; i<10; i++)
    {
       printf("%s ",str[i]);
    }
    return 0;
}