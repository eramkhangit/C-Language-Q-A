// write a program in c to count the total number of alphabates , digits and special characters in a string .
#include<stdio.h>
int main()
{   int i, count_digit =0 , count_alphabates = 0, count_specialchar = 0 ;
    char str[100];
    printf(" enter string :");
    fgets(str,100, stdin);
    for(i=0; str[i]; i++)
    {
        if(str[i] >= 48 && str[i] <= 57)
        count_digit++;
        if((str[i] >= 65 && str[i] <= 90 ) || (str[i]) >= 97 && str[i] <= 122)
        count_alphabates++;
        if((str[i] >= 32 && str[i] <= 47 ) || ( str[i] >= 58 && str[i] <= 64) || ( str[i] >= 91 && str[i] <= 96 ) || ( str[i] >= 123 && str[i] <= 125))
        count_specialchar++;
    }
    printf(" alphabates: %d , digit : %d and special character :%d ", count_alphabates,count_digit,count_specialchar);
    return 0;
}