//write a function to print first N terms of fibonacci series (TSRN )
#include<stdio.h>
void fibonacci_term(int );
int main ()
{
    int term ;
    printf("enter term:");
    scanf("%d",&term);
    fibonacci_term(term );
    return 0;
}
void fibonacci_term( int T)
{
   int  i , a = -1, b = 1, c = 0;
   for(i = 1; i <= T ; i++)
   {
    c = a +b;
    a =b;
    b =c;
    printf("%d\n", c);
   }
}
