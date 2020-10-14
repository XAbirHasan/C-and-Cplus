#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <conio.h>

char find_cap(char str[])
{
    int i;
    char ch;
    for(i=0; str[i]!='\0'; i++)
    {
        if(str[i] >= 65 && str[i]<= 97)
        {
            ch = str[i];
            break;
        }
    }
    return ch;
}

int main()
{
    char s[50], ch;
    gets(s);

    ch = find_cap(s);
    printf("\nThe first capital letter in the string : %c\n",ch);
    _getch();
}
