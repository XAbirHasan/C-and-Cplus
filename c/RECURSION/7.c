#include <stdio.h>

int max_number_finder(int a[], int i, int n, int max )
{
    if(i>=n){
        return max;
    }
    if(a[i] > max){
        max = a[i];
    }

    max_number_finder(a, i+1, n, max);
}

int main()
{
    int array[100],n, max, i;

    printf("Number of elements :");
    scanf("%d",&n);

    printf("\nYour numbers : ");
    for(i = 0; i < n; i++)
    {
        scanf("%d",&array[i]);
    }

    max = max_number_finder(array, 0, n, array[0]);
    printf("\nLargest element is : %d\n",max);

    return 0;
}
