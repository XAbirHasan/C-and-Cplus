#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <conio.h>

int high(char s[])
{
    int i,j,ind, c, max;
    max = 0;
    for(i=0; s[i]!='\0'; i++)
    {
        c = 0;
        for(j = i+1;s[j]!='\0';j++)
        {
            if(s[i]==s[j])
            {
                c++;
            }
            if(max < c)
            {
                max = c;
                ind = i;
            }
        }
    }

    return ind;
}

int main()
{
    char s[50];
    int index = 0;
    gets(s);

    index = high(s);

    printf("%c",s[index]);
    _getch();
    return 0;

}
