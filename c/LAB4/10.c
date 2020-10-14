#include <stdio.h>

int main()
{
    char str[100];
    int i, j;
    printf("Enter your string :");
    gets(str);

    for(i=0;str[i]!='\0';i++)
    {
        for(j = i+1;str[j]!='\0';j++)
        {
            if(str[i]== str[j])
            {
                str[j]= '#';
            }
        }
    }

    printf("\nThe string Now : %s",str);

    return 0;
}
