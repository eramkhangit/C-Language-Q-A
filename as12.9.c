//write a recursive function to print octal number of a given decimal number .
#include<stdio.h>
int octal_num(int );
int main()
{
    int n;
    printf("enter decimal num :");
    scanf("%d",&n);
    octal_num(n);
    printf("%d\n",octal_num(n));
    return 0;
}
int octal_num(  int N)
{  int r=0,s;

    if(N == 0)
    return 0;
    r = N;
    s=r%8;
    s =s +10*octal_num(N/=8);
    return s ;
}