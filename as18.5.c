// write a function to transfer a string into lowercase.
#include<stdio.h>
void transfer_lowercase( char *r);
int main()
{
    char  r[10];
   printf("enter stirng:");
   fgets(r,10,stdin);
   transfer_lowercase(r);
   return 0;
}
void transfer_lowercase(char r[])
{  
   for (  int i = 0; r[i]; i++)
   {
    if(r[i] >= 65 && r[i] <= 90 )
    r[i] += 32 ;
   }
    printf("transfered string is : %s",r);
}