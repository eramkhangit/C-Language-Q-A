/* pattern 10
1234321
123 321
12   21
1     1
*/
#include<stdio.h>
int main()
{
    int i, j,a;
    for(i=1; i<=4; i++)
    {  a = 1; 
        for(j=1; j<=7; j++)
        { 
            if(j<=5-i || 3+i<=j)
            {            
                printf("%d",a);
              j<4 ? a++ : a--;
            }
         else 
             {   
                 if(a == j)           
                 a=j-1;                
                 printf(" ");
              }
        }
         printf("\n");
    }
}
 