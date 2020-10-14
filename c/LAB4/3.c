#include <stdio.h>

void print_odd(char str[])
{
    int i;
    for(i = 0; str[i] != '\0'; i++)
    {
        if(i%2 != 0)
        {
            printf("%c",str[i]);
        }
    }
}

int main()
{
    char str[100];
    gets(str);

    print_odd(str);

}
