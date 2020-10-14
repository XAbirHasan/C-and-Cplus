/**
 * C program to print hollow right triangle star pattern
 */

#include <stdio.h>

int main()
{
    int i, j, n;


    printf("Enter number of rows: ");
    scanf("%d", &n);

    for(i=1; i<=n; i++)
    {
        for(j=1; j<=i; j++)
        {
            if(j==1 || j==i || i==n)
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
