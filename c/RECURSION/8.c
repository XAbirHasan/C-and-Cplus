#include <stdio.h>

int calculate_digit(long long int num, int digit)
{
    num = num/10;
    digit++;
    if(num == 0)
    {
        return digit;
    }
    calculate_digit(num, digit);
}

int main()
{
    long long int num;
    int digit;

    printf("Enter your number : ");
    scanf("%lld",&num);

    digit = calculate_digit(num,0);

    printf("\nDigits of a given number : %d", digit);

    return 0;
}
