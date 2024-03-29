#include<stdio.h>
int main()
{
    float x, total;
    printf("enter electricity charges");
    scanf("%f",&x);
    switch(x<=50)
    {
        case 1: total=x*.5;
        break;
        case 0: switch(x<=100)
        {
            case 1: total =25+(x-50)*.75;
            break;
            case 0: switch(x<100)
            {
               case 1:total =100+(x-100)*1.2;
               break;
               case 0: switch(x>=250)
               {
                case 1: total = 220+(x-250)*1.5;
                break;
               }break;
            }break;
        }break;
    }
    total = total +total *.2;
    printf("%.2f",total);
    return 0;
}