// write a program to count vowels in a given string .
#include<stdio.h>
int main()
{
    int i,count =0;
    char str[20] ;
    printf(" enter the string :");
   fgets(str , 10, stdin);
    for(i=0; str[i]; i++)
  {
    if(  str[i] == 'a' || str[i] == 'i'||str[i] == 'o'|| str[i] =='u'|| str[i] =='e' )
    count++;
  }
   printf(" no. of vowels : %d",count++);
    return 0;
}