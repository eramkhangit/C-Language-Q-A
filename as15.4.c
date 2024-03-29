// write a function to rotate an array by n posintion in d direction . the d is an indicative value for left or right . 
#include<stdio.h>
 void rotate_an_array( int b[ ],int N,int d);
int main()
{
    int i,  D, a[4] ;
    printf(" enter the elements :");
    for(i=0; i<4; i++)
    scanf("%d",&a[i]);
    printf(" enter no. of rotation ");
    scanf("%d",&D);
    rotate_an_array( a ,4,D);
    return 0;
} 
void rotate_an_array(int b[ ],int N, int d)
{
    int j, i, temp  ; 
    for(i=0; i<d; i++)
    {  temp = b[0];
      for(j=0; j<N-1 ; j++)
      {
        b[j] = b[j+1];
      }
       b[N-1] = temp ;
    }
    for(i=0; i<N; i++)
    printf("%d ", b[i]);
}
