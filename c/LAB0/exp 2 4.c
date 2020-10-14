#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <conio.h>

int fre_counter(char s[])
{
    int i, f = 0;
    for(i=0; s[i]!='\0'; i++)
    {
        if(s[i]=='t' && s[i+1]=='h' && s[i+2] == 'e' && s[i+2] != '\0')
        {
            f++;
        }
    }
    return f;
}

void main()
{
    char s[50];
    int f=0;

    printf("string :");
    gets(s);
    f=fre_counter(s);
    printf("'the' in sentence : %d \n",f);
    _getch();
}
