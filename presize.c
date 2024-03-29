#include<stdio.h>
   int main()
   {
     int a=2;
     double z,  y;
        y = ++a + 10.0;
          z = sizeof( y);
       printf("%lf %lf  %d", z, y, a);
   }