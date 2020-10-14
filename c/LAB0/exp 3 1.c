#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <conio.h>

void rearrange(char s[])
{
    char temp;
    int i, j;
    for(i = 0; s[i] != '\0'; i++)
    {
        for(j = i+1 ; s[j] != '\0';j++)
        {
            if(s[i]>s[j])
            {
                temp = s[i];
                s[i] = s[j];
                s[j] = temp;
            }
        }
    }
}

int main()
{
    char s[100];

    printf("Enter your string :");
    gets(s);
    rearrange(s);
    printf("\nthe string in ascending order : %s\n",s);
    _getch();
    return 0;
}
