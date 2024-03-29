/* pattern 7 
**********
****  ****
***    ***
**      **
*        *
*/
#include<stdio.h>
int main ()
{
    int i, j;
    for(i=1; i<=5; i++)
    {
        for(j=1; j<=10; j++)
    {
        if(j<=6-i || 5+i<= j)
        printf("*");
        else
        printf(" ");
    }
     printf("\n");
    }
    return 0;
}