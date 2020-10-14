#include<stdio.h>

int main()
{
    int n_term,i;

    printf("Enter N term =");
    scanf("%d",&n_term);

    for(i=1;i<=n_term;i+=2){
        printf("%d ,",i);
    }

    return 0;
}
