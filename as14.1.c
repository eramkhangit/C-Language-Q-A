// write a program to calculate sum of numbers stored in array of size 10 . take array value from user .
#include<stdio.h>
int main ()
{
    int a[10], i , sum = 0;
    printf("enter 10 arrays :");
    for(i = 0; i <10; i++)
    {
    scanf("%d",&a[i]);
    printf("\n a[%d] is = %d\n ",i, a[i]);
    sum = sum + a[i];
    }
    printf("%d is sum of a[10]",sum);
}