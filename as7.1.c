#include<stdio.h>
int main()
{
    int i =1,c=0,n, a=-1,b=1;
    printf("enter the nth term n");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        c=a+b;
        a=b;
        b=c;
    
    }
    printf("%d\n",c);
    return 0;
}