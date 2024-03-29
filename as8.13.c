/* pattern 13
 ABCDEFGFEDCBA
 ABCDEF FEDCBA
 ABCDE   EDCBA
 ABCD     DCBA
 ABC       CBA
 AB         BA
 A           A
 */
#include<stdio.h>
int main ()
{
    int i, j;
    for(i=1; i<=7; i++)
    { char k= 'A';
        for(j=1; j<=13; j++)
    {
       if(j<=8-i || 6+i<= j)
      {
        printf("%c",k);
          j<7 ? k++ : k--;
      }
        else
        {
         if(j == 7)           
          k--;                
           printf(" ");
        }
    }
     printf("\n");
    }
}