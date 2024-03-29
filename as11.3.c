// write a function to check wether a given no. is prime or not (TSRS)
#include<stdio.h>
int prime(int);
int main()
{
    int x;
    printf("enter no. x");
    scanf("%d",&x);
    prime(x);
    return 0;
}
int prime(int a)
{    
     int i = 2,flag =0;
    for(i=2; i<=a-1;i++)
       {
         if(a%i==0)
         {
            break;
         }
       }
        if(a==i)
        {
        flag =1;
        }
       
       if(flag)
    return  printf("%d is prime no.",a);
    else 
   return  printf("%d is not prime no. ",a);
        
}