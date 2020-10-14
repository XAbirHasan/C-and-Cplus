#include <stdio.h>
#include <conio.h>

int main()
{
    float x,y,addition,subtrction,multiplication,remainder;
    printf("Enter X and Y\n");
    scanf("%f%f",&x,&y);

    addition=x+y;
    printf("\nAddition is %f",addition);

    subtrction=x-y;
    printf("\nSubtraction is %f",subtrction);

    multiplication=x*y;
    printf("\nMultiplication is %f",multiplication);

    int quotient;
    quotient=x/y;
    printf("\nQuotient is =%d",quotient);

    remainder= fmod(x,y);
    printf("\n Remainder = %f", remainder);



    return 0;
    getch();
}
