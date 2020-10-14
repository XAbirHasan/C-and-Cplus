/**
*This program will decide student grade by marks .
*/

#include <stdio.h>
#include <conio.h>

int main()
{
    float marks;
    printf("Enter your marks=\n");
    scanf("%f",&marks);

    if(marks>=90 && marks<=100){
        printf("Your Grade: A\n");
    }
    else if(marks>=86){
        printf("Yoyr Grade: A-\n");
    }
    else if(marks>=82){
        printf("Yoyr Grade: B+\n");
    }
    else if(marks>=78){
        printf("Yoyr Grade: B\n");
    }
    else if(marks>=74){
        printf("Yoyr Grade: B-\n");
    }
    else if(marks>=70){
        printf("Yoyr Grade: C+\n");
    }
    else if(marks>=66){
        printf("Yoyr Grade: C\n");
    }
    else if(marks>=62){
        printf("Yoyr Grade: C-\n");
    }
    else if(marks>=58){
        printf("Yoyr Grade: D+\n");
    }
    else if(marks>=55){
        printf("Yoyr Grade: D\n");
    }
    else{
        printf("Your Grade: F\a");
    }

    return 0;
    getch();

}
