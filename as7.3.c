#include<stdio.h>
int main()
{
    int i=1,n,a=-1,b=1,c,flag=0, term ;
    printf("enter  no of term ");
    scanf("%d",&term );
    for(i=1;i<=term ;i++)
    {
      c=a+b;
      a=b;
      b=c;
      printf("%d  ",c); 
    }
    a =-1,b=1,c=0,flag =0;
    printf("enter the no you want to check ");
    scanf("%d",&n);
    for(i=1;i<=term ;i++)
    {   c=a+b;
    a=b; 
    b=c;
    if(n==c)
      {  flag=1;
        break;
        }
    }
    if(flag)
    printf("fibonnaci no");
    else
    printf("not");
    return 0;
}