// write a program in c to copy one string in another string .
#include<stdio.h>
int main()
{
   
    char str[19], str2[19];
    printf(" enter string :");
    fgets(str , 19, stdin);
    printf(" original sting : %s",str);
    for( int i=0; str[i]; i++)
    {
      str2[i] = str[i] ;
    }
    printf(" copied string : %s",str2);
    return 0;
}