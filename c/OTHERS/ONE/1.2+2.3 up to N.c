#include<stdio.h>
#include<conio.h>

int main()
{
    int n_term,sum,count_a,count_b;

    printf("Enter N term =\n");
    scanf("%d",&n_term);

    sum=0;

    count_b=2;

    for(count_a=1;count_a<=n_term;++count_a){

        sum=sum+count_a*count_b;

        ++count_b;


        if (count_a == 1 && count_b==2){
             printf("\n(%d * %d)",count_a,count_b-1);
        }

        else if (count_a== n_term){
            printf(" (%d * %d)",count_a,count_b-1);
        }

        else{
            printf(" (%d * %d) + ", count_a,count_b-1);

        }

    }
    printf("The sum is = %d",sum);


    return 0;
    getch();


}
