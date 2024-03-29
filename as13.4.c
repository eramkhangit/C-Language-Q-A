// write a recursive fuction to calculate sum of squares of first n natural no.
#include<stdio.h>
int  sum_of_square_of_first_num(int );
int main()
{
    int n;
    printf("enter num :");
    scanf("%d",&n);
    sum_of_square_of_first_num(n);
    printf("%d",sum_of_square_of_first_num (n));
    return 0;
}
int sum_of_square_of_first_num(int N){
    if (N>=1)
    return (N*N+sum_of_square_of_first_num(N-1));
}