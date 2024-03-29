// write a function to find the smallest number from the given array  of any size (TSRS)
#include<stdio.h>
int smallest_num( int b[4]); 
int main()
{
    int a[4] , i;
    printf("enter array of size 4 : ");
    for(i=0; i<4 ;i++)
    scanf("%d",&a[i]);
    printf("smallest num is : %d ", smallest_num( a));
    return 0; 
}
int  smallest_num( int b[])
{
    int j, small = b[0];
    for(j=0; j<4; j++)
    {
        if( b[j]<small )
        small = b[j];
    }
    return small;
}

int smlllest_num(int b[4])
{
    return 0;
}
