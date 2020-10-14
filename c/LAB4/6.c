#include <stdio.h>
#include <stdlib.h>

void str_concatenate(char str1[], char str2[])
{
    int i, j, k;

    for(i = 0; str1[i] != '\0'; i++)
    {

    }

    for(j = i, k = 0; str2[k] != '\0'; j++, k++)
    {
        str1[j]=str2[k];
    }
    str1[j] = '\0';
}

int main()
{
    char str1[200], str2[100];

    printf("First string :");
    gets(str1);
    fflush(stdin);
    printf("\nSecond string :");
    gets(str2);

    str_concatenate(str1,str2);

    printf("\n%s",str1);

    return 0;
}
