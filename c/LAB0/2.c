#include <stdio.h>
void copy(char str1[], char str2[], int i);

int main()
{
    char str1[20], str2[20];

    printf("Enter string to copy: ");
    gets(str1);
    copy(str1, str2,0);
    printf("The first string is: %s\n", str1);
    printf("The second string is: %s\n", str2);
    return 0;
}

void copy(char str1[], char str2[], int i)
{
    str2[i]=str1[i];
    if(str1[i]=='\0')
    {
        return;
    }
    copy(str1,str2,i+1);
}
