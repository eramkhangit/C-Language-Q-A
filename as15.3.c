// write a function to sort an array  of any size (TSRN )
#include<stdio.h>
void sort_array(int b[]);
int main()
{
    int i, a[5];
    printf("enter 5 arrays");
    for(i=0; i<5; i++)
    scanf("%d",&a[i]);
    sort_array(a);
    return 0;
}
void sort_array(int b[])
{
    int i,j,swap =0;
    for(i=0; i<5; i++)
    {
        for(j=i+1; j<5; j++)
         if(b[i]>b[j])
        {
        swap = b[j];
        b[j] =b[i];
        b[i] = swap;
        }       
    }
    for(i=0; i<5; i++)
     printf("  %d  ",b[i]); 
}