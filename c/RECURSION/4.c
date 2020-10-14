#include <stdio.h>

int check_palindrome(char str[], int i , int l)
{
    if(str[i]=='\0')
    {
        return 1;
    }
    if(str[i]!=str[l])
    {
        return 0;
    }
    check_palindrome(str, i+1, l-1);
}

int main()
{
    char str[100];

    int i, l, flag;

    printf("Enter your string : ");
    gets(str);

    l=0;
    for(i = 0; str[i] != '\0'; i++)
    {
        l++;
    }
    flag = check_palindrome(str, 0, l-1);

    if(flag == 1)
    {
        printf("\nYES. The string is palindrome.\n");
    }
    else
    {
        printf("\nNO. The string is not palindrome.\n");
    }

    return 0;
}
