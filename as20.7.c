// Write a program to count the number of vowels and consonants in a string using pointer.
#include <stdio.h>
#include <string.h>
void count_string(char *, int);
int main()
{
    char str[20];
    printf("input string : ");
    gets(str);
    count_string(str, 20);
    return 0;
}
void count_string(char *string, int size)
{
    int vowel = 0, consonant = 0, i;
    for (i = 0; string[i] ; i++)
    {
        if (string[i] == 'a' || string[i] == 'e' || string[i] == 'i' || string[i] == 'o' || string[i] == 'u')

            vowel++;

        else
            consonant++;
    }
    printf("vowels : %d and consonants : %d  ", vowel, consonant);
}