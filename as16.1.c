// write a program to calculate sum of two matricies of 3*3 order /
#include<stdio.h>
int main ()
{
    int a[3][3] = { 1,2,3,2,3,1,4,5,6,};
    int  b[3][3] ={ 1,1,1,1,1,1,1,1,1} ;
    int i, j, c[3][3] , sum =0;
    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {
            c[i][j] =  (a[i][j]+b[i][j]);
        }
    }
    printf(" sum of two matrix :\n");
    for(i=0;i<3; i++)
    {   for(j=0; j<3; j++)
      {
        printf("%d\t",c[i][j]);
      } 
      printf("\n");
    }
}