//write a program in c to copy the elements of one array into another array .Take values from the user 
#include<stdio.h>
int main ()
{
    int i, j, a[4], b[4];
    printf("enter 4 element of  array :");
    for(i=0; i<4; i++)
    scanf("%d",&a[i]);
    for(i=0; i<4; i++)
    printf("a[%d] = %d\n",i,a[i]);
     for(j=0; j<4; j++)
     {
      b[j] = a[i];
    printf("b[%d]=%d\n ",j,  b[j] );
     }
}