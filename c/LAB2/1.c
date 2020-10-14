/**
*This program will decide whether a number is positive or not.
*/

#include <stdio.h>
#include <conio.h>

int main()
{
    float number;

    printf("Enter a Number=\n");
    scanf("%f",&number);

    if(number>=0){
        printf("The number is Positive\n");
    }
    else{
        printf("The number is Negative\n");
    }

    return 0;
    getch();

}
