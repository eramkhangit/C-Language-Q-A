#include<stdio.h>
int main()
{
    int a,b,c;
    printf("enter the no.");
    scanf("%d%d%d",&a,&b,&c);
    if((a+b)>=c)
    printf("valid tri");
    else
    printf("not valid");
    return 0;
}