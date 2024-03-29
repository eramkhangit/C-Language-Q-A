#include<stdio.h>
int main()
{
    int n ,a;
    printf("enter natural no.n ");
    scanf("%d",&n);
    a=n-1;
    while(a>=0)
    {
       {
        if(n%2||n%a!=0)
       printf("non");
       else
       printf("prime"); 
       
    }
    a--;
    }
   
    return 0;
}