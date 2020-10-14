/**
*Guessing game
*/
#include<stdio.h>
#include<conio.h>

int main()
{
    int player1,player2,n_term;
    n_term=3;
    printf("Enter player 1 number=");
    scanf("%d",&player1);

    printf("Player 2 to guess=");
    scanf("%d",&player2);

    if (player1==player2){
        printf("Right, player2 win");

    }
    else {
        printf("Wrong, you have %d chance(s) left!\ntry another one= ",--n_term);
        scanf("%d",&player2);

        if (player1==player2){
            printf("Right, player2 win\n");

        }
        else {
            printf("Wrong, you have %d chance(s) left!\ntry another one= ",--n_term);
            scanf("%d",&player2);
            if (player1==player2){
                printf("Right, player2 win");

            }
            else {
                printf("Wrong, you have %d chance(s) left!\nPlayer-1 wins!",--n_term);

            }

        }


    }

    return 0;
    getch();

}
