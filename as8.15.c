/*  pattern 15 
       *
      **
     * * 
    *  *  
   *****   
*/
#include<stdio.h>
int main()
{
    int i, j;
    for(i=1; i<=5; i++)
    {
        for(j=0; j<=5; j++)
        {
            if(j == 5 || 6-i == j || i ==5)
            printf("*");
            else
            printf(" ");
        }
         printf("\n");
    }
}