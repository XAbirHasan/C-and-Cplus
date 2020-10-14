#include<stdio.h>

int main()
{

    int x,y,square;
    scanf("%d%d",&x,&y);

    while(1){
        square=x*x;
        if(x<y){
            x++;
        }
        else if(x==y){
            printf("Reached !");
            break;
        }
        else{
            x--;
        }
        printf("%d,\t",square);
    }

    return 0;
}
