// write a function to compare two string.
#in/clude<stdio.h>
#include<string.h>
void compare_string (char *str1,char* str2);
int main()
{
    char str1[ 20 ],str2[20] ;
    printf(" enter first string :");
    fgets(str1,20,stdin);
    printf("enter second string :");
    fgets(str2,20,stdin);
    compare_string(str1, str2);
    return 0;
}
void compare_string (char * str1 , char *str2)
{ 
    int comp = strcmp("str1" , "str2" );
    printf("%d",comp);
}