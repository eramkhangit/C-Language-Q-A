// write a recursive function to print first N even natural no. in reverse order .
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
void even_nat_no(int N)
{
    if(N == 0)
    return ;
    printf("%d\n",2*N);
     even_nat_no(N-1);
}