#include<stdio.h>
int main()
{
    int number_X, number_Y,i ,square;

    printf("Enter number X and Y\t");
    scanf("%d%d",&number_X,&number_Y);

    if(number_X<=number_Y){
        for(i=number_X; i<=number_Y;i++){
            square=i*i;
            if(i==number_Y)
                printf("Reached!");
            else
                printf("%d,\t",square);
        }
    }
    else{
        for(i=number_X; i>=number_Y;i--){
            square=i*i;
            if(i==number_Y)
                printf("Reached!");
            else
                printf("%d,\t",square);
        }
    }

    return 0;
}
