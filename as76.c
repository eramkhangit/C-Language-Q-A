#include<stdio.h>
int main()
{
    int n ,a=0;
    printf("enter natural no.n ");
    scanf("%d",&n);
    while(n!=0)
    {
     a=a+1;
     n/=10;
    }
    printf("%d",a);
    return 0;
}