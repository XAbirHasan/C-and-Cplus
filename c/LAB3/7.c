#include<stdio.h>
int main()
{
    char input;
    int i=1;

    while(1){
        scanf("%c",&input);
        if(input=='A'){
            break;
        }
        printf("\nInput %d : %c",i,input);
        i++;
    }

    return 0;

}
