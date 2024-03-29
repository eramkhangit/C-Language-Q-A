// write a function in C to count a total number of duplicate elements in an array .
#include<stdio.h>
int num_of_duplicate_element(int b []);
int main()
{
    int i, a[ 5 ];
    printf("enter 5 arrays values:");
    for(i=0; i<5; i++)
    scanf("%d",&a[i]);
    printf("num of duplicate element: %d " ,num_of_duplicate_element(a) );
    return 0;
}
int num_of_duplicate_element( int b[])
{
    int j,i,count = 0; 
    for(j=0; j<5; j++)
    { 
        for(i=j+1; i<5; i++)
       {
           if(b[j] == b[i])
             {
               count++;
             }   
       }
    }
     return count; 
}
