#include<stdio.h>
int main()
{
    int n;
    printf("enter the year");
    scanf("%d",&n);
    if(n%100==0)
    {if(n%400)
    printf("not leap");
    else
    printf("leap");}
    else
   { if(n%4)
    printf("not");
    else
    printf("leap");}
}