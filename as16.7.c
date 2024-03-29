//write a program to print or display the lower triangular of a given matrix .
#include<stdio.h>
int main ()
{
    int i, j;
    int a[3][3]={ 1,2,3,4,5,6,7,8,9};
     printf(" lower triangular is :");
    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {
            if (j>i)
            printf(" %d ",a[i][j]);
        }
    }
}