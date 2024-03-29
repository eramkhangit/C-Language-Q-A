// write a function to transform string into uppercase.
#include<stdio.h>
#include<string.h>
void transfer_uppercase(char *str);
int main()
{
    char str[20] ;
    printf("enter string :");
    fgets(str,20, stdin);
    transfer_uppercase(str);
    return 0;
}
void transfer_uppercase(char str[])
{ 
    printf("%s",strupr(str));
}