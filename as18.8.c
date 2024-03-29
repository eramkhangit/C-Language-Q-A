// write a function to count words in a given string.
#include <stdio.h>
#include <string.h>
int count_word(char * str);
int main()
{
    char str[100];
    printf("enter string :");
    fgets(str, 100, stdin);
    printf("number of words are : %d", count_word(str));
    return 0;
}
int count_word(char str[])
{
    int i, count = 0;
    for (i = 0; str[i]; i++)
    {
        (str[i] == ' ' && str[i + 1] != ' ') ? count++ : count;
    }
    return (count + 1);
}