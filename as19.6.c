// write a program to print the strings which are palindrome in the list of strings .
#include <stdio.h>
#include <string.h>
int check_palindrom(char * );
int main()
{
  int i, n;
  char str[5][20];
  printf("enter number of strings list :");
  scanf("%d", &n);
  printf("enter %d strings:\n", n);
  for (i = 0; i < n; i++)
  {
    printf("%d. ",( i+1));
   scanf("%s",&str[i]);
  }
  printf("palindron strings:\n");
  for (i = 0; i < n; i++)
  {
    if (check_palindrom(str[i]))
      printf("%d. %s\n", ( i + 1), str[i]);
  }
  return 0;
}
int check_palindrom(char * str1)
{
  char temp[50];
  strcpy( temp , str1 );
  strrev(temp); 

  if(strcmp( temp , str1 ) == 0)
  return 1;
  else
  return 0;

}