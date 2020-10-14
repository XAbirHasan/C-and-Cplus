#include<stdio.h>

int main()
{
    int n_term,i;

    printf("Enter N term =");
    scanf("%d",&n_term);

    for(i=1;i<=n_term;++i){
        if(i%2==0){
            printf("0 ,");
        }
        else{
            printf("1 ,");
        }

    }

    return 0;
}
