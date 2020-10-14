#include <stdio.h>

int main()
{
    char str[100], ch;
    int i;

    printf("Enter your string :");
    gets(str);

    for(i=0; str[i]!='\0'; i++)
    {
        if(str[i] >= 'A' && str[i]<= 'Z')
        {
            ch = str[i];
            break;
        }
    }

    printf("\nThe first capital letter in the string : %c\n",ch);
}
