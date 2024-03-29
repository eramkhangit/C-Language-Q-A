// Suppose we have a list of email addresses ,check whether all email addresses have '@' in it . Print the odd email out .
#include <stdio.h>
#include <string.h>
int main()
{
  char str[5][20];
  int i,j;
  printf("enter email addresses :\n");
  for (i = 0; i < 3; i++)
    gets(str[i]);
  printf("valid email id \n");
  for (i = 0; i < 3; i++)
  { 
    if ( strchr(str[i], '@') != 0 )
    { 
     printf("%s ", str[i]);
    }
  }
  return 0;//correct but not run 
}