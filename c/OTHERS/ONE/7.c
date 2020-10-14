/**
*This program will decide two number is greater than or less than or equal.
*/
#include <stdio.h>
#include <conio.h>

int main()
{
    int x,y;
    printf("Enter two number X and Y =\n");
    scanf("%d%d",&x,&y);

    if(x>y){
        printf("%d is Greater than %d\n",x,y);
    }
    else if(x<y){
        printf("%d is Less than %d\n",x,y);
    }
    else{
        printf("%d is Equal to %d \n",x,y);
    }

    return 0;
    getch();

}
