// write a function in c to count the frequency of each elements in an array .
#include<stdio.h>
void freaquency_count( int a[],int , int freq[] );
int main()
{
    int b[5] = { 1, 2,2,2,4};
    int new[10] ={ 0}; 
    freaquency_count( b,5,new);
    return 0;
}
void freaquency_count( int a[ ], int n,int freq[])
{
    int  i; 
     for(i=0; i<n; i++)
     {
        freq[a[i]]++;
     }
     for(i=0; i<n; i++)
     {  if (freq[i] != 0)
         printf(" a[%d] = %d\n ",i, freq[i]);
     }
}