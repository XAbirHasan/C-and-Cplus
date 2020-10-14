#include <stdio.h>
#include <conio.h>

int main()

{
    int x,y,max;
    printf("Enter two Number X and Y\n");
    scanf("%d%d",&x,&y);

    max=(x>y)?x:y;

    printf("\nMax value is= %d",max);

    return 0;
    getch();

}
