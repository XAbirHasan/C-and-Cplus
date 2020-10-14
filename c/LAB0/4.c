#include <stdio.h>

void isPalindrome(char s[], int i, int j)
{
    if(s[i]=='\0' || j <0)
    {
        printf("\nYes\n");
        return;
    }
    if(s[i]!= s[j])
    {

        printf("\nNO.\n");
        return;
    }

    isPalindrome(s, i+1,j-1);
}

void main()
{
    char s[100];
    gets(s);
    int i=0;
    while(s[i]!='\0')
    {
        i++;
    }
    isPalindrome(s,0,i-1);
}
