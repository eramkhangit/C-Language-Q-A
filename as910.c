#include<stdio.h>
#include<math.h>
int main()
{
    int a,b,c,D;
    float t, r, im;
    printf("enter a b c");
    scanf("%d%d%d",&a,&b,&c);
    D = b*b-4*a*c;
    switch(D>0)
        {
            case 1: t= ( -b+sqrt(D))/(2*a);
                    r= (-b-sqrt(D))/(2*a);
             printf(" roots are real and distinct %.2f%.2f",t,r);
             break;
             case 0: switch(D<0)
             { 
            case 1:
                      t = r = -b/(2*a);
                       im = (sqrt(-D))/(2*a);
                     
             printf(" roots are imaginary %.2f + i%.2f and %.2f - i%.2f ",t,im,r, im);
             break;
                  case 0 :
             r =t= -b/(2*a);
             printf(" roots are equals %.2f%.2f",t,r);
            } break;
        } 
           return 0;
}