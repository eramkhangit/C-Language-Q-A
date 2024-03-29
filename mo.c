#include<stdio.h>
int main()
{
    int n;
    printf("enter month");
    scanf("%d",&n);
    if(n==1||n==3||n==5||n==7||n==8||n==8||n==12)
    printf("31 days");
    else
    if(n==11||n==4||n==6||n==9)
    printf("30 days");
    else
    if(n==2)
    printf("28/29days");
    else
    printf("invalid month");
        return 0;}