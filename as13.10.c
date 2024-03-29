// write a program to calculate the power of any number using recursion .
#include<stdio.h>
int power_num(int ,int);
int main()
{
    int num1, num2;
    printf("enter num1 and num2 :");
    scanf("%d%d",&num1,&num2);
    printf(" power of any number is : %d", power_num(num1,num2));
    return 0;
}
int power_num(int n1, int n2)
{
    if( n2 > 0)
    return n1*power_num(n1 , n2 -1);
    return 1;
}