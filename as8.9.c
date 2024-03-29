/* pattern 9
1234321
 12321
  121
   1
*/
#include<stdio.h>
int main()
{
    int i, j;
    for(i=1; i<=4; i++)
    { int a = 1; 
        for(j=1; j<=7; j++)
        { 
            if(i<=j && j<=8-i)
           { 
             printf("%d",a);
            j<4?a++:a--;
            }
            else 
            printf(" ");
                   }
        printf("\n");
    }
}