// write a program in c to find the frequency of character.
#include<stdio.h>
int main()
{
    int i , freq[150]={0};
    char str[20]  ;
    printf("enter string :");
    gets(str);
   for(i=0;str[i];i++)
    {
        freq[ str[i]]++;

    }
    printf(" frequency of string :");
    for(i=0; i<150; i++)
    {    
        if(freq[i] != 0)
        printf(" %c = %d",i,freq[i ] );
    }
}
