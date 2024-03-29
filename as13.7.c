// write a recursive function to calculate HCF of two number .
#include<stdio.h>
int hcf_ofnum(int ,int );
int main()
{
    int num1, num2;
    printf("enter num1 and num2 :");
    scanf("%d%d",&num1, &num2);
    printf(" hcf of %d and %d id :%d", num1 , num2 , hcf_ofnum(num1, num2));
    return 0;
}
int hcf_ofnum(int n1, int n2)
{
    if(n2 == 0)
    return n1;
     return  hcf_ofnum(n2 , n1 %n2);
}