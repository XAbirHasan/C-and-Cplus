#include <stdio.h>
#include <string.h>

int main()
{
    char str[100], ch;

    printf("Enter your string :");
    gets(str);
    printf("Enter your character :");
    scanf("%c",&ch);

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

    printf("the string is : %s",str);

    return 0;
}
