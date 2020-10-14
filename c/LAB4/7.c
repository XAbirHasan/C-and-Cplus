#include <stdio.h>
#include <stdlib.h>

int compare_str(char str1[], char str2[])
{
    int i;

    for(i = 0; str1[i] != '\0' || str2[i]; i++)
    {
        if(str1[i] > str2[i])
        {
            return 1;
        }
        if(str1[i] < str2[i])
        {
            return -1;
        }
    }
    return 0;
}

int main()
{
    char str1[200], str2[100];
    int l;

    printf("First string :");
    gets(str1);
    fflush(stdin);
    printf("\nSecond string :");
    gets(str2);

    l = compare_str(str1,str2);

    if(l == 0)
    {
        printf("\nBoth string is equal\n");
    }
    else if(l < 0)
    {
        printf("\nFirst string is less than Second string\n");
    }
    else
    {
        printf("\nFirst string greater than Second string\n");
    }

    return 0;
}
