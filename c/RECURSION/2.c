#include <stdio.h>

int string_copy(char str1[], char str2[], int i)
{
    if(str1[i] == '\0')
    {
        return i;
    }
    str2[i]= str1[i];

    string_copy(str1, str2, i+1);
}


int main()
{
    char str1[100], str2[100];

    int l;

    printf("Enter your string : ");
    gets(str1);

    l = string_copy(str1, str2, 0);

    str2[l]='\0';

    printf("\nYour string : %s", str1);
    printf("\nThe copy string : %s\n",str2);

    return 0;
}
