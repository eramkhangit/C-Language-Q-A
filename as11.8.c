// write a fuction to print PASCAL triangle (TSRN).
void pascal_triangle(int);
int fact ( int );
#include<stdio.h>
int main()
{ int n ;
   printf(" enter number of rows :");
  scanf("%d",&n);
 pascal_triangle(n);
 return 0;   
}
int fact(int N )
{
    int i,fact = 1;
    for(i = 1; i<= N ; i++)
    fact = fact * i;
    return fact ;
}
void pascal_triangle(int N )
{
  int i,a, j;
  for(i=0; i< N ; i++)
  {
    for(j=0; j<= (N -i -2) ; j++) 
     printf(" ");
     for( j=0; j <= i ;j++)
    printf("%d ",(fact (i) /( fact (j) * fact ( i- j))));
     printf("\n");
  }
   printf("\n");
}