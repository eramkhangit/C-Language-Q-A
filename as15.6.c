// write a function in C to read n number of values in an array and display it in reverse order .
#include<stdio.h>
void reverse_array( int b[ ],int N);
int main()
{
    int i,a[ 4];
    printf("enter 4 arrays : ");
    for(i=0; i<4 ; i++ )
    scanf("%d",&a[i]);
    reverse_array( a,4);
    return 0; 
}
void reverse_array( int b[],int N)
{
    int j;
    printf(" reversed array is :");
    for(j=N-1; j>=0 ; j--)
    {
       printf(" %d ",b[j]);
    }
}