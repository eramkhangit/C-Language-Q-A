// write a function to calculatfe HCF of two no.(TSRS)
#include<stdio.h>
int hcf(int ,int);
int main()
{
  int x,y;
  printf("enter the two no. x y");
  scanf("%d%d",&x,&y);
  hcf(x,y);
  printf("hcf is %d",hcf(x,y));
  return 0;
}
int hcf(int a, int b)
{
 int A;
 A=(a<b)?a:b;
 for(A=A; A>=1;A-- )
 {
    if(a%A==0 && b%A==0)
    {
    break;
    }
      }
 return A;
}