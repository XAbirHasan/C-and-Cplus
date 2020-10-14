#include<stdio.h>

int main()
{
    int number,temp;

    printf("Enter your Integer number=\t");
    scanf("%d",&number);

    while(number!=0){
        temp=number%10;
        printf("%d",temp);
        number/=10;
    }
    return 0;
}
