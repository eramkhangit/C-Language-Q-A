//write a recursive function to calculate sum of first N even natural no.
#include<stdio.h>
int  sum_of_square_of_first_num(int );
int main()
{
    int num;
    printf("enter num :");
    scanf("%d",&num);
    printf("%d",sum_of_square_of_first_num (num));
    return 0;
}
int sum_of_square_of_first_num(int N)
{

    if (N == 1)
    return 2;
    return (2*N+sum_of_square_of_first_num(N-1));
   
}