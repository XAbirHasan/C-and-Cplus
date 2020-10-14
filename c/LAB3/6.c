#include<stdio.h>

int main()
{
    int player_1,n_terms,player_2,i;

    printf("Player-1 picks a number=\t");
    scanf("%d",&player_1);

    printf("\nNumber of tries=\t");
    scanf("%d",&n_terms);

    for (i=n_terms;i>0;--i){
        printf("\nPlayer-2 to guess=\t");
        scanf("%d",&player_2);

        if(player_1==player_2){
            printf("\nRight, Player-2 wins! ");
            break;
        }

        else if(i==1){
            printf("\nWrong, %d Choice(s) Left!\nPlayer-1 wins!",--n_terms);
        }
        else{
            printf("\nWrong, %d Choice(s) Left!",--n_terms);
        }

    }
    return 0;
}
