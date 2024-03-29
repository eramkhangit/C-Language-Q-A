// write a program in c to find sum of rows and columns of a matrix.
#include<stdio.h>
int main()
{
    int i,j, sum_of_row =0,sum_of_column = 0;
    int a[2][3] ={ 1,2,3,3,4,5};
    for(i=0; i<2; i++)
    {
        for(j=0;j<3; j++)
        {
            sum_of_row = sum_of_row +a[i][j];
        }
    
       printf("sum of row %d is : %d \n", i,sum_of_row);
       sum_of_row = 0;
    }
    for(j=0; j<3; j++)
    {
        for(i=0; i<2; i++)        
        {
            sum_of_column = sum_of_column +a[i][j];
        }
    
      printf(" sum of column %d is : %d\n",j,sum_of_column);
      sum_of_column = 0;
    }
}
