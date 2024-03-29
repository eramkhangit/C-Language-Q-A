#include<stdio.h>
int main()
{
    int x;
    printf("enter year x");
    scanf("%d",&x);
    switch(x%100==0)
    {
        case 1: switch(x%400==0)
        {
            case 1:printf("leap");
            break;
            case 0:printf(" leap not");
        }
        case 0:switch(x%4==0)
        {
            case 1: printf("leap year");
            break;
             case 0:printf("not leap");
             break;
        }
    }
    return 0;
}