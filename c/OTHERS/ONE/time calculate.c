#include<stdio.h>
#include<conio.h>
#include<math.h>

int main()
{
    int hour_1,munite_1,second_1,hour_2,munite_2,second_2,time_1,time_2,time_diff,hour,munite,second;

    printf("Enter Time 1 by this format HH:MM:SS =");
    scanf("%d%d%d",&hour_1,&munite_1,&second_1);

    printf("Enter Time 2 by this format HH:MM:SS =");
    scanf("%d%d%d",&hour_2,&munite_2,&second_2);

    hour_1=hour_1*3600;
    munite_1=munite_1*60;

    hour_2=hour_2*3600;
    munite_2=munite_2*60;

    time_1=hour_1+munite_1+second_1;
    time_2=hour_2+munite_2+second_2;

    time_diff=fabs(time_1-time_2);

    second=time_diff%60;
    time_diff=time_diff/60;
    munite=time_diff%60;
    hour=time_diff/60;

    printf("Time difference is %d:%d:%d",hour,munite,second);

    return 0;
    getch();



}
