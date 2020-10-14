#include<stdio.h>

int main()
{
    int input_N,i;
    float sum,average;

    printf("Enter N number=\t ");
    scanf("%d",&input_N);

    for (i=1;i<=input_N;++i){
        float number;

        scanf("%f",&number);

        sum+=number;
    }

    average=sum/input_N;

    printf("\nAVG of %d inputs :%f",input_N,average);


    return 0;
    getch();
}
