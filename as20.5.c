// Write a program to find the maximum number between two number using a pointer.
#include<stdio.h>
void max_num(int * , int *);
int main()
{
    int num1, num2 ;
    printf("enter num1 and num2 : ");
    scanf("%d%d",&num1,&num2);
    max_num( &num1 , &num2 );
    return 0;

}
void max_num(int *n1 , int *n2 )
{
    int max = 0 ;
    if( *n1 > *n2 )
    printf("max number is : %d ", *n1);
    else 
    printf("max num is %d ", *n2);
}