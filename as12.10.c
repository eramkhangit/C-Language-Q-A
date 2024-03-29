//write a recursive fuction to print reverse of a given number .
#include<stdio.h>
void reverse_num(int );
int main()
{
    int num ;
    printf("enter num :");
    scanf("%d",&num);
    reverse_num(num);
    return 0;
}
void  reverse_num(int N)
{  int r;
    if(N>0 )
   {
     r = N %10;
   printf("%d",r);
   reverse_num(N/10);
   }
  
}