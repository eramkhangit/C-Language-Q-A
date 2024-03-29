#include<stdio.h>
int main()
{
    int A ,a,b,n=2;
    printf("enter two no. a and b ");
    scanf("%d%d",&a,&b);
    A= (a<b)?a:b;
    for(n=2;n<=A;n++)
    {
    {
        if(a%n==0 && b%n==0)
        break;
    }
    if((n-1)==A)
   {
         printf(" yes");  
    }
    }
    return 0;
}