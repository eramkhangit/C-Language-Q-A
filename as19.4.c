//write a program to search a string in the list of strings .
#include<stdio.h>
#include<string.h>
int main()
{
    char str[5][20], temp[20];
    int i, found = 0 ;
    printf("enter 5 strings name for search:\n");
    for(i=0 ; i<5; i++)
      gets(str[i]);  
      printf("write name of search string :\n"); 
      gets(temp);
    for(i=0; i<5; i++)
    {
           if(strcmp ( temp , str[i] ) == 0 )
            found++;
            break;
    }
    if( found == 0)
    printf(" %s is not founded",temp);
    else
    printf(" %s is founded",temp);
    return 0;
}