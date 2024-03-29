// write a fucntion to find the greatest num from the given array of any size (TSRS)
#include<stdio.h>
int  greatest_num(int b[4] );
int main()
{
    int a[4], i ;
    printf("enter 4 array  :");
    for(i=0; i<4; i++)
    scanf("%d",&a[i] );
    printf(" greatest number of array is :%d ", greatest_num( a));
    return 0;
}
int  greatest_num( int b[] )
{
    int j,max = b[0];
    for(j=0; j<4; j++)
{
    if( b[j] > max ) 
    max = b[j];
}
return max ;
}
