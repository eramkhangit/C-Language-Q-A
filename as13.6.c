// write a recursive function to calculate factorial of a given no.
#include<stdio.h>
int factorial_value(int );
int main ()
{
    int num ;
    printf("enter num :");
    scanf("%d",&num);
    printf("factorial value of given num  is : %d",factorial_value(num));
    return 0;
}
int factorial_value(int N)
{
    int F=1 ;
    if(N == 1 || N == 0)
    return N  ; 
    F = N * factorial_value(N-1);
    return F;
}