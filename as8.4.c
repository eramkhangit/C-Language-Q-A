/*  pattern 4
*****
 ****
  ***
   **
    *     */
#include<stdio.h>
int main()
{
    int i, j;
    for(i= 5; i>=1 ;i--)
    {
        for(j=5; j>=1; j--)
        {
            if(i>= j)
            printf("*");
            else
            printf(" ");
        }
        printf("\n");
    }
}