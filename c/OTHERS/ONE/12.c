/**
*This program will evaluate simple expressions : <number1>  <number2> then <operators>
*/

#include <stdio.h>
#include <conio.h>
int main()
{
    int operators,quotient;
    double number1,number2,result;



    printf("Enter number1, number2 \nand operators choice(1 =for addition ,2 =for subtraction, 3 =for multiplication, and 4 =for Quotient ) =\n");
    scanf("%lf%lf%d",&number1,&number2,&operators);


    switch(operators){
        case 1:
            result=number1+number2;
            printf("Addition is : %lf",result);
            break;

        case 2:
            result=number1-number2;
            printf("Subtraction is : %lf",result);
            break;

        case 3:
            result=number1*number2;
            printf("Multiplication is : %lf",result);
            break;

        case 4:
            quotient=number1/number2;
            printf("Quitent is : %d",quotient);
            break;


        default:
            printf("Invalid operators\a");
            break;

    }
    return 0;
    getch();

}
