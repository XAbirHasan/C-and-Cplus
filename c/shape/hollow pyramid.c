/**
 * C program to print hollow pyramid or hollow equilateral triangle <a href="#">star pattern</a>
 */

#include <stdio.h>

int main()
{
    int i, j, n;


    printf("Enter value of n : ");
    scanf("%d", &n);

    for(i=1; i<=n; i++)
    {

        for(j=i; j<n; j++)
        {
            printf(" ");
        }


        for(j=1; j<=(2*i-1); j++)
        {
            if(i==n || j==1 || j==(2*i-1))
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
