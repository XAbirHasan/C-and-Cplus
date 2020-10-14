#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <conio.h>

void toggle(char s[])
{
    int i;

    for(i=0; s[i]!='\0'; i++)
    {

        if(s[i] >= 'a' && s[i]<= 'z')
        {
            s[i] -= 32;
        }
        else if(s[i] >= 'A' && s[i]<= 'Z')
        {
            s[i] += 32;
        }
    }
}

void main()
{
    char s[40];

    printf("Enter your string :");
    gets(s);
    toggle(s);
    printf("\n%s\n",s);
    _getch();
}
