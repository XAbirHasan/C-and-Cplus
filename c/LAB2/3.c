/**
*This program will take an integer of length 1 to 9 then display the digit in English.
*/
#include<stdio.h>
#include<conio.h>

int main()
{
    int number;
    printf("Enter a digit=\n");
    scanf("%d",&number);


    if(number==0){
        printf("Zero");
    }
    else if(number==1){
        printf("One");
    }
    else if(number==2){
        printf("Two");
    }
    else if(number==3){
        printf("Three");
    }
    else if(number==4){
        printf("Four");
    }
    else if(number==5){
        printf("Five");
    }
    else if(number==6){
        printf("Six");
    }
    else if(number==7){
        printf("Seven");
    }
    else if(number==8){
        printf("Eight");
    }
    else if(number==9){
        printf("Nine");
    }
    else{
        printf("Invalid");
    }
    return 0;
    getch();
}
