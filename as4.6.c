#include<stdio.h>
int main()
{
    int n ,s=0,a=1;
    printf("enter natural no.n ");
    scanf("%d",&n);
    for(a=1;a<=n;a++)
    {
        s=s+a*a;
    }
    printf("%d",s);
    return 0;
}