// write a function to  check whether a given string is an alphanumeric string or not .
#include <stdio.h>
void check_alphanumeric(char *str);
int main()
{
  char str[20];
  printf("enter string :");
  fgets(str, 20, stdin);
  check_alphanumeric(str);
  return 0;
}
void check_alphanumeric(char str [])
{
  int A = 0, B = 0, i;
  for (i = 0; str[i]; i++)
  {
    if ((str[i] >= 97 && str[i] <= 122) || (str[i] >= 65 && str[i] <= 90))
      B = 1;
    if ((str[i] >= 48 && str[i] <= 57))
      A = 1;
  }
  if (A == 1 && B == 1)
    printf(" %s is alphanumeric string ", str);
  else
    printf(" %s is  non alphanumeric string ", str);
}