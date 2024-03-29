#include<stdio.h>
int main()
{ int n, r, s=0;
printf("enter the no.");
scanf("%d",&n);
do{
r=n%10;
s=s+r;
n=n/10;
}while(n!=0);
return 0;
}