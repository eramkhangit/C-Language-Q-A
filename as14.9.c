//write a program in c to read a n number of values in array and display it in reverse order .Take array values from user 
#include<stdio.h>
int main()
{
    int i,n, a[4];
    printf("enter  n array :"); 
    scanf("%d",&n);
    printf("enter n values of array:");
    for(i=0; i<n ; i++)
    scanf("%d",&a[i]); 
    for (i=n-1;i>=0;i--)  
    printf("%d ",a[i]);
}
 