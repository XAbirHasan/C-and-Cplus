/**
* This program to calculate notes
*/
#include<stdio.h>

int main()
{
    int tk_1000,tk_500,tk_100,tk_50,tk_20,tk_10,tk_5,tk_2,tk_1,amount;

    tk_1000=0;
    tk_500=0;
    tk_100=0;
    tk_50=0;
    tk_20=0;
    tk_10=0;
    tk_5=0;
    tk_2=0;
    tk_1=0;
    /**
    * you can replace this code by this line down bellow:
    * tk_1000=tk_500=tk_100=tk_50=tk_20=tk_10=tk_5=tk_2=tk_1=0;
    */

    printf("Enter Your amount=\t");
    scanf("%d",&amount);

    if(amount>=1000){
        tk_1000=amount/1000;
        printf("%d*1000+",tk_1000);
        amount-=tk_1000*1000;
    }
    if(amount>=500){
        tk_500=amount/500;
        printf("%d*500+",tk_500);
        amount-=tk_500*500;
    }
    if(amount>=100){
        tk_100=amount/100;
        printf("%d*100+",tk_100);
        amount-=tk_100*100;
    }
    if(amount>=50){
        tk_50=amount/50;
        printf("%d*50+",tk_50);
        amount-=tk_50*50;
    }
    if(amount>=20){
        tk_20=amount/20;
        printf("%d*20+",tk_20);
        amount-=tk_20*20;
    }
    if(amount>=10){
        tk_10=amount/10;
        printf("%d*10+",tk_10);
        amount-=tk_10*10;
    }
    if(amount>=5){
        tk_5=amount/5;
        printf("%d*5+",tk_5);
        amount-=tk_5*5;
    }
    if(amount>=2){
        tk_2=amount/2;
        printf("%d*2+",tk_2);
        amount-=tk_2*2;
    }
    if(amount>=1){
        tk_1=amount;
        printf("%d*1",tk_1);
    }

    return 0;


}
