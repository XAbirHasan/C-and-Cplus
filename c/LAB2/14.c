/**
*This program will evaluate simple expressions : <number1>  <number2> then <operators> if operator is 4 then ask for two choice.
*/
#include <stdio.h>
#include <conio.h>

int main()
{
    int operators_choice,quotient;
    double number1,number2,result,reminder;

    printf("Enter number1, number2 \nand operators choice(1 =for Addition ,2 =for Subtraction, 3 =for Multiplication, and 4 =for Division) =\n");
    scanf("%lf%lf%d",&number1,&number2,&operators_choice);


    switch(operators_choice){
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
            printf("Multiplication is :%lf",result);
            break;
        case 4:
            if(operators_choice==4){
                if(number2==0){
                    printf("Zero as divisor is not valid\a");
                }

                else{
                    int choice_case;
                    printf("Enter your choice=\n");
                    scanf("%d",&choice_case);

                    if(operators_choice==1){
                        quotient=number1/number2;
                        printf("Quitent is : %d",quotient);
                    }
                    else if(choice_case==2){
                        reminder=fmod(number1,number2);
                        printf("Reminder is :%lf",reminder);

                    }
                    else{
                        printf("Invalid operators\a");
                    }

                }

            }

            break;

        default:
            printf("Invalid operators\a");
            break;

    }
    return 0;
    getch();

}



