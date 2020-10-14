#include <stdio.h>
#include <conio.h>

int main()
{
    int x1,x2,x3,x4;

    printf("\n Enter a Number for post-Increment=");
    scanf("%d",&x1);


    printf("\n Increment of x++ is= %d",x1++);

    printf("\n Enter a Number for pre-Increment=");
    scanf("%d",&x2);


    printf("\n Increment of ++x is= %d",++x2);

    printf("\n Enter a Number for post-decrement=");
    scanf("%d",&x3);


    printf("\n Decrement of x-- is= %d",x3--);

    printf("\n Enter a Number for post-decrement=");
    scanf("%d",&x4);

    printf("\n Decrement of --x is= %d",--x4);


    return 0;
    getch();

}
