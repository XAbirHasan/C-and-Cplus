#include <stdio.h>
#include <string.h>

int palindrome_finder(char str[])
{
    int i, j, l;

    l = strlen(str);

    for(i = 0 ,j = l-1; i<=j ; i++,j--)
    {
        if(str[i] != str[j])
        {
            return 0;
        }
    }

    return 1;
}

int main()
{
    char str[100];
    int flag;

    printf("Enter your string :");
    gets(str);

    flag = palindrome_finder(str);

    if(flag == 1)
    {
        printf("\nIts a palindrome");
    }
    else
    {
        printf("\nIts not a palindrome");
    }

    return 0;
}
