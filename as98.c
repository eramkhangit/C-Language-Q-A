#include<stdio.h>
int main()
{
    int  n;
    printf("enter no. n");
    scanf("%d",&n);
    switch(n>=0)
    {
        case 1:n =n*-1;
        printf("n is %d",n);
        break;
        case 0:n =n*-1;
        printf("n is %d",n);
        break;
}
return 0;
}