//write a function to find the next prime no. of given no. (TSRS)
#include<stdio.h>
int pribtw(int );
int main()
{
    int a ;
    printf("enter a no. a");
    scanf("%d",&a);
    pribtw(a);
    printf("%d is next prime number  ",pribtw(a));
    return 0;
}
 int pribtw(int n)
{
    int x=2 ;
    for(n=n+1; ; n++)
{
    for(x=2;x<=n;x++)
    {
        if(n%x==0)
        break;
    }
       if(n==x)
       return n;
}
}