#include<stdio.h>
int main()
{
    int i,a[4], large, sec_large ;
    printf("enter 10 array :");
    for(i=0; i<4; i++)
    scanf("%d",&a[i]);   
 for(i=0; i<4; i++)
 {
     for(large =i+1; large <4; large++)
    {
        if(large < a[i])
        {
          sec_large  = large ;
          large  =a[i];
        }
    }  
printf(" \nsecond largest number is : %d",sec_large);
}
}
//try it again 