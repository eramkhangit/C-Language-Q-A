#include<stdio.h>
int main()
{
    float x, A;
    printf("enter electricity charges x");
    scanf("%f,&x");
    switch(x<=50)
    {
     case 1:
      A=x*0.50;
      break;
    case 0:
    switch(x<=100)
    { 
      case 1:
      A=(x*0.5)+(x-100)*0.75;
      break;
      case 0 :
      switch(x<=170)
      {
        case 1:
        A=(x*0.5)+(x*0.75)+(x-150)*1.20;
      break;
      case 0:
      switch(x>=250)
      {
      case 1:
      A=(x*0.5)+(x*0.75)+(x*1.20)+(x-250)*1.50;
      break;
      }break;
       }break;
    }break;
     }
     A= A+(x*0.2);
     printf("%.2f",A);
  return 0;
}