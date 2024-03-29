// write a function in C to print all unique elements in an array . 
#include<stdio.h>
void all_unique_elements(int b[]);
int main()
{
    int i, a[5];
    printf("enter 5 array elements :");
    for(i=0; i<5; i++)
    scanf("%d",&a[i]);
    all_unique_elements(a);
    return 0;
}
void all_unique_elements( int b[])
{
    int i,j ,count ;
    for(i=0; i<5; i++)
    {    count =0; 
        for(j=0 ; j<5; j++)
        {
            if(i != j)
         {
          if( b[i] == b[j] )  
           count++;
         }
        }
         if(count == 0)
         printf("%d ",b[i]);
    }
}