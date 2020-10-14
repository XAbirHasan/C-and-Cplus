#include <stdio.h>
#include <conio.h>

int main()

{
    float a,b,X;

    printf("\n Enter two number ");
    scanf("%f%f",&a,&b);

    X=(3.31*a*a+2.01*b*b*b)/(7.16*b*b +2.01*a*a*a);

    printf("The value of X is =%f",X);

    return 0;
    getch();

}
