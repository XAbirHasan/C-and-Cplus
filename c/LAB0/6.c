#include <stdio.h>

int LCM(int, int);

int main()
{
    int a, b, result;

    printf("Enter two numbers: ");
    scanf("%d%d", &a, &b);
    result = LCM(a, b);
    printf("The LCM of %d and %d is %d\n", a, b, result);
    return 0;
}

int LCM(int a, int b)
{
    static int common = 1;

    if (common % a == 0 && common % b == 0)
    {
        return common;
    }
    common++;
    LCM(a, b);
}
