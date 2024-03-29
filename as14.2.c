// write a program to calculate the average of numbers stored in an array of size 10 . take array values from user .
#include<stdio.h>
int main()
{
    int i , sum = 0, a[10];
    float avg;
    printf("enter array of size 10 :");
    for(i = 0; i<10 ; i++)
    {
        scanf("%d",&a[i]);
        sum = sum + a[i];
    }
    avg = sum/ 10.0;
    printf("%.2f is avg ", avg );
}