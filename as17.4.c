// write a program to convert a given string in uppercase .
#include<stdio.h>
int main()
{ 
    char a[100];
    printf("enter string: ");
    fgets(a , 100,stdin);
    for( int i=0; a[i] ; i++)
    {  if(a[i] >= 'a' && a[i] <= 'z' ) 
        a[i] -= 32;
    } 
    printf("uppe case  is : %s ",a);
    return 0;
}