//write a fuction to print all prime number between two given number (TSRN)
#include<stdio.h>
void prime_btw_two_num(int, int  );
int main ()
{
    int num1, num2; 
    printf("enter num1, num2 :");
    scanf("%d%d",&num1, &num2);
    prime_btw_two_num(num1, num2);
    return 0;
}
void prime_btw_two_num(int n1, int n2)
{
    int i;
    printf(" prime no. between two no. : ");
    for(n1 = n1 ;n1 <= n2; n1++)
    {
        for(i = 2 ; i<n1 ;i++)
        {
            if (n1 % i == 0)
            break ;
        }
        if (n1 == i )
        printf(" %d ",n1);
    }
}
