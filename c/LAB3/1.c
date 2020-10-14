#include<stdio.h>

int main()
{
    int n_term,i;

    printf("Enter N term =");
    scanf("%d",&n_term);

    for(i=1;i<=n_term;++i){
        if(i==n_term)
            printf("%d ",i);
        else
            printf("%d ,",i);
    }

    return 0;
}
