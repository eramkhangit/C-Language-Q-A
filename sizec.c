#include<stdio.h>
int main()
{
 int a = 3, b;
    a++;
    b = a++ + ++a + 3;
     printf("%d %d ",a,b);
}