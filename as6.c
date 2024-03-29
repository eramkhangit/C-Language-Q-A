#include<stdio.h>
int main()
{
    int n=1 ,s=0,a;
    printf("enter a odd no.");
    scanf("%d",&a);
    for(n=1;n<=a;n+=2)
    {
        s=s+n; 
    }
    printf("%d",s);
    return 0;
}