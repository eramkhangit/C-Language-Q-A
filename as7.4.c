#include<stdio.h>
int main()
{
    int A ,a,b,i=1;
    printf("enter two no. a b");
    scanf("%d%d",&a,&b);
    for(A=(a<b)?a:b;A>=i;i++)
    {
        if(a%i==0&& b%i==0)
        printf("hcf is %d",i);
        break;
    }
    return 0;
}