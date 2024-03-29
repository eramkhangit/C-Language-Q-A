// write a program to find second largest in array .take array values from user 
#include<stdio.h>
int main()
{
    int i,j, a[4], swap=0  ;
    printf("enter 4 array :");
    for(i=0; i<4; i++)
    scanf("%d",&a[i]);   
 for(i=0; i<4; i++)
 {
     for(j=i+1; j<4; j++)
    {
        if(a[i]>a[j])
        {
        swap = a[j];
        a[j] =a[i];
        a[i] = swap;
        }
    }  
printf(" \nshorted array is :%d ",a[i]);
 }
printf(" \nsecond largest number is : %d",a[2]);
}