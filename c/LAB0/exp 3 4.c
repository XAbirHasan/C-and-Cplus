#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <conio.h>

void delete_char(char s[],char c)
{
    int i, j;
    for(i = 0; s[i] != '\0'; i++)
    {

        if(s[i] == c)
        {
            for(j = i; s[j] != '\0'; j++ )
            {
                s[j] = s[j+1];
            }
        }
    }
}

int main()
{
    char s[50], c;
    gets(s);
    fflush(stdin);
    scanf("%c",&c);
    delete_char(s,c);
    printf("%s",s);
    _getch();
    return 0;
}
