// write a program to find the greatest number stored in array of size 10 .take array values from user .
#include<stdio.h>
int main()
{
    int i , a[10], max = a[0];
    printf("enter array of size 10");
    for(i=0; i<10; i++)
    scanf("%d",&a[i]);
    for(i=0; i<10; i++)
    {
        if(a[i]>max)
        max = a[i];
    }
    printf("greatest array : %d", max);
}