// write a program in c to accept a matrix and determine whethear it is a sparse matrix .
#include<stdio.h>
int main()
{
    int i,j;
    int a[4][5] = 
    { 
        { 1,0,0,3,4},
        { 2,3,5,0,0},
        { 0,0,0,0,0,},
        {0,0,0,0,0}
   }  ,count = 0;
   for(i=0; i<4; i++)
   {
    for(j=0; j<5; j++)
    {
        if (count>0)
        count++;
    }
   }
    if(count < (4*5)/2 )
    printf("sparse matrix ");
    else 
    printf(" dense matrix ");
}