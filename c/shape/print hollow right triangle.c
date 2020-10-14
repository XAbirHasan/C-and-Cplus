/**
 * C program to print hollow right triangle star pattern
 */

#include <stdio.h>

int main()
{
    int i, j, n;


    printf("Enter value of n: ");
    scanf("%d", &n);


    for(i=1; i<=n; i++)
    {
        for(j=i; j<=n; j++)
        {

            if(i==1 || j==i || j==n)
            {
                printf("*");
            }
            else
            {

                printf(" ");
            }
        }

        printf("\n");
    }

    return 0;
}
