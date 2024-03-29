// write a program to sort elements of an array of size 10.take array value from the user 
#include<stdio.h>
int main()
{
    int i,j, a[10], swap=0  ;
    printf("enter 10 array :");
    for(i=0; i<10; i++)
    scanf("%d",&a[i]);   
 for(i=0; i<10; i++)
 {
     for(j=i+1; j<10; j++)
      {
        if(a[i]>a[j])
        {
        swap = a[j];
        a[j] =a[i];
        a[i] = swap;
        }
      } 
 }
       for(i=0; i<10;i++)
        printf("  %d  ",a[i]);    
}
