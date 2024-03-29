//write a function to calcutale LCM of two no. (TSRS)
#include<stdio.h>
int lcm(int ,int );
int main()
{
     int a,b,c;
     printf("enter two no. a and b ");
     scanf("%d%d",&a,&b);
     c = lcm(a,b);
     printf("lcm is %d ",c);
     return 0;
}
int lcm(int x , int y)
{
    int A,B ;
    A=(x<y)?x:y;
    B=(x>y)?x:y;
    if(B%A==0)
    return B;
   else 
     return x*y;
    
}