#include <stdio.h>

void print_word(char str[])
{
    int i;

    printf("\n");
    for(i = 0; str[i] != '\0'; i++)
    {
        printf("%c",str[i]);
        if(str[i] == ' ')
        {
            printf("\n");
        }
    }
}

int main()
{
    char str[100];
    printf("Enter your string :");
    gets(str);

    print_word(str);

    return 0;
}
