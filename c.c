#include<stdio.h>
int main()
{
    int a,b, c,D ;
    printf("enter the no.");
     scanf("%d%d",&a,&b,&c);
     D = b^2 - 4*a*c;
     if(D=0)
     printf("equal real");
     else
     {if(D>0)
     printf("real distinct");
     else
     printf("imaginary");
     }
     return 0;
}