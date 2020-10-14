#include<stdio.h>

int main()
{
    int N,i,sum;

    printf("Enter N terms=\t");
    scanf("%d",&N);

    sum=0;
    for(i=1;i<=N;++i){
        if(i%2==0){
            sum-=i;
        }
        else{
            sum+=i;
        }
    }
    printf("The sum is=\t%d",sum);

    return 0;
}
