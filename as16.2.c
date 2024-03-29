//write a program to calculate the sum of two matrices each of order 3*3.
#include<stdio.h>
int main ()
{
    int i = 0, j=0, k=0,a[3][3],b[3][3], c[3][3],sum =0;
    printf("enter the elements of first array :");
    for(i=0; i<3; i++)
    {
        for(k=0; k<3;k++)
        {
            scanf("%d",&a[i][k]);
        }
    }
    printf("enter the element of second array :");
    for(k=0; k<3 ; k++)
    {
        for(j=0; j<3; j++)
        {
            scanf("%d",&b[k][j]);
        }
    }
    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
       {  
         for(k=0; k<3; k++)
          {
              sum = sum + ( a[i][k]*b[k][j]);
          }
              c[i][j] = sum ;
              sum =0;
       } 
    }
    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {
            printf("%d\t",c[i][j]);
        }
        printf("\n");
    }
}