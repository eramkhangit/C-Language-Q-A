// write a recursive function to print first N natural no.
#include<stdio.h>
 void print_natural_no(int );
 int main()
 {
    int num;
    printf("enter num:");
    scanf("%d",&num);
    print_natural_no(num);
    return 0;
 }
 void print_natural_no(int N)
 {
    if(N>0)
{
    print_natural_no(N-1);
    printf("%d\n",N);
        }
 }