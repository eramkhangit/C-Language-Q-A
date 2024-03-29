// write a recursive function to print sum of first natural no. 
#include<stdio.h>
int sum_naturalNo(int );
int main()
{
    int num;
    printf("enter num :");
    scanf("%d",&num);
    printf("sum of first natural no. :%d",sum_naturalNo(num));
    return 0;
}
int sum_naturalNo(int N)
{
    int s = 0;
    if(N > 0)
    {
        s = N + sum_naturalNo(N-1);
    }
    return s;
}