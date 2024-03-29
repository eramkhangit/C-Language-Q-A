//write a recursive function to print binary of given decimal number.
#include<stdio.h>
int sum_of_square_of_first_num(int );
int main()
{
    int n;
    printf("enter number");
    scanf("%d",&n);
    sum_of_square_of_first_num(n);
    printf("%d\n",sum_of_square_of_first_num(n));
    return 0;
}
int sum_of_square_of_first_num(int N)
{
    int r=0,s;
    if(N == 1)
    return 1;
    r = N;
    s=r%2;
    s =s +10*sum_of_square_of_first_num(N/=2);
    return s ;
}