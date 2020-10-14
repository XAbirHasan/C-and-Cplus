#include<stdio.h>
int main()
{
    int day,month,year,next_day,next_month,next_year;

    next_day=next_month=next_year=0;
    scanf("%d%d%d",&day,&month,&year);
    printf("The date you enter=\t%d-%d-%d",day,month,year);

    if(month==1 ||  month==3 ||  month==5 ||  month==7 ||  month==8 month==10 ||  month==12){
        if(day==31){
            next_day=1;
            next_month=month+1;
            next_year=year;
        }
        else if(day==31 && month==12){
            next_day=1;
            next_month=month+1;
            next_year=year+1;
        }
        else{
            next_day=day+1;
            next_month=month;
            next_year=year;

        }
    }
    else if(month==2){
        if((year%4==0 && year%100!=0) || (year%400==0)){
            if(day==28){
                next_day=day+1;
                next_month=month+1;
                next_year=year;

            }
            else{
                next_day=day+1;
                next_month=month;
                next_year=year;
            }
        }
        else{
            if(day==28){
                next_day=1;
                next_month=month+1;
                next_year=year;

            }
            else{
                next_day=day+1;
                next_month=month;
                next_year=year;
            }

        }

    }
    else{
        if(day==30){
                next_day=1;
                next_month=month+1;
                next_year=year;

            }
            else{
                next_day=day+1;
                next_month=month;
                next_year=year;
            }

    }

    printf("Your next day is=\t%d-%d-%d",next_day,next_month,next_year);

    return 0;
}

