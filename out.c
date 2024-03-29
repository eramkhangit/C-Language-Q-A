#include<stdio.h>
int main()
{
  int n,s =0, r;
printf("enter the number n");
scanf("%d",&n);
while(n!=0)
{
r = n%10;
n /=10;
s = s* 10+ r;
}
printf("%d",s);
   return 0;
}
