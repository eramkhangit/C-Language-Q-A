//write a fuction to print first N prime number (TSRN)
#include<stdio.h>
void prime_btw_two_num(int );
int main ()
{
    int num; 
    printf("enter num :");
    scanf("%d",&num);
    prime_btw_two_num(num);
    return 0;
}
void prime_btw_two_num(int N )
{
    int i , a = 2 ;
    while(N )
    {
        for(i = 2; i<a ; i++)
        {
            if(a % i == 0)
            break ;
        }
        if (a == i )
        {
            printf("%d\n",a );
            N--;
        }
        a++;
    }
}