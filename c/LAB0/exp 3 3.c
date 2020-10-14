#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <conio.h>

void shif_cycle(char s[],int n)
{
    int i, j, l;
    char t;
    l = strlen(s);

    for(i = 1; i<= n ; i++)
    {
        t = s[l-1];

        for(j = l-2; j>=0 ; j-- )
        {
            s[j+1] = s[j];
        }
        s[0] = t;
    }
}

void main()
{
    int n;
    char s[100];
    gets(s);
    scanf("%d",&n);
    shif_cycle(s,n);
    printf("%s",s);
    _getch();
}
