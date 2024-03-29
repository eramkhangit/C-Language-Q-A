// write a recursive function to print first odd natural number .
#include<stdio.h>
 void print_odd_natural_no(int );
 int main()
 {
    int num;
    printf("enter num:");
    scanf("%d",&num);
    print_odd_natural_no(num);
    return 0;
 }
 void print_odd_natural_no(int N)
 {
    if(N>0)
{
    if(N%2 == 0)
      N--;
    print_odd_natural_no(N-2);
    printf("%d\n",N);
        }
 }