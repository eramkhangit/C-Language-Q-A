/* pattern 8
      1
     121
    12321
   1234321
*/
#include<stdio.h>
int main()
{
    int i, j;
    for(i=1; i<=4; i++)
    { int a = 1; 
        for(j=1; j<=7; j++)
        { 
            if(5-i<=j && j<=3+i)
           { 
             printf("%d",a);
            j<4?a++:a--;
            }
            else 
            printf(" ");
        }
        printf("\n");
    }
    return 0;
}