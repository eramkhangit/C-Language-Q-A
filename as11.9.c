// write a program in C to find the square of any number using the function .
int square( int );
#include<stdio.h>
int main()
{
    int n;
    printf("enter number :");
    scanf("%d",&n);
    printf(" square of number is : %d",square( n ));
    return 0;
}
int square(int N)
{
    return N*N;
}