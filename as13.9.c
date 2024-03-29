//write a recursive fuction to count no. of digit in a given number .
#include<stdio.h>
int count_digit(int ,int);
int main()
{
    int num, c=0;
    printf("enter the num:");
    scanf("%d",&num);
    count_digit(num, 0);
    return 0;
}
int count_digit(int N,  int count)
{
    if(N )
    
         count_digit(N/10 ,count + 1);       
    else
        return printf(" count digit is :%d ", count);
}
