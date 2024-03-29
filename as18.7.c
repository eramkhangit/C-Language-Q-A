// write a function to check whether a given string is palindrome or not .
#include <stdio.h>
#include <string.h>
void check_palindron(char * str,int j);
int main()
{    
    int j;
    char str[10];
    printf("enter string :");
    fgets(str, 10, stdin);
    j = strlen(str) - 2;// 2 is because of we enter data with gets function.
    check_palindron(str,j);
    return 0;
}
void check_palindron(char str [], int j)
{  
    int i;
        for (i = 0; str[i]; i++)
    {
        while(j >= i )
        {
                if (str[i] != str[j])
                   { 
                    printf(" \n%s is  not palindrom\n", str);
                    break;
                   }
                   i++; j--;
        }
    }    
     if( i > j)
        printf("%s is palindrom\n", str);  
 }
 //check again 
 