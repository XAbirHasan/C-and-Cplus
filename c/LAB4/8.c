#include <stdio.h>

int word_counter(char str[])
{
    int i, w = 1;
    for(i=0; str[i] != '\0'; i++)
    {
        if(str[i] == ' ' || str[i] == '\n' || str[i] == '.')
        {
            w++;
        }
    }
    return w;
}

int main()
{
    char str[100];
    int word;

    printf("Enter your string :");
    gets(str);

    word = word_counter(str);

    printf("\nThe number of word : %d",word);

    return 0;
}
