#include <stdio.h>
#include <stdlib.h>

int main()
{
    char str1[100], str2[100],str3[200];
    int i, j, k;

    printf("First string :");
    gets(str1);
    fflush(stdin);
    printf("\nSecond string :");
    gets(str2);

    for(i = 0; str1[i] != '\0'; i++)
    {
        str3[i] = str1[i];
    }

    for(j = i, k = 0; str2[k] != '\0'; j++, k++)
    {
        str3[j] = str2[k];
    }
    str3[j]='\0';

    printf("\nThird string : %s\n",str3);

    return 0;

}

