// write a program in c to find the sum of left diagonal of a matrix.
#include<stdio.h>
int main ()
{
    int i,j, sum =0; 
    int a[3][3] ={ 1,2,3,0,0,1,1,2,1};
    
        for(j=2, i=0;  i<3,j>=0;i++, j--)
        {
            if( i+ j || j>i )
            sum =sum + a[i][j];
        }

    printf(" sum of left diagonal :%d",sum);
}