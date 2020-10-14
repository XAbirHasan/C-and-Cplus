/**
*This program will decide whether a year is leap year or not
*/

#include <stdio.h>
#include <conio.h>

int main()
{
    int year;
    printf("Enter a year=\n");
    scanf("%d",&year);

    if(year%4==0 && year%100!=0){
        printf("Yes %d is a leap year\n",year);
    }
    else if(year%400==0){
        printf("Yes %d is a leap year\n",year);
    }
    else {
        printf("No %d is not a leap year\n",year);
    }
    return 0;
    getch();

}
