//write a program in c to find the row with maximum number of 1s.
#include<stdio.h>
int main()
{
    int i,j;
    int a[3][4] = 
    { 
      { 1,1,1,1},
      {2,3,4,1},
      { 0,1,0,1}
    },max = 0,sum = 0;
    for(i=0; i<3; i++)
    {   sum = 0; 
        for(j=0; j<4; j++)
        {
            if (a[i][j] == 1)
               sum = a[i][j] + sum ;
        }
          if ( sum > max)
           max = sum ;
    }
       printf("row with maximum num of 1s : %d", max);
}