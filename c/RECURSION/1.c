#include <stdio.h>

void capital_later(char str[], int i)
{
    if(str[i] == '\0')
    {
        printf("\nNo capital letter is found\n");
        return;
    }
    if(str[i] >='A' && str[i]<='Z')
    {
        printf("\nThe first capital letter of the string : %c\n",str[i]);
        return;
    }

    capital_later(str, i+1);
}


int main()
{
    char str[100];
    printf("Enter your string : ");
    gets(str);

    capital_later(str, 0);

    return 0;
}
