//write a recursive function to calculate sum of first N odd natural number . 
#include<stdio.h>
int  sum_of_square_of_first_num(int );
int main()
{
    int n;
    printf("enter");
    scanf("%d",&n);
    sum_of_square_of_first_num(n);
    printf("%d",sum_of_square_of_first_num (n));
    return 0;
}
int sum_of_square_of_first_num(int N)
{
    int s=0;
    if (N>=1)
    s=2*N-1+sum_of_square_of_first_num(N-1);
    return s;
}