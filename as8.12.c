/* pattern 12 
ABCDCBA
 ABCBCA
  ABA
   A
*/
#include<stdio.h>
int main ()
{
    int i,j;
    for(i=1; i<5 ;i++)
    { char k = 'A';
        for(j=1; j<=9; j++)
        {
            if(i<=j && j<=8-i)
           {
            printf("%c",k);
            j<4?k++:k--;
           }
            else 
            printf(" ");
        }
        printf("\n");
    }
}