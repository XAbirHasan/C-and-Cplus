#include <stdio.h>

long long int power(int num, int p)
{

    if(p == 0)
    {
        return 1;
    }
    return num*power(num, p-1);

}

int main()
{
    int num, p;
    long long int pNum;

    printf("Enter your number and its positive power: ");
    scanf("%d%d",&num, &p);

    pNum = power(num,p);

    printf("\n%d ^ %d : %lld\n",num, p, pNum);

    return 0;
}
