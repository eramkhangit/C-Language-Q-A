#include<stdio.h>
struct time 
{
    int hour ;
    int mint;
    int sec ;
};
 struct time input_time ()
 {
    struct time start , end ;

    printf("Enter start time in  HH:MM:SS ");
    scanf("%d%d%d",&start.hour, &start.mint ,&start.sec);
    printf(" Enter End time in  HH:MM:SS");
    scanf("%d%d%d", &end.hour, &end.mint , &end.sec);

 }

void time_difference( struct time *diff)
{
    struct time start1 , end1 ;
    while( end1.sec > start1.sec )
    {
        --start1.mint;
        start1.sec += 60 ;
    }
    diff -> sec = start1.sec - end1.sec ; 

    while( end1.mint > start1.mint )
    {
        --start1.hour;
        start1.mint += 60;
    }
    diff -> mint = start1.mint - end1.mint ;
    diff -> hour =  start1.hour - end1.hour ;

}
void display_time_difference( struct time TD)
{
    printf("%d: %d: %d",TD.hour,TD.mint,TD.sec);
}
int main()
{
    struct time TimeDiff;
   TimeDiff = input_time();
    time_difference(  &TimeDiff);
    display_time_difference(TimeDiff );
    return 0 ;
}// check it again