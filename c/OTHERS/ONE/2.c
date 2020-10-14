/**
*This program will whether a number is even or odd.
*/

#include <stdio.h>
#include <conio.h>

int main()
{
    int number;

    printf("Enter a number=\n");
    scanf("%d",&number);

    if(number%2==0){
        printf("The number is Even\n");
    }
    else(number<2){
        printf("The number is Odd\n");
    }

    return 0;
    getch();

}
