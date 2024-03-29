// write a recursive function to print first N terms of fibonacci series.
#include<stdio.h>
void fibonacci_term(int, int , int );
int main()
{
    int term ;
    printf("enter number of terms :");
    scanf("%d",&term); 
    fibonacci_term(term,-1,1);
    return 0;
 }
    void fibonacci_term(int N,int a, int b )
     {        
        if(N > 0)
     {
      
        printf("%d \n",a +b);    
         fibonacci_term(N-1, b,  a+b ); 
     }
     }