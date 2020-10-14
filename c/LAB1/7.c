#include <stdio.h>
#include <conio.h>

int main()
{

    int a,i;

    float b,j;

    printf("Enter a integar and a float number\n");
    scanf("%d%f",&a,&b);


    j=(float)a;

    printf("Typecasting =%f\n",j);


    i=(int)b;

    printf("Typecasting =%d\n",i);

    return 0;
    getch();

}
