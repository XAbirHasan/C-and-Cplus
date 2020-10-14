#include <stdio.h>
#include <string.h>

int main()
{
    char str[100];
    int i, j, l, index;

    printf("Enter your string :");
    gets(str);
    l=strlen(str);

    printf("Enter your index :");
    scanf("%d",&index);
    if(index<l)
    {
        for(i=0; str[i] !='\0'; i++)
        {
            if(i == index)
            {
                for(j = i; str[j] != '\0'; j++ )
                {
                    str[j] = str[j+1];
                }
            }
        }
        printf("\nThe string now : %s\n",str);
    }
    else
    {
        printf("\nThat index is not there....!\n");
    }

    return 0;
}
