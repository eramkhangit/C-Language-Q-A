// write a function to find the first occurrence of adjacent duplicate values in the array .Function has to return the value of the element .
#include<stdio.h>
int duplicate_val( int b[]);
int main()
{
    int i, a[4];
    printf("enter 4 arrays : ");
    for(i=0; i<4; i++ )
    scanf("%d",&a[i]);
    printf(" duplicate value is :%d ",duplicate_val( a));
    return 0;
}
int duplicate_val( int b[])
{
    int j, dup = 0;
    for(j=0; j<4; j++)
    {
        if(b[j] == b[j+1])
       { dup =  b[j];
       return dup; 
       }
        else 
    return dup;
}
}