//write a c program to sort a string array in ascending order.
#include<stdio.h>
int main()
{
    int i,j,swap=0;
    char a[20] ;
     printf(" enter string :");
     fgets(a,20,stdin);
     printf(" ascended  order:\n");
    for(i=0; a[i]; i++)
    {
        for(j=i+1; a[j]; j++)
        {
            if( a[i] >= a[j])
            {
                swap = a[j];
                a[j] = a[i];
                a[i] = swap;
            }
        }printf(" %c",a[i]);
    } 
    
}