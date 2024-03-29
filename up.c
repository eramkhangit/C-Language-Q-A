#include<stdio.h>
int main()
{

    char a;
    printf("enter the char");
    scanf("%c",&a);
   if(a>=65&&a<=90)
     printf("upper");
     else
     {
    if(a>=97&&a<=122)
     printf("lower");}
     
     {
      if(a>=48&&a<=57)
      printf("digits");
     
     else
      printf("special char");
     }
     return 0;
}