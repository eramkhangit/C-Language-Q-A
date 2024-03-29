// function returning structure 
#include<stdio.h>
struct  fun_struct 
{
   int id ;
   char name [40];
   float salary ;
} ;

struct fun_struct input( )
{
    struct fun_struct f1;
    printf("enter id , name and salary :");
    scanf("%d",&f1.id);
    fflush(stdin);
    fgets(f1.name, 40 , stdin);
    scanf("%f",&f1.salary);
     return f1;
}
void display(struct fun_struct f2)
{
    printf("%d\n%s\n%f", f2.id,f2.name,f2.salary);
}
int main()
{
    struct fun_struct f2;
   f2 = input( ) ;
   display(f2 );
    return 0; 
}