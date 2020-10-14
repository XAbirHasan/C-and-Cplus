#include <stdio.h>
#include <string.h>

int main()
{
    char str[100], temp;

    int i, j, n, len;

    printf("Enter your string :");
    gets(str);

    printf("Enter number of cycle :");
    scanf("%d",&n);

    len = strlen(str);

    for(i = 1; i<= n ; i++)
    {
        temp = str[len-1];

        for(j = len-2; j>=0 ; j-- )
        {
            str[j+1] = str[j];
        }
        str[0] = temp;
    }
    printf("the string is %s",str);
}
