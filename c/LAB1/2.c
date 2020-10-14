#include <stdio.h>
#include <conio.h>

int main()

{
    float pi=3.1416,r,area;
    printf("\n Enter circle radius=");
    scanf("%f",&r);

    area=pi*r*r;

    printf("\n Circle area is= %f",area);


    return 0;
    getch();
}

