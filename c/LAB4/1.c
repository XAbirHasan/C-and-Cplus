#include <stdio.h>
#include <stdlib.h>

void removeLetter(char str[], char ch)
{
    int i, j;
    for(i = 0; str[i] != '\0'; i++)
    {

        if(str[i] == ch)
        {
            for(j = i; str[j] != '\0'; j++ )
            {
                str[j] = str[j+1];
            }

        }

    }
}

int main()
{
    char str1[100], str2[100], ch;
    int i, j;

    printf("First string :");
    gets(str1);
    fflush(stdin);
    printf("\nSecond string :");
    gets(str2);

    for(i = 0; str1[i] != '\0'; i++)
    {
        for(j = 0; str2[j] != '\0'; j++)
        {
            if(str1[i] == str2[j])
            {
                ch = str1[i];
                removeLetter(str2,ch);
            }
        }
    }

    printf("\nThe second string now : %s\n",str2);

    return 0;
}
