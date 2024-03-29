// write a recursive function to print sum of digit of given no.
#include<stdio.h>
int sum_of_digit(int );
int main()
{
    int num;
    printf("enter num :");
    scanf("%d",&num);
    printf("sum of digit of given no :%d",sum_of_digit(num));
    return 0;
}
int sum_of_digit(int N)
{
    int sum = 0, rem ,a;
    a = N;
    while(N)
    {
       sum_of_digit(N/=10);
       rem = a%10;
       sum = sum + rem;
       a/=10;
    }
    return sum ;
}