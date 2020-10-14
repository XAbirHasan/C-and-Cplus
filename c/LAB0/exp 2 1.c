#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <conio.h>

void l_word(char s[])
{
    int i, j, k ,c, flag=0;

    c=0;
    for(i = 0; s[i] != '\0'; i++)
    {
        c++;
        if(s[i] == ' ' || s[i] == '\0' || s[i] == '.')
        {
            c=0;
        }
        if((s[i] == 'l' || s[i] == 'L')&& (s[i+1] == ' ' || s[i+1] == '\0' || s[i+1] == '.'))
        {
            flag=1;
        }
        if(flag==1)
        {
            for(j = i-c+1 ,k = 0; k<c;j++, k++)
            {
                 printf("%c",s[j]);
            }
            printf("\n");
            c=0;
            i=i+1;
            flag=0;
        }
    }
}

void main()
{
    char s[200];
    gets(s);
    l_word(s);
    _getch();
}
