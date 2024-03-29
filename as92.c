#include<stdio.h>
int main()
{
 int  a,b,option;
     while(option)
    {
       
    printf("\n1.addition");
    printf("\n2.Substraction");
     printf("\n3.difference");
      printf("\n4.divide");
       printf("\n5.exitb");
        printf("enter option ");
    scanf("%d",&option);
    switch(option)
    {
        case 1:
         printf("enter two no. a, b");
        scanf("%d%d",&a,&b);
        printf("%d",a+b);
        break ;
        case 2:
         printf("enter two no. a, b");
         scanf("%d%d",&a,&b);
        printf("%d",a-b);    
        break;
        case 3:
        printf("enter two no. a, b");
        scanf("%d%d",&a,&b);
        printf("%d",a*b);
        break ;
        case 4:
        printf("enter two no. a, b");
        scanf("%d%d",&a,&b);
        printf("%d",a/b);
        break ;
        case 5:
        printf("invalid month");
       break;
    }
    if(option==5)
    break;
    }
        return 0;
    
}