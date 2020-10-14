/**
*This program will check whether a triangle can form or not with three angles.
*/

#include <stdio.h>
#include <conio.h>

int main()
{
    int angles_1,angles_2,angles_3;
    printf("Enter three Angles (between 0 to 180) =\n");
    scanf("%d%d%d",&angles_1,&angles_2,&angles_3);

    if(angles_1+angles_2+angles_3==180){
        printf("Yes this can form a Triangle\n");
    }
    else{
        printf("No this cannot form a Triangle\n");
    }

    return 0;
    getch();


}
