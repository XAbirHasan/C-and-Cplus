/**
 *This program to check alphabet, digit or special character by using ASCII value.
 */
#include <stdio.h>
#include <conio.h>

int main()

{
    char character;
    printf("Enter a character =\n");
    scanf("%c",&character);

    if(character>=48 && character<=57){
        printf("%c is a Digit\n",character);
    }
    else if((character>=65 && character<=90) || (character>=97 && character<=122)){
        printf("%c is an Alphabet\n",character);
    }
    else{
        printf("%c is a Special character\n",character);
    }


    return 0;
    getch();
}
