/**
*This program will evaluate simple expressions : <number1> <operators> <number2>
*/

#include <stdio.h>
#include <conio.h>
int main()
{
    char operators;
    double number1,number2,result;


    printf("Enter number1 operators (+ - * / )and number2=\n");
    scanf("%lf %c %lf",&number1,&operators,&number2);

    switch(operators){
        case '+':
            result=number1+number2;
            printf("Addition is : %f",result);
            break;

        case '-':
            result=number1-number2;
            printf("Subtraction is : %f",result);
            break;

        case '*':
            result=number1*number2;
            printf("Multiplication is : %f",result);
            break;

        case '/':
            if(number2==0){
                printf("Zero as divisor is not valid\a");
            }

            result=number1/number2;
            printf("Division is : %f",result);
            break;

        default:
            printf("Invalid operators\a");
            break;




    }
    return 0;
    getch();

}
