#include<stdio.h>
int main()
{
    int n ,a=1;
    printf("enter natural no.n ");
    scanf("%d",&n);
    for(n=n;n!=0;n--)
    {
        a=a*n;
    }
    printf("%d",a);
    return 0;
}