#include<stdio.h>
#include<string.h>
int main()
{
    int i,s,j;
    char str[2][20];
    printf("enter:");
    for(i=0; i<2;i++)
    gets(str[i]);
    for(i=0; i<2; i++)
    {  s = 0;
        for(j=0;str[i][j]; j++)
       { 
        s = strlen( str [i]); 
       }
       printf("%d ",s);
    }

}