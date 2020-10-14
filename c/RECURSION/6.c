#include <stdio.h>

int LCM_finder(int num1, int num2, int min)
{
    if(min%num1 == 0 && min%num2 == 0)
    {
        return min;
    }
    LCM_finder(num1, num2, min+1);
}

int main()
{
    int num1, num2, min, lcm;

    printf("Enter two number : ");
    scanf("%d%d",&num1, &num2);

    min = (num1>num2) ? num1: num2;

    lcm = LCM_finder(num1, num2, min);

    printf("\nLCM of %d and %d is : %d\n",num1, num2, lcm);

    return 0;

}
