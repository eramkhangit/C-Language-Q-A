// Write a function to swap values of two in variables of calling function .(TSRS).
#include<stdio.h>
void swap_var( int * ,int * );
int main()
{
    int var1 ,var2;
     printf("enter var1 and var2 : ");
    scanf("%d%d", &var1 ,&var2 );
    swap_var( &var1 , &var2 );
    printf(" var1 = %d , var2 = %d",var1,var2);
    return 0;
}
void swap_var(int *v1, int *v2 )
{
    int s = 0;
    s = *v1 ;
    *v1 = *v2 ;
   *v2 = s ;
}