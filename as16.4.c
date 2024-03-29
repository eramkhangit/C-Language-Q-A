//write a program to find the sum of right diagonal of a given matrix.
#include<stdio.h>
int main ()
{
    int i,j,sum =0;
    int a[3][3] = { 1,2,3,0,0,1,1,2,1};
    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {
            if(i == j)
            sum = sum + a[i][j];
        }
    }
    printf(" sum of right diagonal of matrix : %d",sum);
}