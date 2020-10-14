#include <stdio.h>

int power(int num, int pow);
int main()
{
    int pow,num,result;
    printf("Enter a positive integer number: ");
    scanf("%d", &num);
    printf("Enter power: ");
    scanf("%d", &pow);
    result = power(num,pow);
    printf("%d^%d=%d",num, pow,result);
    return 0;
}
int power (int num, int pow)
{
    if (pow!=0)
    {
        return (num*power(num, pow-1));
    }
    else return 1;
}
