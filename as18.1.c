// write a function to calculate length of the string .
#include<stdio.h>
#include<string.h>
int calculate_stringLen(char * l);
int main()
{
    char l[100];
    printf("enter string :");
    fgets(l,100,stdin);
    printf(" length of string : %d",calculate_stringLen(l) );
    return 0;
}
int calculate_stringLen(char *l)
{
  int  L =   strlen(l);
  return L;
}