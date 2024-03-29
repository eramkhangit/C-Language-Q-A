// write a program to convert a given string into lowercase.
#include<stdio.h>
int main()
{   char a[10];
    printf("enter upper case  string: ");
    fgets(a ,10,stdin);
    for( int i=0; a[i] ; i++)
    {  if(a[i] >= 'A' && a[i] <= 'Z' ) 
        a[i] += 32;
    } 
    printf(" lower case : %s ",a);
    return 0;

}