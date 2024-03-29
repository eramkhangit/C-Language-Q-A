// Write a function to swap strings of two char arrays of calling function (TSRS).
#include<stdio.h>
#include<string.h>
void swap_string ( char * , char * );
int main()
{
    char str1[10] , str2[10];
    printf("enter str1 : ");
    gets( str1);
    printf("enter str2 : ");
    gets( str2);
    swap_string( str1, str2  );
    printf(" str1 = %s and str2 = %s",str1,str2);
    return 0;

}

void swap_string(char *s1,  char *s2  )
{
    char temp [10 ]  ;
 strcpy(temp , s1 );
    strcpy( s1 , s2 ) ;
    strcpy (  s2 , temp );
   
}