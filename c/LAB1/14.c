#include <stdio.h>
#include <conio.h>
#include <math.h>

int main()

{
    double x,a,b,c;

    printf("Enter a Number = \n");
    scanf("%lf",&x);


    a=ceil(x);
    b=floor(x);
    c=fabs(x);

    printf("A =%lf\n",a);
    printf("B =%lf\n",b);
    printf("C =%lf\n",c);


    return 0;
    getch();


}
