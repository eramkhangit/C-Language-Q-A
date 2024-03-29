// write a recursive funtion to print first N odd natural no. in reverse order 
#include<stdio.h>
 void print_odd_natural_no(int);
 int main()
 {
    int num ;
    printf("enter num :");
    scanf("%d",&num);
    print_odd_natural_no(num);
    return 0;
 }
void print_odd_natural_no(int N)
 {
    if(N == 0)
      return ;
    printf("%d\n",2*N-1);
    print_odd_natural_no(N-1);
   }