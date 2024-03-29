//write a recursive funtion to print first N natural number in reverse order .
#include<stdio.h>
 void print_nat_no(int );
 int main()
 {
    int num;
    printf("enter num:");
    scanf("%d",&num);
    print_nat_no(num);
    return 0;
 }
 void print_nat_no(int N)
 {
    if(N>0)
{   
   printf(" %d\n",N);
}
    print_nat_no(N-1);
   }