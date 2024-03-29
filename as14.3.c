// write a program to calculate sum of all even num. and sum of all odd numbers which are stored in an array of size 10 .take array values from user .
#include<stdio.h>
int main()
{
    int i , a[10],EvenSum = 0, OddSum = 0 ;
    printf("enter array of size 10:");
    for(i=0; i<10; i++)
    {
        scanf("%d",&a[i]);
        if(a[i]%2 == 0)
        EvenSum += a[i];
        else
        OddSum += a[i];
    }
    printf(" sum of even num = %d and sum of odd num =%d",EvenSum , OddSum );
}