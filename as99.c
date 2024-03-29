#include<stdio.h>
int main ()
{
    int n ;
    printf("enter the no. n");
    scanf("%d",&n);
    switch(n%2==0)
    {
        case 1:
        printf("%d",n+1);
        break;
        case 0: printf("%d",n);
        break;
}
return 0;
}