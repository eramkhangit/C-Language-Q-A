// write a program in C to find the sum of the series 1!/1 + 2!/2 + 3!/3 + 4!/4 + 5!/5 using the function .
int sum_of_series( int );
int fact (  int );
#include<stdio.h>
int main()
{   
  int num =5; 
  printf(" sum of series %d",sum_of_series( num ));
  return 0;
}
int sum_of_series( int N )
{
    int sum =0 ,n ;
    for(n=1; n<= N ; n++)
    sum = sum + fact(n) / n;
    return sum ;
}
int fact( int N )
{
    int fac = 1, n; 
    for( n =1 ; n<= N ; n++)
    fac = fac * n;
    n--;
    return fac ;
}