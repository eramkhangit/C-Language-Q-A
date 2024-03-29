// write  a recursive function to print first N eve natural no. 
#include<stdio.h>
void even_nat_no(int);
int main()
{
    int num;
    printf("enter num:");
    scanf("%d",&num);
    even_nat_no(num);
    return 0;
}
void even_nat_no(int N)
{
    if(N == 0)
    return ;
    even_nat_no(N-1);
    printf("%d\n",2*N);
}